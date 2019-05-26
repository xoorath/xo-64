// Generated by xo-tt64.
// A tool by xoorath.
//
// Name: cardheartsa_l
// Size: 64 x 32
// Type: 16-Bit RGBA (OUTFMT_RGBA_16)

#ifndef _cardheartsa_l_H_
#define _cardheartsa_l_H_

#include <xo-types.h>
#include <xo-img.h>

#include <xo-spec.h>

xo_spec_DeclareRomSegment(cardheartsa_l)

#ifndef GENERATED_IMAGE_DECLARATIONS
extern Img_t cardheartsa_l;
#else // GENERATED_IMAGE_DECLARATIONS
#include <xo-render.h>
#include <PR/gbi.h>

Vtx cardheartsa_l_mesh_0[] = {
    {.v = {.ob = {0  , 0  , 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0x00, 0x00, 0x00, 0x00}}},
    {.v = {.ob = {64 , 0  , 0}, .flag = 0, .tc = {64 <<6, 0  <<6}, .cn = {0x00, 0x00, 0x00, 0x00}}},
    {.v = {.ob = {64 , -32, 0}, .flag = 0, .tc = {64 <<6, 32 <<6}, .cn = {0x00, 0x00, 0x00, 0x00}}},
    {.v = {.ob = {0  , -32, 0}, .flag = 0, .tc = {0  <<6, 32 <<6}, .cn = {0x00, 0x00, 0x00, 0x00}}}
}; // cardheartsa_l_mesh_0

ImgSeg_t cardheartsa_l_components[] = {
  {
    _cardheartsa_lSegmentRomStart + 0,
    _cardheartsa_lSegmentRomStart + 4096,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardheartsa_l_mesh_0
  }
}; // cardheartsa_l_components

Img_t cardheartsa_l = {
  sizeof(cardheartsa_l_components)/sizeof(cardheartsa_l_components[0]),
  cardheartsa_l_components,
  64, 32,

  G_TF_BILERP
}; // cardheartsa_l

#endif // GENERATED_IMAGE_DECLARATIONS

#endif // _cardheartsa_l_H_
