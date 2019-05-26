// Generated by xo-tt64.
// A tool by xoorath.
//
// Name: carddiamonds8
// Size: 64 x 87
// Type: 16-Bit RGBA (OUTFMT_RGBA_16)

#ifndef _carddiamonds8_H_
#define _carddiamonds8_H_

#include <xo-types.h>
#include <xo-img.h>

#include <xo-spec.h>

xo_spec_DeclareRomSegment(carddiamonds8)

#ifndef GENERATED_IMAGE_DECLARATIONS
extern Img_t carddiamonds8;
#else // GENERATED_IMAGE_DECLARATIONS
#include <xo-render.h>
#include <PR/gbi.h>

Vtx carddiamonds8_mesh_0[] = {
    {.v = {.ob = {0  , 0  , 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {64 , 0  , 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {64 , -32, 0}, .flag = 0, .tc = {64 <<6, 32 <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {0  , -32, 0}, .flag = 0, .tc = {0  <<6, 32 <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}}
}; // carddiamonds8_mesh_0

Vtx carddiamonds8_mesh_1[] = {
    {.v = {.ob = {0  , -32, 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {64 , -32, 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {64 , -64, 0}, .flag = 0, .tc = {64 <<6, 32 <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {0  , -64, 0}, .flag = 0, .tc = {0  <<6, 32 <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}}
}; // carddiamonds8_mesh_1

Vtx carddiamonds8_mesh_2[] = {
    {.v = {.ob = {0  , -64, 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {64 , -64, 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {64 , -87, 0}, .flag = 0, .tc = {64 <<6, 23 <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {0  , -87, 0}, .flag = 0, .tc = {0  <<6, 23 <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}}
}; // carddiamonds8_mesh_2

ImgSeg_t carddiamonds8_components[] = {
  {
    _carddiamonds8SegmentRomStart + 0,
    _carddiamonds8SegmentRomStart + 4096,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    carddiamonds8_mesh_0
  },
  {
    _carddiamonds8SegmentRomStart + 4096,
    _carddiamonds8SegmentRomStart + 8192,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    carddiamonds8_mesh_1
  },
  {
    _carddiamonds8SegmentRomStart + 8192,
    _carddiamonds8SegmentRomStart + 11136,
    64, 23,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    carddiamonds8_mesh_2
  }
}; // carddiamonds8_components

Img_t carddiamonds8 = {
  sizeof(carddiamonds8_components)/sizeof(carddiamonds8_components[0]),
  carddiamonds8_components,
  64, 87,

  G_TF_BILERP
}; // carddiamonds8

#endif // GENERATED_IMAGE_DECLARATIONS

#endif // _carddiamonds8_H_
