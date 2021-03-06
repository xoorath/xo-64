// Generated by xo-tt64.
// A tool by xoorath.
//
// Name: carddiamondsk
// Size: 64 x 87
// Type: 16-Bit RGBA (OUTFMT_RGBA_16)

#ifndef _carddiamondsk_H_
#define _carddiamondsk_H_

#include <xo-types.h>
#include <xo-img.h>

#include <xo-spec.h>

xo_spec_DeclareRomSegment(carddiamondsk)

#ifndef GENERATED_IMAGE_DECLARATIONS
extern Img_t carddiamondsk;
#else // GENERATED_IMAGE_DECLARATIONS
#include <xo-render.h>
#include <PR/gbi.h>

Vtx carddiamondsk_mesh_0[] = {
    {.v = {.ob = {0  , 0  , 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , 0  , 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -32, 0}, .flag = 0, .tc = {64 <<6, 32 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {0  , -32, 0}, .flag = 0, .tc = {0  <<6, 32 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}}
}; // carddiamondsk_mesh_0

Vtx carddiamondsk_mesh_1[] = {
    {.v = {.ob = {0  , -32, 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -32, 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -64, 0}, .flag = 0, .tc = {64 <<6, 32 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {0  , -64, 0}, .flag = 0, .tc = {0  <<6, 32 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}}
}; // carddiamondsk_mesh_1

Vtx carddiamondsk_mesh_2[] = {
    {.v = {.ob = {0  , -64, 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -64, 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -87, 0}, .flag = 0, .tc = {64 <<6, 23 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {0  , -87, 0}, .flag = 0, .tc = {0  <<6, 23 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}}
}; // carddiamondsk_mesh_2

ImgSeg_t carddiamondsk_components[] = {
  {
    _carddiamondskSegmentRomStart + 0,
    _carddiamondskSegmentRomStart + 4096,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    carddiamondsk_mesh_0
  },
  {
    _carddiamondskSegmentRomStart + 4096,
    _carddiamondskSegmentRomStart + 8192,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    carddiamondsk_mesh_1
  },
  {
    _carddiamondskSegmentRomStart + 8192,
    _carddiamondskSegmentRomStart + 11136,
    64, 23,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    carddiamondsk_mesh_2
  }
}; // carddiamondsk_components

Img_t carddiamondsk = {
  sizeof(carddiamondsk_components)/sizeof(carddiamondsk_components[0]),
  carddiamondsk_components,
  64, 87,

  G_TF_BILERP
}; // carddiamondsk

#endif // GENERATED_IMAGE_DECLARATIONS

#endif // _carddiamondsk_H_
