// Generated by xo-tt64.
// A tool by xoorath.
//
// Name: cardclubsq_l
// Size: 64 x 32
// Type: 16-Bit RGBA (OUTFMT_RGBA_16)

#ifndef _cardclubsq_l_H_
#define _cardclubsq_l_H_

#include <xo-types.h>
#include <xo-img.h>

#include <xo-spec.h>

xo_spec_DeclareRomSegment(cardclubsq_l)

#ifndef GENERATED_IMAGE_DECLARATIONS
extern Img_t cardclubsq_l;
#else // GENERATED_IMAGE_DECLARATIONS
#include <xo-render.h>
#include <PR/gbi.h>

Vtx cardclubsq_l_mesh_0[] = {
    {.v = {.ob = {0  , 0  , 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0x00, 0x00, 0x00, 0x00}}},
    {.v = {.ob = {64 , 0  , 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0x00, 0x00, 0x00, 0x00}}},
    {.v = {.ob = {64 , -32, 0}, .flag = 0, .tc = {64 <<6, 32 <<6}, .cn = {0x00, 0x00, 0x00, 0x00}}},
    {.v = {.ob = {0  , -32, 0}, .flag = 0, .tc = {0  <<6, 32 <<6}, .cn = {0x00, 0x00, 0x00, 0x00}}}
}; // cardclubsq_l_mesh_0

ImgSeg_t cardclubsq_l_components[] = {
  {
    _cardclubsq_lSegmentRomStart + 0,
    _cardclubsq_lSegmentRomStart + 4096,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardclubsq_l_mesh_0
  }
}; // cardclubsq_l_components

Img_t cardclubsq_l = {
  sizeof(cardclubsq_l_components)/sizeof(cardclubsq_l_components[0]),
  cardclubsq_l_components,
  64, 32,

  G_TF_BILERP
}; // cardclubsq_l

#endif // GENERATED_IMAGE_DECLARATIONS

#endif // _cardclubsq_l_H_
