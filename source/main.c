#include <nusys.h>
#include <nualsgi_n.h>
#include "main.h"
#include <xo-audio.h>
#include <xo-controller.h>
#include <xo-img.h>
#include <xo-render.h>
#include <malloc.h>
#include "donsol-audio.h"
#include "donsol-stage-play.h"


volatile int stage;

/* Declaration of the prototype */
void stage00(int);
void donsol_stage_play_gfx_tick(int);

/* Declaration of the external function */
void initStage00(void);
void makeDL00(void);
void updateGame00(void);


// Values 0 or 1 used by pending check of the call-back function
volatile int pendflag = 0;
static int oldpendflag = 1;

// Frame buffers
static u16 *FrameBuf2[2] = {
    (u16 *)NU_GFX_FRAMEBUFFER1_ADDR,
    (u16 *)NU_GFX_FRAMEBUFFER2_ADDR,
};
/* Frame buffer (3 frame buffers) */
static u16 *FrameBuf3[3] = {
    (u16 *)NU_GFX_FRAMEBUFFER0_ADDR,
    (u16 *)NU_GFX_FRAMEBUFFER1_ADDR,
    (u16 *)NU_GFX_FRAMEBUFFER2_ADDR,
};
/* The number of displaying scene in a second */
int dspcount = 0;

#define HEAP_LENGTH 0x200000
u8 system_heap[HEAP_LENGTH];

/*------------------------
  Main
--------------------------*/
void mainproc(void)
{
  nuGfxInit();
  InitHeap((void *)system_heap,HEAP_LENGTH);

  xo_img_init();
  xo_render_Init();
  xo_controller_Init();
  xo_audio_Init();

  stage = 0;

  while (1)
  {
    switch (stage)
    {
    case 0:
      stage = -1;
      initStage00();
      nuGfxFuncSet((NUGfxFunc)stage00);
      nuGfxDisplayOn();
      break;
    case 1:
      stage = -1;
      donsol_stage_play_init();
      nuGfxFuncSet((NUGfxFunc)donsol_stage_play_gfx_tick);
      nuGfxDisplayOn();
      break;
    default:
      break;
    }

    /* Wait for that the call-back function switches values (switch the
    scene) */
    while (stage == -1)
      ;
    /* Clear the display */
    nuGfxDisplayOff();
  }
}


/*-----------------------------------------------------------------------------
  The call-back function

  pindingGfx which is passed from Nusystem as the argument of the call-back
  function is the total number of RCP tasks that are currently processing
  and waiting for the process.
-----------------------------------------------------------------------------*/

/* The variable for counting how many scenes can be displayed in a second */
int calcFrame(void)
{
  static char frame[60];
  static int ptr = 0;
  static s64 prev = 0, now;
  int i, ctr;

  now = nuScRetraceCounter;
  if (prev >= now)
    now += 0x100000000LL;
  if (now - prev > 60)
    prev = now;
  while (prev < now - 1)
  {
    frame[ptr++] = 0;
    ptr = ptr % 60;
    prev++;
  }
  frame[ptr++] = 1;
  ptr = ptr % 60;
  prev = now & 0xFFFFFFFF;
  ctr = 0;
  for (i = 0; i < 60; i++)
    ctr += frame[i];
  return (ctr);
}

/*
  Change function of frame buffer number
*/
void changeFrameBuffer(void)
{
  if (pendflag)
    nuGfxSetCfb(FrameBuf3, 3);
  else
    nuGfxSetCfb(FrameBuf2, 2);
  oldpendflag = pendflag; /* End of updating */
}

/* The stage 0 */
void stage00(int pendingGfx)
{
  xo_controller_Update();
  updateGame00();

  /* If necessary, change frame buffer number.*/
  if (pendflag != oldpendflag)
  {
    if (pendingGfx == 0) /* No pending display list */
      changeFrameBuffer();
    return; /* Do not launch a new task when this routine is in use */
  }

  /* Displaying process, depending on the number of processing/pending RCP tasks */
  if (pendingGfx < 4) /* The number of DLs used in stage00 is 3 kinds x 2 buffers */
  {
    dspcount = calcFrame();
    makeDL00();
  }

}

void donsol_stage_play_gfx_tick(int pendingGfx)
{
  xo_controller_Update();
  donsol_stage_play_update();

  // If necessary, change the number of frame buffers
  if (pendflag != oldpendflag)
  {
    if (pendingGfx == 0) // No pending display list
      changeFrameBuffer();
    return; // Do not launch a new task when this routine is in use
  }

  // Displaying process, depending on the number of processing/pending RCP tasks
  if (pendingGfx < 5) // The number of DLs used in stage00 is 4 kinds x 2 buffers
  {
    dspcount = calcFrame();
    donsol_stage_play_render();
  }
}
