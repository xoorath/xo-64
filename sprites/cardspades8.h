// Generated by xo-tt64.
// A tool by xoorath.
//
// Name: cardspades8
// Size: 64 x 87
// Type: 16-Bit RGBA (OUTFMT_RGBA_16)

#ifndef _cardspades8_H_
#define _cardspades8_H_

#include <xo-types.h>
#include <xo-img.h>

#include <xo-spec.h>

xo_spec_DeclareRomSegment(cardspades8)

#ifndef GENERATED_IMAGE_DECLARATIONS
extern Img_t cardspades8;
#else // GENERATED_IMAGE_DECLARATIONS
#include <xo-render.h>
#include <PR/gbi.h>

Vtx cardspades8_mesh_0[] = {
    {.v = {.ob = {  0,   0, 0}, .flag = 0, .tc = {  0<<6,   0<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = { 64,   0, 0}, .flag = 0, .tc = { 64<<6,   0<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = { 64, -32, 0}, .flag = 0, .tc = { 64<<6,  32<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = {  0, -32, 0}, .flag = 0, .tc = {  0<<6,  32<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}}
}; // cardspades8_mesh_0

Vtx cardspades8_mesh_1[] = {
    {.v = {.ob = {  0, -32, 0}, .flag = 0, .tc = {  0<<6,   0<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = { 64, -32, 0}, .flag = 0, .tc = { 64<<6,   0<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = { 64, -64, 0}, .flag = 0, .tc = { 64<<6,  32<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = {  0, -64, 0}, .flag = 0, .tc = {  0<<6,  32<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}}
}; // cardspades8_mesh_1

Vtx cardspades8_mesh_2[] = {
    {.v = {.ob = {  0, -64, 0}, .flag = 0, .tc = {  0<<6,   0<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = { 64, -64, 0}, .flag = 0, .tc = { 64<<6,   0<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = { 64, -87, 0}, .flag = 0, .tc = { 64<<6,  23<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}},
    {.v = {.ob = {  0, -87, 0}, .flag = 0, .tc = {  0<<6,  23<<6}, .cn = {0xff, 0xff, 0xff, 0xff}}}
}; // cardspades8_mesh_2

ImgSeg_t cardspades8_components[] = {
  {
    _cardspades8SegmentRomStart + 0,
    _cardspades8SegmentRomStart + 4096,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardspades8_mesh_0
  },
  {
    _cardspades8SegmentRomStart + 4096,
    _cardspades8SegmentRomStart + 8192,
    64, 32,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardspades8_mesh_1
  },
  {
    _cardspades8SegmentRomStart + 8192,
    _cardspades8SegmentRomStart + 11136,
    64, 23,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cardspades8_mesh_2
  }
}; // cardspades8_components

Img_t cardspades8 = {
  sizeof(cardspades8_components)/sizeof(cardspades8_components[0]),
  cardspades8_components,
  64, 87,

  G_TF_BILERP
}; // cardspades8

#endif // GENERATED_IMAGE_DECLARATIONS

#endif // _cardspades8_H_