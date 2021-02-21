#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"
#include "levels/ddd/header.h"
#include "levels/bitdw/header.h"
#include "levels/bits/header.h"
extern u8 _ddd_segment_ESegmentRomStart[]; 
extern u8 _ddd_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_ddd_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _ddd_segment_ESegmentRomStart, _ddd_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom34646336_skybox_mio0SegmentRomStart,_SkyboxCustom34646336_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
LOAD_MODEL_FROM_GEO(54, bits_geo_000478),
LOAD_MODEL_FROM_GEO(55, ddd_geo_0004A0),
LOAD_MODEL_FROM_GEO(56, geo_bitdw_000450),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_ddd_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ddd_1_[] = {
AREA(1,Geo_ddd_1_0x2049fd0),
TERRAIN(col_ddd_1_0xe033410),
SET_BACKGROUND_MUSIC(0,39),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ddd_1_),
JUMP_LINK(local_warps_ddd_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ddd_1_[] = {
OBJECT_WITH_ACTS(0,598,2857,-3389,0,0,0,0xa0000, bhvAirborneWarp,255),
OBJECT_WITH_ACTS(88,6072,-102,-3269,0,0,0,0x0, bhvThwomp,63),
OBJECT_WITH_ACTS(88,4948,820,-5498,0,90,0,0x0, bhvThwomp,63),
OBJECT_WITH_ACTS(84,-231,-1102,5263,0,180,0,0x0, bhvBulletBill,127),
OBJECT_WITH_ACTS(84,287,-163,5069,0,180,0,0x0, bhvBulletBill,63),
OBJECT_WITH_ACTS(84,-606,-1762,5361,0,180,0,0x0, bhvBulletBill,63),
OBJECT_WITH_ACTS(215,-360,-1501,5359,0,56,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(22,-5533,-219,-1080,0,90,0,0x90000, bhvWarpPipe,63),
OBJECT_WITH_ACTS(22,-1304,-2296,4486,0,0,0,0x80000, bhvWarpPipe,63),
OBJECT_WITH_ACTS(0,-4363,-82,1763,0,0,0,0x4000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(215,-4874,929,-2015,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,2026,632,3899,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-5559,-1206,1265,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,6084,-95,-3379,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,597,1830,-1979,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,2811,-193,517,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-3114,-550,1270,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(212,4481,-1240,-862,0,0,0,0x0, bhv1Up,59),
OBJECT_WITH_ACTS(0,1076,1312,4870,0,16,0,0x0, bhvTTCPitBlock,63),
OBJECT_WITH_ACTS(116,4481,-538,-1537,0,0,0,0x0, bhvOneCoin,59),
OBJECT_WITH_ACTS(122,4123,2007,-5484,0,0,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(137,6686,1267,1835,0,17,0,0x10a0000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(122,4481,451,-862,0,0,0,0x2000000, bhvStar,4),
OBJECT_WITH_ACTS(122,-2541,2155,-6196,0,0,0,0x3000000, bhvStar,63),
OBJECT_WITH_ACTS(122,-4449,-1189,1697,0,0,0,0x5000000, bhvStar,63),
OBJECT_WITH_ACTS(116,4481,-508,-210,0,90,0,0x0, bhvOneCoin,59),
OBJECT_WITH_ACTS(55,4481,-1240,-862,0,0,0,0x0, bhvTTC2DRotator,59),
OBJECT_WITH_ACTS(0,-1821,287,1266,0,90,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(192,595,935,636,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(120,1878,695,4721,0,0,0,0x0, bhvRecoveryHeart,63),
OBJECT_WITH_ACTS(223,-5119,-595,1319,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(0,2393,-97,-96,0,111,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,563,935,652,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(192,3390,-270,-597,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(0,100,2227,-3391,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(194,-3985,-796,1247,0,0,0,0x0, bhvHomingAmp,63),
OBJECT_WITH_ACTS(87,4583,97,-904,0,0,0,0x0, bhvInSunkenShip,59),
OBJECT_WITH_ACTS(116,4479,48,-1590,0,0,0,0x0, bhvOneCoin,4),
OBJECT_WITH_ACTS(116,4482,48,-124,0,0,0,0x0, bhvOneCoin,4),
OBJECT_WITH_ACTS(0,3552,690,-583,0,90,0,0x50000, bhvFadingWarp,63),
OBJECT_WITH_ACTS(0,4486,-2071,-868,0,0,0,0x60000, bhvFadingWarp,63),
OBJECT_WITH_ACTS(0,-141,-1429,4368,0,0,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(192,-284,-1429,4395,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(87,-2992,-174,-3625,0,0,0,0x0, bhvInSunkenShip,63),
OBJECT_WITH_ACTS(0,-3479,-677,-2255,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,4952,827,-5499,0,0,0,0x0, bhvCoinFormation,255),
OBJECT_WITH_ACTS(87,6057,1345,-4737,0,0,0,0x0, bhvInSunkenShip,63),
OBJECT_WITH_ACTS(116,6311,890,-4767,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,6411,893,-4010,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,6428,113,-2337,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,6430,-30,-1886,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(0,621,1888,-1047,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(129,1107,2236,-2893,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(192,-4567,-642,-680,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(0,-4333,-642,-692,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,3551,-271,-580,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(137,-5596,-370,1334,0,0,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(0,944,626,4420,0,103,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(116,-3932,-774,568,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,-3932,-774,1963,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(129,6431,-95,-2877,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(0,-3798,406,-7253,0,297,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(137,755,-2087,-1828,0,0,0,0x0, bhvExclamationBox,63),
OBJECT_WITH_ACTS(129,-3533,-170,-4549,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,-3733,-170,-4549,0,90,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,-4291,-170,-5529,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(0,-213,-1419,4372,0,0,0,0x8c0000, bhvPoleGrabbing,63),
OBJECT_WITH_ACTS(137,-172,-873,4021,0,0,0,0x50000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(129,-4291,-170,-5329,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(0,1378,1842,-50,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(212,2448,1138,3228,0,0,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(192,4048,-747,-2552,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(207,-1683,35,-4423,0,0,0,0x0, bhvFloorSwitchHiddenObjects,63),
OBJECT_WITH_ACTS(129,-3333,-170,-4549,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,-4291,-170,-5129,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(55,4481,451,-862,0,0,0,0x19000000, bhvTTC2DRotator,4),
OBJECT_WITH_ACTS(223,2860,-733,-1840,0,315,0,0x0, bhvChuckya,63),
//OBJECT_WITH_ACTS(54,3957,543,-1187,132,0,27,0x0, Bhv_Custom_0x13004854,31),
//OBJECT_WITH_ACTS(54,813,1791,1123,132,246,27,0x0, Bhv_Custom_0x13004854,31),
//OBJECT_WITH_ACTS(54,-5057,633,-1752,132,0,27,0x0, Bhv_Custom_0x13004854,31),
OBJECT_WITH_ACTS(0,1991,2426,1268,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(129,-4195,33,-6188,0,30,0,0x0, bhvJumpingBox,63),
RETURN()
};
const LevelScript local_warps_ddd_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,18,0),
WARP_NODE(241,26,1,19,0),
WARP_NODE(8,23,1,9,0),
WARP_NODE(9,23,1,8,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,23,1,6,0),
WARP_NODE(6,23,1,5,0),
RETURN()
};
