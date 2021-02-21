#include "custom.model.inc.h"
Vtx VB_wf_geo_000AF8_0x700ebd0[] = {
{{{ 505, 0, 85 }, 0, { -562, 992 }, { 0, 129, 0, 255}}},
{{{ -214, 0, -204 }, 0, { 990, 0 }, { 0, 129, 0, 255}}},
{{{ 215, 0, -204 }, 0, { 0, 0 }, { 0, 129, 0, 255}}},
{{{ -214, 102, -204 }, 0, { 0, 0 }, { 167, 0, 167, 255}}},
{{{ -214, 0, -204 }, 0, { 0, 478 }, { 167, 0, 167, 255}}},
{{{ -504, 0, 85 }, 0, { 2012, 478 }, { 167, 0, 167, 255}}},
{{{ -504, 102, 85 }, 0, { 2012, 0 }, { 167, 0, 167, 255}}},
{{{ -504, 102, 85 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ -504, 0, 85 }, 0, { 0, 478 }, { 0, 0, 127, 255}}},
{{{ 505, 0, 85 }, 0, { 2012, 478 }, { 0, 0, 127, 255}}},
{{{ 505, 102, 85 }, 0, { 2012, 0 }, { 0, 0, 127, 255}}},
{{{ 215, 102, -204 }, 0, { 1502, 0 }, { 0, 127, 0, 255}}},
{{{ -214, 102, -204 }, 0, { 480, 0 }, { 0, 127, 0, 255}}},
{{{ -504, 102, 85 }, 0, { -52, 992 }, { 0, 127, 0, 255}}},
{{{ 505, 102, 85 }, 0, { 2034, 992 }, { 0, 127, 0, 255}}},
};

Vtx VB_wf_geo_000AF8_0x700ecc0[] = {
{{{ 505, 102, 85 }, 0, { 0, 0 }, { 89, 0, 167, 255}}},
{{{ 215, 0, -204 }, 0, { 2012, 478 }, { 89, 0, 167, 255}}},
{{{ 215, 102, -204 }, 0, { 2012, 0 }, { 89, 0, 167, 255}}},
{{{ 505, 0, 85 }, 0, { -562, 992 }, { 0, 129, 0, 255}}},
{{{ -504, 0, 85 }, 0, { 1522, 992 }, { 0, 129, 0, 255}}},
{{{ -214, 0, -204 }, 0, { 990, 0 }, { 0, 129, 0, 255}}},
{{{ 505, 0, 85 }, 0, { 0, 478 }, { 89, 0, 167, 255}}},
};

Light_t Light_wf_geo_000AF8_0x700ebc0 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wf_geo_000AF8_0x700ebb8 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_wf_geo_000AF8_0x700edc0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wf_geo_000AF8_0x700ed30),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000AF8_0x700ed30[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_000AF8__texture_09007000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_wf_geo_000AF8_0x700ebc0.col, 1),
gsSPLight(&Light_wf_geo_000AF8_0x700ebb8.col, 2),
gsSPVertex(VB_wf_geo_000AF8_0x700ebd0, 15, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP1Triangle(11, 13, 14, 0),
gsSPVertex(VB_wf_geo_000AF8_0x700ecc0, 7, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP1Triangle(0, 6, 1, 0),
gsSPEndDisplayList(),
};

