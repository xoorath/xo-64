// Generated by xo-tt64.
// A tool by xoorath.
//
// Name: cardclubsa
// Size: 64 x 87
// Type: 16-Bit RGBA (OUTFMT_RGBA_16)

#ifndef _cardclubsa_H_
#define _cardclubsa_H_

#include <xo-types.h>
#include <xo-img.h>

#include <xo-spec.h>

xo_spec_DeclareRomSegment(cardclubsa)

#ifndef GENERATED_IMAGE_DECLARATIONS
extern Img_t cardclubsa;
#else // GENERATED_IMAGE_DECLARATIONS
#include <xo-render.h>
#include <PR/gbi.h>

Vtx cardclubsa_mesh_0[] = {
    {.v = {.ob = {0  , 0  , 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {64 , 0  , 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {64 , -32, 0}, .flag = 0, .tc = {64 <<6, 32 <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {0  , -32, 0}, .flag = 0, .tc = {0  <<6, 32 <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}}
}; // cardclubsa_mesh_0

Vtx cardclubsa_mesh_1[] = {
    {.v = {.ob = {0  , -32, 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {64 , -32, 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {64 , -64, 0}, .flag = 0, .tc = {64 <<6, 32 <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {0  , -64, 0}, .flag = 0, .tc = {0  <<6, 32 <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}}
}; // cardclubsa_mesh_1

Vtx cardclubsa_mesh_2[] = {
    {.v = {.ob = {0  , -64, 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {64 , -64, 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {64 , -87, 0}, .flag = 0, .tc = {64 <<6, 23 <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}},
    {.v = {.ob = {0  , -87, 0}, .flag = 0, .tc = {0  <<6, 23 <<6}, .cn = {0xf1, 0xf1, 0xf1, 0xff}}}
}; // cardclubsa_mesh_2

ImgSeg_t cardclubsa_components[] = {
  {
    _cardclubsaSegmentRomStart + 0,
    _cardclubsaSegmentRomStart + 4096,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardclubsa_mesh_0
  },
  {
    _cardclubsaSegmentRomStart + 4096,
    _cardclubsaSegmentRomStart + 8192,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardclubsa_mesh_1
  },
  {
    _cardclubsaSegmentRomStart + 8192,
    _cardclubsaSegmentRomStart + 11136,
    64, 23,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardclubsa_mesh_2
  }
}; // cardclubsa_components

Img_t cardclubsa = {
  sizeof(cardclubsa_components)/sizeof(cardclubsa_components[0]),
  cardclubsa_components,
  64, 87,

  G_TF_BILERP
}; // cardclubsa

#endif // GENERATED_IMAGE_DECLARATIONS

#endif // _cardclubsa_H_
