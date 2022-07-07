#pragma once
#include "config.h"

#if (!defined(LAYOUT) && defined(KEYMAP))
#define LAYOUT KEYMAP
#endif

#define ESC_KC LCTL_T(KC_ESC)
#define NAV_KC LT(_NAVI, KC_TAB)
#define NUM_KC LT(_NUMB, KC_SPC)

#define SYM_KC LT(_SYMB, KC_BSPC)
#define SPC_KC LT(_SPEC, KC_ENT)
#define MOD_KC LT(_MODI, KC_LGUI)

// Thumb Clusters
#define _THUMB_C1_	KC_CAPS,  NAV_KC,     NUM_KC, \
                    SYM_KC,   SPC_KC,     MOD_KC

// All Layer Centers = LGUI, LALT, LCTL, LSFT - RSFT, RCTL, RALT, RGUI.
#define _BLANKS__   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS

// Workman
#define _WORK_L1_	KC_Q,     KC_D,     KC_R,     KC_W,     KC_B
#define _WORK_L2_	LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_H),      LSFT_T(KC_T),     KC_G
#define _WORK_L3_	KC_Z,     KC_X,     KC_M,     KC_C,     KC_V

#define _WORK_R1_	KC_J,     KC_F,     KC_U,     KC_P,     KC_SCLN
#define _WORK_R2_	KC_Y,     RSFT_T(KC_N),      RCTL_T(KC_E),      RALT_T(KC_O),      RGUI_T(KC_I)
#define _WORK_R3_	KC_K,     KC_L,     KC_COMM,  KC_DOT,   KC_SLASH

// Navigation
#define _NAVI_L1_	KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
#define _NAVI_L2_	KC_LGUI,  KC_LALT, KC_LCTL, KC_LSFT,    KC_NO
#define _NAVI_L3_	KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO

#define _NAVI_R1_	KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
#define _NAVI_R2_	KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_NO
#define _NAVI_R3_	KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO

// Numbers
#define _NUMB_L1_	KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
#define _NUMB_L2_	LGUI_T(KC_1),     LALT_T(KC_2),     LCTL_T(KC_3),     LSFT_T(KC_4),     KC_5
#define _NUMB_L3_	KC_NO,    KC_NO,    KC_MINS,  KC_EQL,   KC_NO

#define _NUMB_R1_	KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
#define _NUMB_R2_	KC_6,     RSFT_T(KC_7),     RCTL_T(KC_8),     RALT_T(KC_9),     RGUI_T(KC_0)
#define _NUMB_R3_	KC_NO,    S(KC_EQL),   S(KC_MINS),  KC_NO,    KC_NO

// Symbols
#define _SYMB_L1_	KC_NO,    KC_GRV,   KC_QUOT,  KC_SCLN,  KC_NO
#define _SYMB_L2_	KC_NO,    KC_LABK,  KC_LBRC,  KC_LPRN,  KC_LCBR
#define _SYMB_L3_	KC_NO,    KC_NO,    KC_SLSH,  KC_BSLS,  KC_NO

#define _SYMB_R1_	KC_NO,    S(KC_SCLN),  S(KC_QUOT),  S(KC_GRV),   KC_NO
#define _SYMB_R2_	KC_RCBR,  KC_RPRN,  KC_RBRC,  KC_RABK,  KC_NO
#define _SYMB_R3_	KC_NO,    S(KC_BSLS),  S(KC_SLSH),  KC_NO,    KC_NO

// Modifers
#define _MODI_L1_   LGUI_T(KC_TRNS), LALT_T(KC_TRNS), LCTL_T(KC_TRNS), LSFT_T(KC_TRNS), \
                    KC_TRNS
#define _MODI_R1_   KC_TRNS, \
                    RSFT_T(KC_TRNS), RCTL_T(KC_TRNS), RALT_T(KC_TRNS), RGUI_T(KC_TRNS)

// Special, Macros or something.
#define _SPEC_L1_	KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5
#define _SPEC_L2_	KC_F11,   KC_F12,   KC_F13,   KC_F14,   KC_F15
#define _SPEC_L3_	KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO

#define _SPEC_R1_	KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10
#define _SPEC_R2_	KC_F16,   KC_F17,   KC_F18,   KC_F19,   KC_F20
#define _SPEC_R3_	KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO

// Miscellaneous - I'm sure i'll find a use for this.
#define _MISC_L1_	KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
#define _MISC_L2_	KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
#define _MISC_L3_	KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO

#define _MISC_R1_	KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
#define _MISC_R2_	KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
#define _MISC_R3_	KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO