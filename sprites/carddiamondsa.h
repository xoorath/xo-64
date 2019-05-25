// Generated by xo-tt64.
// A tool by xoorath.
//
// Name: carddiamondsa
// Size: 64 x 87
// Type: 16-Bit RGBA (OUTFMT_RGBA_16)

#ifndef _carddiamondsa_H_
#define _carddiamondsa_H_

#include <xo-types.h>
#include <xo-img.h>

#include <xo-spec.h>

xo_spec_DeclareRomSegment(carddiamondsa)

#ifndef GENERATED_IMAGE_DECLARATIONS
extern Img_t carddiamondsa;
#else // GENERATED_IMAGE_DECLARATIONS
#include <xo-render.h>
#include <PR/gbi.h>

Vtx carddiamondsa_mesh_0[] = {
    {.v = {.ob = {  0,   0, 0}, .flag = 0, .tc = {  0<<6,   0<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = { 64,   0, 0}, .flag = 0, .tc = { 64<<6,   0<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = { 64, -32, 0}, .flag = 0, .tc = { 64<<6,  32<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = {  0, -32, 0}, .flag = 0, .tc = {  0<<6,  32<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}}
}; // carddiamondsa_mesh_0

Vtx carddiamondsa_mesh_1[] = {
    {.v = {.ob = {  0, -32, 0}, .flag = 0, .tc = {  0<<6,   0<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = { 64, -32, 0}, .flag = 0, .tc = { 64<<6,   0<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = { 64, -64, 0}, .flag = 0, .tc = { 64<<6,  32<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = {  0, -64, 0}, .flag = 0, .tc = {  0<<6,  32<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}}
}; // carddiamondsa_mesh_1

Vtx carddiamondsa_mesh_2[] = {
    {.v = {.ob = {  0, -64, 0}, .flag = 0, .tc = {  0<<6,   0<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = { 64, -64, 0}, .flag = 0, .tc = { 64<<6,   0<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = { 64, -87, 0}, .flag = 0, .tc = { 64<<6,  23<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = {  0, -87, 0}, .flag = 0, .tc = {  0<<6,  23<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}}
}; // carddiamondsa_mesh_2

ImgSeg_t carddiamondsa_components[] = {
  {
    _carddiamondsaSegmentRomStart + 0,
    _carddiamondsaSegmentRomStart + 4096,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    carddiamondsa_mesh_0
  },
  {
    _carddiamondsaSegmentRomStart + 4096,
    _carddiamondsaSegmentRomStart + 8192,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    carddiamondsa_mesh_1
  },
  {
    _carddiamondsaSegmentRomStart + 8192,
    _carddiamondsaSegmentRomStart + 11136,
    64, 23,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    carddiamondsa_mesh_2
  }
}; // carddiamondsa_components

Img_t carddiamondsa = {
  sizeof(carddiamondsa_components)/sizeof(carddiamondsa_components[0]),
  carddiamondsa_components,
  64, 87,

  G_TF_BILERP
}; // carddiamondsa

#endif // GENERATED_IMAGE_DECLARATIONS

#endif // _carddiamondsa_H_
