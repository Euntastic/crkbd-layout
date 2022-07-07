#include QMK_KEYBOARD_H

extern uint8_t is_master;

enum layers {
  _WORK = 0,
  _NUMB,
  _SYMB,
  _NAVI,
  _SPEC,
  _MODI,
  _TYPE
};

#define LAYOUT_crkbd_base( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A  \
  ) \
  LAYOUT_wrapper( \
    KC_ESC,  K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, KC_CAPS, \
    KC_LSFT, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, KC_RSFT, \
    KC_LCTL, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, KC_RCTL, \
    KC_CAPS, NUM_KC,  NAV_KC, \
    SPC_KC,	 SYM_KC,  MOD_KC \
  )

#define LAYOUT_crkbd_base_wrapper(...)       LAYOUT_crkbd_base(__VA_ARGS__)

#define LAYOUT_wrapper(...)                  LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_WORK] = LAYOUT_crkbd_base_wrapper(  // Base Layer
  //╭───────╮                ╭───────╮
  	_WORK_L1_,               _WORK_R1_,
  //├───────┤                ├───────┤
  	_WORK_L2_,               _WORK_R2_,
  //├───────┤                ├───────┤
  	_WORK_L3_,               _WORK_R3_
  //╰───────╯───────╮╭───────╰───────╯
    ),
  [_NUMB] = LAYOUT_crkbd_base_wrapper(  // Number & Functions Layer
  //╭───────╮                ╭───────╮
    _NUMB_L1_,               _NUMB_R1_,
  //├───────┤                ├───────┤
    _NUMB_L2_,               _NUMB_R2_,
  //├───────┤                ├───────┤
    _NUMB_L3_,               _NUMB_R3_
  //╰───────┴───────╮╭───────┼───────╯
    ),
  [_SYMB] = LAYOUT_crkbd_base_wrapper( // Symbol Layer
  //╭───────╮                ╭───────╮
    _SYMB_L1_,               _SYMB_R1_,
  //├───────┤                ├───────┤
    _SYMB_L2_,               _SYMB_R2_,
  //├───────┤                ├───────┤
    _SYMB_L3_,               _SYMB_R3_
  //╰───────┴───────╮╭───────┼───────╯
    ),
  [_NAVI] = LAYOUT_crkbd_base_wrapper( // Navigation Layer
  //╭───────╮                ╭───────╮
    _NAVI_L1_,               _NAVI_R1_,
  //├───────┤                ├───────┤
    _NAVI_L2_,               _NAVI_R2_,
  //├───────┤                ├───────┤
    _NAVI_L3_,               _NAVI_R3_
  //╰───────┼───────╮╭───────┼───────╯
    ),
  [_SPEC] = LAYOUT_crkbd_base_wrapper( // Modifier Layer
  //╭───────╮                ╭───────╮
    _SPEC_L1_,               _SPEC_R1_,
  //├───────┤                ├───────┤
    _SPEC_L2_,               _SPEC_R2_,
  //├───────┤                ├───────┤
    _SPEC_L3_,               _SPEC_R3_
  //╰───────┴───────╮╭───────┼───────╯
    ),
  [_MODI] = LAYOUT_crkbd_base_wrapper( // Modifier Layer
  //╭───────╮                ╭───────╮
    _BLANKS__,               _BLANKS__,
  //├───────┤                ├───────┤
    _MODI_L1_,               _MODI_R1_,
  //├───────┤                ├───────┤
    _BLANKS__,               _BLANKS__
  //╰───────┴───────╮╭───────┼───────╯
    ),
  [_TYPE] = LAYOUT_crkbd_base_wrapper(
  //╭───────╮                ╭───────╮
    _BLANKS__,               _BLANKS__,
  //├───────┤                ├───────┤
    _MODI_L1_,               _MODI_R1_,
  //├───────┤                ├───────┤
    _BLANKS__,               _BLANKS__
  //╰───────┴───────╮╭───────┼───────╯
    )
};