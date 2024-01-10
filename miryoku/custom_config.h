// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "locales/keys_fr.h"

#define MIRYOKU_LAYER_BASE \
&kp FR_Q,               &kp FR_W,          &kp FR_E,            &kp FR_R,           &kp FR_T,          &kp FR_Y,          &kp FR_U,          &kp FR_I,          &kp FR_O,              &kp FR_P,             \
U_MT(LGUI, FR_A),       U_MT(LALT, FR_S),  U_MT(LCTRL, FR_D),   U_MT(LSHFT, FR_F),  &kp FR_G,          &kp FR_H,          U_MT(LSHFT, FR_J), U_MT(LCTRL, FR_K), U_MT(LALT, FR_L),      U_MT(LGUI, FR_SQT),   \
U_LT(U_BUTTON, FR_Z),   U_MT(RALT, FR_X),  &kp FR_C,            &kp FR_V,           &kp FR_B,          &kp FR_N,          &kp FR_M,          &kp FR_COMMA,      U_MT(RALT, FR_DOT),    U_LT(U_BUTTON, SLASH),\
U_NP,                   U_NP,              U_LT(U_MEDIA, ESC),  U_LT(U_NAV, SPACE), U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,                  U_NP

#define MIRYOKU_LAYER_TAP \
&kp FR_Q,          &kp FR_W,          &kp FR_E,          &kp FR_R,          &kp FR_T,          &kp FR_Y,          &kp FR_U,          &kp FR_I,          &kp FR_O,          &kp FR_P,             \
&kp FR_A,          &kp FR_S,          &kp FR_D,          &kp FR_F,          &kp FR_G,          &kp FR_H,          &kp FR_J,          &kp FR_K,          &kp FR_L,          &kp FR_SQT,           \
&kp FR_Z,          &kp FR_X,          &kp FR_C,          &kp FR_V,          &kp FR_B,          &kp FR_N,          &kp FR_M,          &kp FR_COMMA,      &kp FR_DOT,        &kp FR_SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA MIRYOKU_LAYER_BASE
