// Generated by xo-tt64.
// A tool by xoorath.
//
// Name: cardclubs8
// Size: 64 x 87
// Type: 16-Bit RGBA (OUTFMT_RGBA_16)

#ifndef _cardclubs8_H_
#define _cardclubs8_H_

#include <xo-types.h>
#include <xo-img.h>

#include <xo-spec.h>

xo_spec_DeclareRomSegment(cardclubs8)

#ifndef GENERATED_IMAGE_DECLARATIONS
extern Img_t cardclubs8;
#else // GENERATED_IMAGE_DECLARATIONS
#include <xo-render.h>
#include <PR/gbi.h>

Vtx cardclubs8_mesh_0[] = {
    {.v = {.ob = {0  , 0  , 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , 0  , 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -32, 0}, .flag = 0, .tc = {64 <<6, 32 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {0  , -32, 0}, .flag = 0, .tc = {0  <<6, 32 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}}
}; // cardclubs8_mesh_0

Vtx cardclubs8_mesh_1[] = {
    {.v = {.ob = {0  , -32, 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -32, 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -64, 0}, .flag = 0, .tc = {64 <<6, 32 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {0  , -64, 0}, .flag = 0, .tc = {0  <<6, 32 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}}
}; // cardclubs8_mesh_1

Vtx cardclubs8_mesh_2[] = {
    {.v = {.ob = {0  , -64, 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -64, 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -87, 0}, .flag = 0, .tc = {64 <<6, 23 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {0  , -87, 0}, .flag = 0, .tc = {0  <<6, 23 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}}
}; // cardclubs8_mesh_2

ImgSeg_t cardclubs8_components[] = {
  {
    _cardclubs8SegmentRomStart + 0,
    _cardclubs8SegmentRomStart + 4096,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardclubs8_mesh_0
  },
  {
    _cardclubs8SegmentRomStart + 4096,
    _cardclubs8SegmentRomStart + 8192,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardclubs8_mesh_1
  },
  {
    _cardclubs8SegmentRomStart + 8192,
    _cardclubs8SegmentRomStart + 11136,
    64, 23,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardclubs8_mesh_2
  }
}; // cardclubs8_components

Img_t cardclubs8 = {
  sizeof(cardclubs8_components)/sizeof(cardclubs8_components[0]),
  cardclubs8_components,
  64, 87,

  G_TF_BILERP
}; // cardclubs8

#endif // GENERATED_IMAGE_DECLARATIONS

#endif // _cardclubs8_H_
