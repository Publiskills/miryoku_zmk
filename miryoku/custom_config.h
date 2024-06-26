// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "locales/keys_fr.h"

#define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define MIRYOKU_KLUDGE_DOUBLETAPBOOT
#define HOST_OS 2

#define HRM_ENABLED

#if defined (HRM_ENABLED)
     #define HRML(k1,k2,k3,k4) &hm_l LGUI k1, &hm_l LALT k2, &hm_l LCTRL k3, &hm_shift_l LSHFT k4   
     #define HRMR(k1,k2,k3,k4) &hm_shift_r LSHFT k1, &hm_r LCTRL k2, &hm_r LALT k3, U_HMR_BIND(LGUI, k4)
#else
     #define HRML(k1,k2,k3,k4) &kp k1, &kp k2, &kp k3, &kp k4
     #define HRMR(k1,k2,k3,k4) &kp k1, &kp k2, &kp k3, &k4
#endif

#define U_FR_UND &kp LC(FR_Z)

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB    K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp BSPC \
&kp LSHFT  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  U_LT_BIND(U_ACC, FR_SQT_S)\
&kp LCTRL  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp RET \
                     K32  K33  K34       K35  K36  K37


#define MIRYOKU_LAYER_BASE \
&kp FR_Q,               &kp FR_W,                 &kp FR_E,            &kp FR_R,           &kp FR_T,          &kp FR_Y,          &kp FR_U,          &kp FR_I,         &kp FR_O,    &kp FR_P,                \
HRML(FR_A,              FR_S,                     FR_D,                FR_F),              &kp FR_G,          &kp FR_H,          HRMR(FR_J,         FR_K,             FR_L,        FR_SEMI_S),             \
U_LT(U_BUTTON, FR_Z),   U_LT(U_MOUSE, FR_X),      &kp FR_C,            &kp FR_V,           &kp FR_B,          &kp FR_N,          &kp FR_M,          &FR_COMMA_S,      &FR_DOT_S,   U_LT_BIND(U_BUTTON, FR_SLASH_S),\
U_NP,                   U_NP,                     U_LT(U_MEDIA, ESC),  U_LT(U_NAV, SPACE), U_LT(U_EXTRA, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL), U_NP,        U_NP

#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,              U_NU,              &kp C_VOL_UP,      U_NU,              U_NU,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        U_NU,         \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &tt_btclearall,    &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp INS,           &kp HOME,          &kp UP,            &kp END,           &kp PG_UP,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp RIGHT,         &kp PG_DN,         \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              U_RDO,             &adv_paste,        U_CPY,             U_CUT,             U_FR_UND,          \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,              U_NU,            U_NU,            &rid_impl,       &rid_rename,     \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_NU,            U_NU,            U_NU,            U_NU,            \
U_NA,              U_NA,              &u_to_U_SYM,       &u_to_U_EXTRA,     U_NA,              U_NU,              U_NU,            U_NU,            U_NU,            &x_extra,        \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NU,              U_NU,            U_NU,            U_NP,            U_NP

#define MIRYOKU_LAYER_SYM \
&kp FR_LBRC,       &kp FR_AMPS,       &kp FR_ASTRK,      &kp FR_LPAR,       &kp FR_RBRC,       U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp FR_COLON,      &kp FR_DLLR,       &kp FR_PRCNT,      &kp FR_CARET,      &kp FR_PLUS,       U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp FR_TILDE,      &kp FR_EXCL,       &kp FR_AT,         &kp FR_HASH,       &kp FR_PIPE,       U_NA,              &u_to_U_SYM,       &u_to_U_EXTRA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp FR_LPAR,       &kp FR_RPAR,       &kp FR_UNDER,      U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&FR_LBKT_S,     &FR_N7_S,       &FR_N8_S,       &FR_N9_S,       &FR_RBKT_S,     U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&FR_SEMI_S,     &FR_N4_S,       &FR_N5_S,       &FR_N6_S,       &kp FR_EQUAL,   U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&FR_GRAVE_S,    &FR_N1_S,       &FR_N2_S,       &FR_N3_S,       &FR_BSLH_S,     U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,           U_NP,           &FR_DOT_S,      &FR_N0_S,       &FR_MINUS_S,    U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp FR_Q,          &kp FR_W,          &kp FR_E,          &kp FR_R,          &kp FR_T,          &kp FR_Y,          &kp FR_U,          &kp FR_I,          &kp FR_O,          &kp FR_P,             \
&kp FR_A,          &kp FR_S,          &kp FR_D,          &kp FR_F,          &kp FR_G,          &kp FR_H,          &kp FR_J,          &kp FR_K,          &kp FR_L,          &FR_SEMI_S,        \
&kp FR_Z,          &kp FR_X,          &kp FR_C,          &kp FR_V,          &kp FR_B,          &kp FR_N,          &kp FR_M,          &FR_COMMA_S,       &FR_DOT_S,         &FR_SLASH_S,          \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_BUTTON \
U_FR_UND,          U_CUT,             U_CPY,             &adv_paste,        U_RDO,          U_RDO,          &adv_paste,        U_CPY,             U_CUT,             U_FR_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,           U_NU,           &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_FR_UND,          U_CUT,             U_CPY,             &adv_paste,        U_RDO,          U_RDO,          &adv_paste,        U_CPY,             U_CUT,             U_FR_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,         U_BTN2,         U_BTN1,            U_BTN3,            U_NP,              U_NP


#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,              U_WH_L,            U_MS_U,            U_WH_R,            U_WH_U,            \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_R,            U_WH_D,            \
U_NA,              U_NA,              U_NA,              &u_to_U_MOUSE,     U_NA,              U_RDO,             &adv_paste,        U_CPY,             U_CUT,             U_FR_UND,          \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_ACC \
U_NU,              U_NU,              &td_e,             U_NU,              U_NU,              U_NU,              &td_u,              &td_i,             &OCirc,            U_NU,              \
&td_a,             U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              \
U_NU,              U_NU,              &CCed,             U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP
