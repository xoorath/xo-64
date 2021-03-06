// Generated by xo-tt64.
// A tool by xoorath.
//
// Name: cup
// Size: 16 x 16
// Type: 16-Bit RGBA (OUTFMT_RGBA_16)

#ifndef _cup_H_
#define _cup_H_

#include <xo-types.h>
#include <xo-img.h>

#include <xo-spec.h>

xo_spec_DeclareRomSegment(cup)

#ifndef GENERATED_IMAGE_DECLARATIONS
extern Img_t cup;
#else // GENERATED_IMAGE_DECLARATIONS
#include <xo-render.h>
#include <PR/gbi.h>

Vtx cup_mesh_0[] = {
    {.v = {.ob = {0  , 0  , 0}, .flag = 0, .tc = {0  <<6, 0  <<6}, .cn = {0x00, 0x00, 0x00, 0x00}}},
    {.v = {.ob = {16 , 0  , 0}, .flag = 0, .tc = {16 <<6, 0  <<6}, .cn = {0x00, 0x00, 0x00, 0x00}}},
    {.v = {.ob = {16 , -16, 0}, .flag = 0, .tc = {16 <<6, 16 <<6}, .cn = {0x00, 0x00, 0x00, 0x00}}},
    {.v = {.ob = {0  , -16, 0}, .flag = 0, .tc = {0  <<6, 16 <<6}, .cn = {0x00, 0x00, 0x00, 0x00}}}
}; // cup_mesh_0

ImgSeg_t cup_components[] = {
  {
    _cupSegmentRomStart + 0,
    _cupSegmentRomStart + 512,
    16, 16,
    G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
    NULL,
    cup_mesh_0
  }
}; // cup_components

Img_t cup = {
  sizeof(cup_components)/sizeof(cup_components[0]),
  cup_components,
  16, 16,

  G_TF_BILERP
}; // cup

#endif // GENERATED_IMAGE_DECLARATIONS

#endif // _cup_H_
