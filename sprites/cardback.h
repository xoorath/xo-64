// Generated by xo-tt64.
// A tool by xoorath.
//
// Name: cardback
// Size: 64 x 86
// Type: 16-Bit RGBA (OUTFMT_RGBA_16)

#ifndef _cardback_H_
#define _cardback_H_

#include <xo-types.h>
#include <xo-img.h>

#include <xo-spec.h>

xo_spec_DeclareRomSegment(cardback)

#ifndef GENERATED_IMAGE_DECLARATIONS
extern Img_t cardback;
#else // GENERATED_IMAGE_DECLARATIONS
#include <xo-render.h>
#include <PR/gbi.h>

Vtx cardback_mesh_0[] = {
    {.v = {.ob = {0  , 0  , 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xa2, 0xa2, 0xa2, 0xfe}}},
    {.v = {.ob = {64 , 0  , 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xa2, 0xa2, 0xa2, 0xfe}}},
    {.v = {.ob = {64 , -32, 0}, .flag = 0, .tc = {64 <<6, 32 <<6}, .cn = {0xa2, 0xa2, 0xa2, 0xfe}}},
    {.v = {.ob = {0  , -32, 0}, .flag = 0, .tc = {0  <<6, 32 <<6}, .cn = {0xa2, 0xa2, 0xa2, 0xfe}}}
}; // cardback_mesh_0

Vtx cardback_mesh_1[] = {
    {.v = {.ob = {0  , -32, 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xa2, 0xa2, 0xa2, 0xfe}}},
    {.v = {.ob = {64 , -32, 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xa2, 0xa2, 0xa2, 0xfe}}},
    {.v = {.ob = {64 , -64, 0}, .flag = 0, .tc = {64 <<6, 32 <<6}, .cn = {0xa2, 0xa2, 0xa2, 0xfe}}},
    {.v = {.ob = {0  , -64, 0}, .flag = 0, .tc = {0  <<6, 32 <<6}, .cn = {0xa2, 0xa2, 0xa2, 0xfe}}}
}; // cardback_mesh_1

Vtx cardback_mesh_2[] = {
    {.v = {.ob = {0  , -64, 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xa2, 0xa2, 0xa2, 0xfe}}},
    {.v = {.ob = {64 , -64, 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xa2, 0xa2, 0xa2, 0xfe}}},
    {.v = {.ob = {64 , -86, 0}, .flag = 0, .tc = {64 <<6, 22 <<6}, .cn = {0xa2, 0xa2, 0xa2, 0xfe}}},
    {.v = {.ob = {0  , -86, 0}, .flag = 0, .tc = {0  <<6, 22 <<6}, .cn = {0xa2, 0xa2, 0xa2, 0xfe}}}
}; // cardback_mesh_2

ImgSeg_t cardback_components[] = {
  {
    _cardbackSegmentRomStart + 0,
    _cardbackSegmentRomStart + 4096,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardback_mesh_0
  },
  {
    _cardbackSegmentRomStart + 4096,
    _cardbackSegmentRomStart + 8192,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardback_mesh_1
  },
  {
    _cardbackSegmentRomStart + 8192,
    _cardbackSegmentRomStart + 11008,
    64, 22,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardback_mesh_2
  }
}; // cardback_components

Img_t cardback = {
  sizeof(cardback_components)/sizeof(cardback_components[0]),
  cardback_components,
  64, 86,

  G_TF_BILERP
}; // cardback

#endif // GENERATED_IMAGE_DECLARATIONS

#endif // _cardback_H_
