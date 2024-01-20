// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "locales/keys_fr.h"


//#define HRML(k1,k2,k3,k4) U_MT(LGUI, k1),U_MT(LALT, k2),U_MT(LCTRL, k3),U_MT(LSHFT, k4)
//#define HRMR(k1,k2,k3,k4) U_MT(LSHFT, k1),U_MT(LCTRL, k2),U_MT(LALT, k3),U_MT(LGUI, k4)
#define HRML(k1,k2,k3,k4) &kp k1, &kp k2, &kp k3, &kp k4
#define HRMR(k1,k2,k3,k4) &kp k1, &kp k2, &kp k3, &kp k4

#define U_FR_UND &kp LC(FR_Z)

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB    K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp DEL \
&kp LSHFT  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp FR_SQT \
&kp LCTRL  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp RET \
                     K32  K33  K34       K35  K36  K37


#define MIRYOKU_LAYER_BASE \
&kp FR_Q,               &kp FR_W,          &kp FR_E,            &kp FR_R,           &kp FR_T,          &kp FR_Y,          &kp FR_U,          &kp FR_I,          &kp FR_O,              &kp FR_P,                \
HRML(FR_A,              FR_S,              FR_D,                FR_F),              &kp FR_G,          &kp FR_H,          HRMR(FR_J,         FR_K,              FR_L,                  FR_SEMI),      \
U_LT(U_BUTTON, FR_Z),   U_MT(RALT, FR_X),  &kp FR_C,            &kp FR_V,           &kp FR_B,          &kp FR_N,          &kp FR_M,          &kp FR_COMMA,      U_MT(RALT, FR_DOT),    U_LT(U_BUTTON, FR_SLASH),\
U_NP,                   U_NP,              U_LT(U_MEDIA, ESC),  U_LT(U_NAV, SPACE), U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,                  U_NP

#define MIRYOKU_LAYER_TAP \
&kp FR_Q,          &kp FR_W,          &kp FR_E,          &kp FR_R,          &kp FR_T,          &kp FR_Y,          &kp FR_U,          &kp FR_I,          &kp FR_O,          &kp FR_P,             \
&kp FR_A,          &kp FR_S,          &kp FR_D,          &kp FR_F,          &kp FR_G,          &kp FR_H,          &kp FR_J,          &kp FR_K,          &kp FR_L,          &kp FR_SEMI,           \
&kp FR_Z,          &kp FR_X,          &kp FR_C,          &kp FR_V,          &kp FR_B,          &kp FR_N,          &kp FR_M,          &kp FR_COMMA,      &kp FR_DOT,        &kp FR_SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA MIRYOKU_LAYER_BASE

#define MIRYOKU_LAYER_BUTTON \
U_FR_UND,          U_CUT,             U_CPY,             U_PST,             U_RDO,          U_RDO,          U_PST,             U_CPY,             U_CUT,             U_FR_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,           U_NU,           &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_FR_UND,          U_CUT,             U_CPY,             U_PST,             U_RDO,          U_RDO,          U_PST,             U_CPY,             U_CUT,             U_FR_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,         U_BTN2,         U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp INS,           &kp HOME,          &kp UP,            &kp END,           &kp PG_UP,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp RIGHT,         &kp PG_DN,         \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_FR_UND,          \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&FR_LBKT_S,        &kp FR_N7,         &kp FR_N8,         &kp FR_N9,         &FR_RBKT_S,        U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp FR_SEMI,       &kp FR_N4,         &kp FR_N5,         &kp FR_N6,         &kp FR_EQUAL,      U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp FR_GRAVE,      &kp FR_N1,         &kp FR_N2,         &kp FR_N3,         &kp FR_BSLH,       U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp FR_DOT,        &kp FR_N0,         &kp FR_MINUS,      U_NA,              U_NA,              U_NA,              U_NP,              U_NP