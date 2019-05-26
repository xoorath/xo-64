// Generated by xo-tt64.
// A tool by xoorath.
//
// Name: cardjoker
// Size: 64 x 87
// Type: 16-Bit RGBA (OUTFMT_RGBA_16)

#ifndef _cardjoker_H_
#define _cardjoker_H_

#include <xo-types.h>
#include <xo-img.h>

#include <xo-spec.h>

xo_spec_DeclareRomSegment(cardjoker)

#ifndef GENERATED_IMAGE_DECLARATIONS
extern Img_t cardjoker;
#else // GENERATED_IMAGE_DECLARATIONS
#include <xo-render.h>
#include <PR/gbi.h>

Vtx cardjoker_mesh_0[] = {
    {.v = {.ob = {0  , 0  , 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , 0  , 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -32, 0}, .flag = 0, .tc = {64 <<6, 32 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {0  , -32, 0}, .flag = 0, .tc = {0  <<6, 32 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}}
}; // cardjoker_mesh_0

Vtx cardjoker_mesh_1[] = {
    {.v = {.ob = {0  , -32, 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -32, 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -64, 0}, .flag = 0, .tc = {64 <<6, 32 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {0  , -64, 0}, .flag = 0, .tc = {0  <<6, 32 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}}
}; // cardjoker_mesh_1

Vtx cardjoker_mesh_2[] = {
    {.v = {.ob = {0  , -64, 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -64, 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {64 , -87, 0}, .flag = 0, .tc = {64 <<6, 23 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}},
    {.v = {.ob = {0  , -87, 0}, .flag = 0, .tc = {0  <<6, 23 <<6}, .cn = {0xf0, 0xf0, 0xf0, 0xff}}}
}; // cardjoker_mesh_2

ImgSeg_t cardjoker_components[] = {
  {
    _cardjokerSegmentRomStart + 0,
    _cardjokerSegmentRomStart + 4096,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardjoker_mesh_0
  },
  {
    _cardjokerSegmentRomStart + 4096,
    _cardjokerSegmentRomStart + 8192,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardjoker_mesh_1
  },
  {
    _cardjokerSegmentRomStart + 8192,
    _cardjokerSegmentRomStart + 11136,
    64, 23,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardjoker_mesh_2
  }
}; // cardjoker_components

Img_t cardjoker = {
  sizeof(cardjoker_components)/sizeof(cardjoker_components[0]),
  cardjoker_components,
  64, 87,

  G_TF_BILERP
}; // cardjoker

#endif // GENERATED_IMAGE_DECLARATIONS

#endif // _cardjoker_H_
