/********************************************************************************
	seqlang.h: Ultra 64 MARIO Brothers include file

	Copyright (c) 1996 Nintendo co., ltd.  All rights reserved

	April 15, 1996
 ********************************************************************************/

#include "level_table.h"
#include "command_macros_base.h"

#ifndef SEQLANG_H
#define	SEQLANG_H

#define	ShapePlayer1		1
#define	ShapePlayer2		2 // loogie

#define uchar unsigned char

#define	SEQ_WIPE_FADEIN				0
#define	SEQ_WIPE_FADEOUT			1

#define	WIPE_FADE_IN				0
#define	WIPE_FADE_OUT				1

#define	WIPE_TRI_SCR_OPEN			2
#define	WIPE_TRI_SCR_CLOSE			3

#define	WIPE_RECT_SCR_OPEN			4
#define	WIPE_RECT_SCR_CLOSE			5

#define	WIPE_R_DITHER_IN			6
#define	WIPE_R_DITHER_OUT			7

#define	WIPE_STAR_WIN_OPEN			8
#define	WIPE_STAR_WIN_CLOSE			9

#define	WIPE_CIRCLE_WIN_OPEN		10
#define	WIPE_CIRCLE_WIN_CLOSE		11

#define	WIPE_POLY_STAR_OPEN			12
#define	WIPE_POLY_STAR_CLOSE		13


#define	SEQ_MESG_ENTRANT			0


#define	SEQ_WATER_IN		0
#define	SEQ_WATER_OUT		1

#define	SEQ_KOOPA_NON		0
#define	SEQ_KOOPA_LIVE		1
#define	SEQ_KOOPA_DIED		2
#define	SEQ_STAR_LEVEL		3


#define	ENV_SNOW					2

#define	ENV_PLAIN					0x00
#define	ENV_ROCKMT					0x01
#define	ENV_SNOWMT					0x02
#define	ENV_DESERT					0x03
#define	ENV_HOUSE					0x04
#define	ENV_WATER					0x05
#define	ENV_SLIDER					0x06
#define	ENV_CODEMASK				0x07


#define	SEQ_AND		0
#define	SEQ_NAND	1
#define	SEQ_EQ		2
#define	SEQ_NE		3
#define	SEQ_GT		4
#define	SEQ_GE		5
#define	SEQ_LT		6
#define	SEQ_LE		7

#define	PAD			0


#define	STAR_00001		0x01
#define	STAR_00010		0x02
#define	STAR_00011		0x03
#define	STAR_00100		0x04
#define	STAR_00101		0x05
#define	STAR_00110		0x06
#define	STAR_00111		0x07
#define	STAR_01000		0x08
#define	STAR_01001		0x09
#define	STAR_01010		0x0A
#define	STAR_01011		0x0B
#define	STAR_01100		0x0C
#define	STAR_01101		0x0D
#define	STAR_01110		0x0E
#define	STAR_01111		0x0F
#define	STAR_10000		0x10
#define	STAR_10001		0x11
#define	STAR_10010		0x12
#define	STAR_10011		0x13
#define	STAR_10100		0x14
#define	STAR_10101		0x15
#define	STAR_10110		0x16
#define	STAR_10111		0x17
#define	STAR_11000		0x18
#define	STAR_11001		0x19
#define	STAR_11010		0x1A
#define	STAR_11011		0x1B
#define	STAR_11100		0x1C
#define	STAR_11101		0x1D
#define	STAR_11110		0x1E
#define	STAR_11111		0x1F


/********************************************************************************/
/*	Geometry render mode.														*/
/********************************************************************************/

#define	GMODE_PLAYER	0
#define	GMODE_COURSE	1
#define	GMODE_LEVEL		2
#define	GMODE_STAGE		3
#define	GMODE_SCENE		4



/********************************************************************************/
/*	C Language only.															*/
/********************************************************************************/

#ifndef ASSEMBLER

typedef uchar	Sequence, *SequencePtr;

extern SequencePtr
ExecuteSequence(SequencePtr sequence);

#endif

/********************************************************************************/
/*	Sequence language command ID.												*/
/********************************************************************************/

#define	_seqExecute_id				 0
#define	_seqChain_id				 1
#define	_seqExit_id					 2
#define	_seqWait_id					 3
#define	_seqFreeze_id				 4
#define	_seqJump_id					 5
#define	_seqCall_id					 6
#define	_seqReturn_id				 7
#define	_seqDo_id					 8
#define	_seqNext_id					 9
#define	_seqRepeat_id				10
#define	_seqUntil_id				11
#define	_seqTstJump_id				12
#define	_seqTstCall_id				13
#define	_seqIf_id					14
#define	_seqElse_id					15
#define	_seqEndif_id				16
#define	_seqCProgram_id				17
#define	_seqRunning_id				18
#define	_seqSetResult_id			19

#define	_seqLinkMemory_id			20
#define	_seqUnlinkMemory_id			21
#define	_seqLoadCode_id				22
#define	_seqLoadData_id				23
#define	_seqLoadPres_id				24
#define	_seqLoadFace_id				25
#define	_seqLoadText_id				26

#define	_seqInitStage_id			27
#define	_seqDestroyStage_id			28
#define	_seqBeginConstruction_id	29
#define	_seqEndConstruction_id		30
#define	_seqBeginScene_id			31
#define	_seqEndScene_id				32
#define	_seqGfxShape_id				33
#define	_seqHmsShape_id				34
#define	_seqSclShape_id				35
#define	_seqActor_id				36
#define	_seqStarring_id				37
#define	_seqPort_id					38
#define	_seqBGPort_id				39
#define	_seqConnect_id				40

#define	_seqOpenScene_id			41
#define	_seqCloseScene_id			42
#define	_seqEnterPlayer_id			43
#define	_seqExitPlayer_id			44
#define	_seqExecStrategy_id			45

#define	_seqMapInfo_id				46
#define	_seqAreaInfo_id				47
#define	_seqMessage_id				48
#define	_seqEnvironment_id			49
#define	_seqBlankColor_id			50

#define	_seqWipe_id					51
#define	_seqBlanking_id				52
#define	_seqGamma_id				53

#define	_seqSetMusic_id				54
#define	_seqPlayMusic_id			55
#define	_seqStopMusic_id			56

#define	_seqTagInfo_id				57
#define	_seqWindZone_id				58
#define	_seqWaterJet_id				59

#define	_seqGameMode_id				60
#define _seqGround_id				NULL

//#ifdef ASSEMBLER

#define	RGBA16(r,g,b,a)		(((r)<<11) | ((g)<<6) | ((b)<<1) | (a))
#define	AudFrame(n)			((n)*8-2)

/*===============================================================================
 *
 *	Sequence control command
 */

#define	seqExecute(segment, romStart, romEnd, procedure) 						EXECUTE(segment, romStart, romEnd, procedure),
#define	seqChain(segment, romStart, romEnd, procedure) 							EXIT_AND_EXECUTE(segment, romStart, romEnd, procedure),
#define	seqExit() 																CMD_BBH(_seqExit_id, 0x04, 0x0000)
#define	seqEnd																	CMD_BBH(_seqWait_id, 0x04, 0x0000)
#define	seqWait(nframes) 														CMD_BBH(_seqWait_id, 0x04, nframes)
#define	seqFreeze(nframes) 														CMD_BBH(_seqFreeze_id, 0x04, nframes)
#define	seqJump(procedure) 														JUMP(procedure),
#define	seqCall(procedure) 														JUMP_LINK(procedure),
#define	seqReturn 																CMD_BBH(_seqReturn_id, 0x04, 0x0000)
#define	seqDo(nrounds) 															CMD_BBH(_seqDo_id, 0x04, nrounds)
#define	seqNext																	CMD_BBH(_seqNext_id, 0x04, 0x0000)
#define	seqRepeat 																CMD_BBH(_seqRepeat_id, 0x04, 0x0000)
#define	seqUntil(condition, value) 												LOOP_UNTIL(condition, value),
#define	seqTstJump(condition, value, procedure) 								JUMP_IF(condition, value, procedure),
#define	seqTstCall(condition, value, procedure) 								JUMP_LINK_IF(condition, value, procedure),
#define	seqIf(condition, index, value) 											SKIP_IF(condition, index),
#define	seqElse 																CMD_BBH(_seqElse_id, 0x04, 0x0000)
#define	seqEndif 																CMD_BBH(_seqEndif_id, 0x04, 0x0000)
#define	seqCProgram(program, code) 												CALL(program, code),
#define	seqRunning(program, code) 												CALL_LOOP(program, code),
#define	seqSetResult(code) 														CMD_BBH(code, 0x04, value)

/*===============================================================================
 *
 *	Memory allocation command
 */

#define	seqLinkMemory()		   													CMD_BBH(_seqLinkMemory_id, 0x04, 0x0000)
#define	seqUnlinkMemory()		 												CMD_BBH(_seqUnlinkMemory_id, 0x04, 0x0000)
#define	seqLoadCode(ramAddr, romStart, romEnd) 									FIXED_LOAD(ramAddr, romStart, romEnd),
#define	seqLoadData(segment, romStart, romEnd) 									LOAD_RAW(segment, romStart, romEnd),
#define	seqLoadPres(segment, romStart, romEnd) 									LOAD_MIO0(segment, romStart, romEnd),
#define	seqLoadFace(number)  										 			LOAD_MARIO_HEAD(number),
#define	seqLoadText(segment, romStart, romEnd) 									LOAD_MIO0_TEXTURE(segment, romStart, romEnd),

/*================================================================================
 *
 *	Stage construction command
 */

#define seqInitStage() 															CMD_BBH(_seqInitStage_id, 0x04, 0x0000)
#define seqDestroyStage()		 												CMD_BBH(_seqDestroyStage_id, 0x04, 0x0000)
#define	seqBeginConstruction()		  											CMD_BBH(_seqBeginConstruction_id, 0x04, 0x0000)
#define	seqEndConstruction()  													CMD_BBH(_seqEndConstruction_id, 0x04, 0x0000)
#define seqBeginScene(sceneNo, hierarchy) 										AREA(sceneNo, hierarchy),
#define seqEndScene() 															CMD_BBH(_seqEndScene_id, 0x04, 0x0000)
#define	seqGfxShape(shapeNo, gfxlist, mode) 									LOAD_MODEL_FROM_DL(shapeNo, gfxlist, mode),
#define	seqHmsShape(shapeNo, hierarchy) 										LOAD_MODEL_FROM_GEO(shapeNo, hierarchy),
#define	seqSclShape(shapeNo, gfxlist, mode, scale) \
    CMD_BBH(_seqSclShape_id, 0x08, mode*4096+shapeNo), \
    CMD_PTR(gfxlist), \
    CMD_W(scale)
#define	seqHmsMario(shapeNo, code, strategy) 									MARIO(shapeNo, code, strategy),
#define	seqHmsLuigi(shapeNo, code, strategy) 									MARIO(shapeNo, code, strategy), // same shit but with different function
#define	seqActor(shapeNo, posx, posy, posz, angx, angy, angz, code1, code2, flags, strategy) OBJECT_WITH_ACTS(shapeNo, posx, posy, posz, angleX, angleY, angleZ, behParam, beh, acts)
    CMD_BBBB(_seqActor_id, 24, 0x1f, shapeNo), \
    CMD_HHHHHH(posx, posy, posz, angx, angy, angz), \
    CMD_HH(code1, code2), \
	CMD_W(flags), \
    CMD_PTR(strategy)
#define	seqLevelActor(level, shapeNo, posx, posy, posz, angx, angy, angz, code1, code2, flags, strategy) \
    CMD_BBBB(_seqActor_id, 24, level, shapeNo), \
    CMD_HHHHHH(posx, posy, posz, angx, angy, angz), \
    CMD_HH(code1, code2), \
	CMD_W(flags), \
    CMD_PTR(strategy)

#define	seqGameClear(stage, scene, port)										seqPort(0xf0,stage,scene,port)
#define	seqGameOver(stage, scene, port)											seqPort(0xf1,stage,scene,port)
#define	seqViewRoof(stage, scene, port)											seqPort(0xf2,stage,scene,port)
#define	seqCourseOut(stage, scene, port)										seqPort(0xf3,stage,scene,port)
#define	seqPort(number, stage, scene, port) 									WARP_NODE(number, stage, scene, port, 0x00),
#define	seqMidPort(number, stage, scene, port) 									WARP_NODE(number, stage, scene, port, 0x80),
#define	seqBGPort(bgattr, stage, scene, port) 									PAINTING_WARP_NODE(bgattr, stage, scene, port, 0x00),
#define	seqMidBGPort(bgattr, stage, scene, port) 								PAINTING_WARP_NODE(bgattr, stage, scene, port, 0x80),
#define	seqConnect(number, scene, offsetx, offsety, offsetz) 					INSTANT_WARP(number, scene, offsetx, offsety, offsetz),
#define	seqGround(address) 														CMD_BBBB(_seqGround_id, 0x08, address, 0x00)
#define	seqMapInfo(address) 													TERRAIN(address),
#define	seqAreaInfo(address) 													ROOMS(surfaceRooms),
#define	seqTagInfo(address) 													MACRO_OBJECTS(address),

/*===============================================================================
 *
 *	Scene control command
 */

#define	seqOpenScene(scene)   													LOAD_AREA(scene),
#define	seqCloseScene(scene)   													CMD_BBBB(_seqCloseScene_id, 0x08, scene, 0x00)
#define	seqEnterMario(scene, angle, posx, posy, posz) 							MARIO_POS(scene, angle, posx, posy, posz),
#define	seqEnterLuigi(scene, angle, posx, posy, posz) 							MARIO_POS(scene, angle, posx, posy, posz), // same shit but with different function
#define	seqExitMario()		   													CMD_BBH(_seqExitPlayer_id, 0x04, 0x0000)
#define	seqExitLuigi()		   													CMD_BBH(_seqExitPlayer_id, 0x04, 0x0000)
#define	seqExecStrategy()		 												CMD_BBH(_seqExecStrategy_id, 0x04, 0x0000)
#define	seqWipe(mode, nframes, r, g, b) 										TRANSITION(mode, nframes, r, g, b),
#define	seqBlanking(blankSw) 													CMD_BBBB(_seqBlanking_id, 0x04, blankSw, 0x00)
#define	seqGammaCorrection(gammaSw) 											CMD_BBBB(_seqGamma_id, 0x04, gammaSw, 0x00)
#define	seqEnvironment(flags)													CMD_BBH(_seqEnvironment_id, 0x04, flags)
#define	seqBlankColor(color) 													CMD_BBH(_seqBlankColor_id, 0x04, 0x0000)
#define	seqMessage(type, message) 												SHOW_DIALOG(type, message),
#define	seqSetMusic(type, music) 												SET_BACKGROUND_MUSIC(type, music),
#define	seqPlayMusic(music, fade) 												CMD_BBH(_seqPlayMusic_id, 0x04, music)
#define	seqStopMusic(fade) 														CMD_BBH(_seqStopMusic_id, 0x04, fade)
#define	seqWindZone(px1, pz1, px2, pz2, angle)  								CMD3A(px1, pz1, px2, pz2, angle),
#define	seqWaterJet(number, posx, posy, posz, force, koopa2)    				WHIRLPOOL(number, koopa2, posX, posY, posZ, force)
#define	seqSetGameMode(type) 													CMD_BBBB(_seqGameMode_id, 0x04, 0, type),
#define	seqGetGameMode(type) 													CMD_BBBB(_seqGameMode_id, 0x04, 1, type),

//#endif
#endif
