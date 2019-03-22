// Generated by xo-tt64.
// A tool by xoorath.
//
// Name: heart_ace
// Size: 66 x 95
// Type: 16-Bit RGBA (OUTFMT_RGBA_16)

#ifndef _heart_ace_H_
#define _heart_ace_H_

#include <PR/ultratypes.h>
#include <xo-img.h>

#include "xo-spec.h"

xo_spec_DeclareRomSegment(heart_ace)

#ifndef GENERATED_IMAGE_DECLARATIONS
extern Img_t heart_ace;
#else // GENERATED_IMAGE_DECLARATIONS
#include "xo-render.h"
#include <PR/gbi.h>

Vtx heart_ace_mesh_0[] = {
    {.v = {.ob = {0,    0, 0}, .flag = 0, .tc = {0,     0    }, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = {64,   0, 0}, .flag = 0, .tc = {64<<6, 0    }, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = {64, -32, 0}, .flag = 0, .tc = {64<<6, 32<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = {0,  -32, 0}, .flag = 0, .tc = {0,     32<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
};

Vtx heart_ace_mesh_1[] = {
    {.v = {.ob = {0,  -32, 0}, .flag = 0, .tc = {0,     0    }, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = {64, -32, 0}, .flag = 0, .tc = {64<<6, 0    }, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = {64, -64, 0}, .flag = 0, .tc = {64<<6, 32<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = {0,  -64, 0}, .flag = 0, .tc = {0,     32<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
};

Vtx heart_ace_mesh_2[] = {
    {.v = {.ob = {0,  -64, 0}, .flag = 0, .tc = {0,     0    },  .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = {64, -64, 0}, .flag = 0, .tc = {64<<6, 0    },  .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = {64, -92, 0}, .flag = 0, .tc = {64<<6, 28<<6},  .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = {0,  -92, 0}, .flag = 0, .tc = {0,     28<<6},  .cn = {0xff, 0xff, 0xff, 0xff}}},
};

ImgSeg_t heart_ace_components[] = {
  {
    _heart_aceSegmentRomStart ,
    _heart_aceSegmentRomStart + (64*32*2),
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    heart_ace_mesh_0
  },
  {
    _heart_aceSegmentRomStart + (64*32*2),
    _heart_aceSegmentRomStart + (64*32*2) +  (64*32*2),
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    heart_ace_mesh_1
  },
  {
    _heart_aceSegmentRomStart + (64*32*2) +  (64*32*2),
    _heart_aceSegmentRomStart + (64*32*2) +  (64*32*2) + (64*28*2),
    64, 28,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    heart_ace_mesh_2
  }
}; // heart_ace_components

Img_t heart_ace = {
  sizeof(heart_ace_components)/sizeof(heart_ace_components[0]),
  heart_ace_components,
  64, 92,

  G_TF_BILERP
}; // heart_ace

#endif // GENERATED_IMAGE_DECLARATIONS

#endif // _heart_ace_H_
