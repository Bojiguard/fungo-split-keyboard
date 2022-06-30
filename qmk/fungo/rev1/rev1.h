#pragma once

#include "fungo.h"
#include "quantum.h"


#ifdef MASTER_RIGHT
// 우측에  usb 케이블을 꽂아야 정상동작
#define LAYOUT_fungo_split_num( \
	L00, L01, L02, L03, L04, L05, L06,                       R06, R05, R04, R03, R02, R01, R00, \
	L10, L11, L12, L13, L14, L15, L16,                       R16, R15, R14, R13, R12, R11, R10, \
	L20, L21, L22, L23, L24, L25, L26,                       R26, R25, R24, R23, R22, R21, R20, \
	L30, L31, L32, L33, L34, L35, L36, L46, L52,   R52, R46, R36, R35, R34, R33, R32, R31, R30, \
	L50, L51, L40, L41,    L42,   L43, L44, L45,   R45, R44, R43,    R42,   R41, R40, R51, R50 \
	) \
	{ \
		{ L00, L01, L02, L03, L04, L05, L06}, \
		{ L10, L11, L12, L13, L14, L15, L16}, \
		{ L20, L21, L22, L23, L24, L25, L26}, \
		{ L30, L31, L32, L33, L34, L35, L36}, \
		{ L40, L41, L42, L43, L44, L45, L46}, \
		{ L50, L51, L52, KC_NO, KC_NO, KC_NO, KC_NO}, \
		{ R06, R05, R04, R03, R02, R01, R00}, \
		{ R16, R15, R14, R13, R12, R11, R10}, \
		{ R26, R25, R24, R23, R22, R21, R20}, \
		{ R36, R35, R34, R33, R32, R31, R30}, \
		{ R46, R45, R44, R43, R42, R41, R40}, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, R52, R51, R50}, \
	}
#endif

#ifdef MASTER_LEFT
	#define LAYOUT_fungo_split_num( \
	L00, L01, L02, L03, L04, L05, L06,                       R06, R05, R04, R03, R02, R01, R00, \
	L10, L11, L12, L13, L14, L15, L16,                       R16, R15, R14, R13, R12, R11, R10, \
	L20, L21, L22, L23, L24, L25, L26,                       R26, R25, R24, R23, R22, R21, R20, \
	L30, L31, L32, L33, L34, L35, L36, L46, L52,   R52, R46, R36, R35, R34, R33, R32, R31, R30, \
	L50, L51, L40, L41,    L42,   L43, L44, L45,   R45, R44, R43,    R42,   R41, R40, R51, R50 \
	) \
	{ \
		{ L00, L01, L02, L03, L04, L05, L06}, \
		{ L10, L11, L12, L13, L14, L15, L16}, \
		{ L20, L21, L22, L23, L24, L25, L26}, \
		{ L30, L31, L32, L33, L34, L35, L36}, \
		{ L40, L41, L42, L43, L44, L45, L46}, \
		{ L50, L51, L52, KC_NO, KC_NO, KC_NO, KC_NO}, \
		{ R06, R05, R04, R03, R02, R01, R00}, \
		{ R16, R15, R14, R13, R12, R11, R10}, \
		{ R26, R25, R24, R23, R22, R21, R20}, \
		{ R36, R35, R34, R33, R32, R31, R30}, \
		{ R46, R45, R44, R43, R42, R41, R40}, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, R52, R51, R50}, \
	}
#endif

/* 왼쪽으로만 연결하면
#ifdef MASTER_LEFT
#define LAYOUT_fungo_split_num( \
	L00, L01, L02, L03, L04, L05, L06,                       R06, R05, R04, R03, R02, R01, R00, \
	L10, L11, L12, L13, L14, L15, L16,                       R16, R15, R14, R13, R12, R11, R10, \
	L20, L21, L22, L23, L24, L25, L26,                       R26, R25, R24, R23, R22, R21, R20, \
	L30, L31, L32, L33, L34, L35, L36, L46, L52,   R52, R46, R36, R35, R34, R33, R32, R31, R30, \
	L50, L51, L40, L41,    L42,   L43, L44, L45,   R45, R44, R43,    R42,   R41, R40, R51, R50 \
	) \
	{ \
		{ L06, L05, L04, L03, L03, L01, L00}, \
		{ L16, L15, L14, L13, L13, L11, L10}, \
		{ L26, L25, L24, L23, L23, L21, L20}, \
		{ L36, L35, L34, L33, L33, L31, L30}, \
		{ L46, L45, L44, L43, L43, L41, L40}, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, L52, L51, L50}, \
		{ R00, R01, R02, R03, R04, R05, R06}, \
		{ R10, R11, R12, R13, R14, R15, R16}, \
		{ R20, R21, R22, R23, R24, R25, R26}, \
		{ R30, R31, R32, R33, R34, R35, R36}, \
		{ R40, R41, R42, R43, R44, R45, R46}, \
		{ R50, R51, R52, KC_NO, KC_NO, KC_NO, KC_NO}, \
	}

#endif
*/


#ifdef MASTER_RIGHT
/*
#define LAYOUT_fungo_split_num( \
	L00, L01, L02, L03, L04, L05, L06,                       R06, R05, R04, R03, R02, R01, R00, \
	L10, L11, L12, L13, L14, L15, L16,                       R16, R15, R14, R13, R12, R11, R10, \
	L20, L21, L22, L23, L24, L25, L26,                       R26, R25, R24, R23, R22, R21, R20, \
	L30, L31, L32, L33, L34, L35, L36, L46, L52,   R52, R46, R36, R35, R34, R33, R32, R31, R30, \
	L50, L51, L40, L41,    L42,   L43, L44, L45,   R45, R44, R43,    R42,   R41, R40, R51, R50 \
	) \
	{ \
		{ L00, L01, L02, L03, L04, L05, L06}, \
		{ L10, L11, L12, L13, L14, L15, L16}, \
		{ L20, L21, L22, L23, L24, L25, L26}, \
		{ L30, L31, L32, L33, L34, L35, L36}, \
		{ L40, L41, L42, L43, L44, L45, L46}, \
		{ L50, L51, L52, KC_NO, KC_NO, KC_NO, KC_NO}, \
		{ R00, R01, R02, R03, R04, R05, R06}, \
		{ R10, R11, R12, R13, R14, R15, R16}, \
		{ R20, R21, R22, R23, R24, R25, R26}, \
		{ R30, R31, R32, R33, R34, R35, R36}, \
		{ R40, R41, R42, R43, R44, R45, R46}, \
		{ R50, R51, R52, KC_NO, KC_NO, KC_NO, KC_NO}, \
	}
*/

/*
#define LAYOUT_fungo_split_num( \
	L00, L01, L02, L03, L04, L05, L06,                       R06, R05, R04, R03, R02, R01, R00, \
	L10, L11, L12, L13, L14, L15, L16,                       R16, R15, R14, R13, R12, R11, R10, \
	L20, L21, L22, L23, L24, L25, L26,                       R26, R25, R24, R23, R22, R21, R20, \
	L30, L31, L32, L33, L34, L35, L36, L46, L52,   R52, R46, R36, R35, R34, R33, R32, R31, R30, \
	L50, L51, L40, L41,    L42,   L43, L44, L45,   R45, R44, R43,    R42,   R41, R40, R51, R50 \
	) \
	{ \
		{ L06, L05, L04, L03, L03, L01, L00}, \
		{ L16, L15, L14, L13, L13, L11, L10}, \
		{ L26, L25, L24, L23, L23, L21, L20}, \
		{ L36, L35, L34, L33, L33, L31, L30}, \
		{ L46, L45, L44, L43, L43, L41, L40}, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, L52, L51, L50}, \
		{ R06, R05, R04, R03, R02, R01, R00}, \
		{ R16, R15, R14, R13, R12, R11, R10}, \
		{ R26, R25, R24, R23, R22, R21, R20}, \
		{ R36, R35, R34, R33, R32, R31, R30}, \
		{ R46, R45, R44, R43, R42, R41, R40}, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, R52, R51, R50}, \
	}
*/
#endif


#ifndef FLIP_HALF
/*
#define LAYOUT_fungo_split_num( \
	L00, L01, L02, L03, L04, L05, L06,                       R06, R05, R04, R03, R02, R01, R00, \
	L10, L11, L12, L13, L14, L15, L16,                       R16, R15, R14, R13, R12, R11, R10, \
	L20, L21, L22, L23, L24, L25, L26,                       R26, R25, R24, R23, R22, R21, R20, \
	L30, L31, L32, L33, L34, L35, L36, L46, L52,   R52, R46, R36, R35, R34, R33, R32, R31, R30, \
	L50, L51, L40, L41,    L42,   L43, L44, L45,   R45, R44, R43,    R42,   R41, R40, R51, R50 \
	) \
	{ \
		{ L00, L01, L02, L03, L04, L05, L06}, \
		{ L10, L11, L12, L13, L14, L15, L16}, \
		{ L20, L21, L22, L23, L24, L25, L26}, \
		{ L30, L31, L32, L33, L34, L35, L36}, \
		{ L40, L41, L42, L43, L44, L45, L46}, \
		{ L50, L51, L52, KC_NO, KC_NO, KC_NO, KC_NO}, \
		{ R00, R01, R02, R03, R04, R05, R06}, \
		{ R10, R11, R12, R13, R14, R15, R16}, \
		{ R20, R21, R22, R23, R24, R25, R26}, \
		{ R30, R31, R32, R33, R34, R35, R36}, \
		{ R40, R41, R42, R43, R44, R45, R46}, \
		{ R50, R51, R52, KC_NO, KC_NO, KC_NO, KC_NO} \
	}
	*/
#else
// Keymap with right side flipped
// (TRRS jack on both halves are to the right)

/*
#define LAYOUT_fungo_split_num( \
	L00, L01, L02, L03, L04, L05, L06,                       R06, R05, R04, R03, R02, R01, R00, \
	L10, L11, L12, L13, L14, L15, L16,                       R16, R15, R14, R13, R12, R11, R10, \
	L20, L21, L22, L23, L24, L25, L26,                       R26, R25, R24, R23, R22, R21, R20, \
	L30, L31, L32, L33, L34, L35, L36, L46, L52,   R52, R46, R36, R35, R34, R33, R32, R31, R30, \
	L50, L51, L40, L41,    L42,   L43, L44, L45,   R45, R44, R43,    R42,   R41, R40, R51, R50 \
	) \
	{ \
		{ R00, R01, R02, R03, R04, R05, R06}, \
		{ R10, R11, R12, R13, R14, R15, R16}, \
		{ R20, R21, R22, R23, R24, R25, R26}, \
		{ R30, R31, R32, R33, R34, R35, R36}, \
		{ R40, R41, R42, R43, R44, R45, R46}, \
		{ R50, R51, R52, KC_NO, KC_NO, KC_NO, KC_NO} \
		{ L00, L01, L02, L03, L04, L05, L06}, \
		{ L10, L11, L12, L13, L14, L15, L16}, \
		{ L20, L21, L22, L23, L24, L25, L26}, \
		{ L30, L31, L32, L33, L34, L35, L36}, \
		{ L40, L41, L42, L43, L44, L45, L46}, \
		{ L50, L51, L52, KC_NO, KC_NO, KC_NO, KC_NO}, \

	}
	*/
#endif
