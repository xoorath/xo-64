// Generated by xo-tt64.
// A tool by xoorath.
//
// Name: cardspades6
// Size: 64 x 87
// Type: 16-Bit RGBA (OUTFMT_RGBA_16)

#ifndef _cardspades6_H_
#define _cardspades6_H_

#include <xo-types.h>
#include <xo-img.h>

#include <xo-spec.h>

xo_spec_DeclareRomSegment(cardspades6)

#ifndef GENERATED_IMAGE_DECLARATIONS
extern Img_t cardspades6;
#else // GENERATED_IMAGE_DECLARATIONS
#include <xo-render.h>
#include <PR/gbi.h>

Vtx cardspades6_mesh_0[] = {
    {.v = {.ob = {0  , 0  , 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , 0  , 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -32, 0}, .flag = 0, .tc = {64 <<6, 32 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {0  , -32, 0}, .flag = 0, .tc = {0  <<6, 32 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}}
}; // cardspades6_mesh_0

Vtx cardspades6_mesh_1[] = {
    {.v = {.ob = {0  , -32, 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -32, 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -64, 0}, .flag = 0, .tc = {64 <<6, 32 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {0  , -64, 0}, .flag = 0, .tc = {0  <<6, 32 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}}
}; // cardspades6_mesh_1

Vtx cardspades6_mesh_2[] = {
    {.v = {.ob = {0  , -64, 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -64, 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -87, 0}, .flag = 0, .tc = {64 <<6, 23 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {0  , -87, 0}, .flag = 0, .tc = {0  <<6, 23 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}}
}; // cardspades6_mesh_2

ImgSeg_t cardspades6_components[] = {
  {
    _cardspades6SegmentRomStart + 0,
    _cardspades6SegmentRomStart + 4096,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardspades6_mesh_0
  },
  {
    _cardspades6SegmentRomStart + 4096,
    _cardspades6SegmentRomStart + 8192,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardspades6_mesh_1
  },
  {
    _cardspades6SegmentRomStart + 8192,
    _cardspades6SegmentRomStart + 11136,
    64, 23,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardspades6_mesh_2
  }
}; // cardspades6_components

Img_t cardspades6 = {
  sizeof(cardspades6_components)/sizeof(cardspades6_components[0]),
  cardspades6_components,
  64, 87,

  G_TF_BILERP
}; // cardspades6

#endif // GENERATED_IMAGE_DECLARATIONS

#endif // _cardspades6_H_
