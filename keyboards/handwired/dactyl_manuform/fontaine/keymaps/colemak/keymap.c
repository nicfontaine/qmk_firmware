/* Colemak, with momentary layer for numbers and extra keys, and game layer */ 

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define BAS 0
#define MDA 1
#define SYM 2
#define RGB 3
#define RES 4

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BAS] = LAYOUT_fontaine(
    KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,      KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,
    KC_TAB ,KC_Q   ,KC_W   ,KC_F   ,KC_P   ,KC_G   ,      KC_J   ,KC_L   ,KC_U   ,KC_Y   ,KC_SCLN,KC_MINS,
    KC_BSPC,KC_A   ,KC_R   ,KC_S   ,KC_T   ,KC_D   ,      KC_H   ,KC_N   ,KC_E   ,KC_I   ,KC_O   ,KC_QUOT,
    KC_DEL ,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,      KC_K   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_ENT ,
    KC_ESC ,KC_LGUI,XXXXXXX,XXXXXXX,KC_LALT,                      XXXXXXX,KC_LBRC,KC_RBRC,MO(RES),KC_PSCR,
    KC_SPC ,KC_LCTL,KC_ENT ,MO(SYM),KC_F12 ,KC_LSFT,      DF(MDA),XXXXXXX,KC_VOLU,KC_VOLD,MO(SYM),KC_SPC
  ),
  [MDA] = LAYOUT_fontaine(
    KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,      KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,
    KC_TAB ,KC_Q   ,KC_W   ,KC_F   ,KC_P   ,KC_G   ,      KC_J   ,KC_L   ,KC_U   ,KC_Y   ,KC_SCLN,KC_MINS,
    KC_BSPC,KC_A   ,KC_R   ,KC_S   ,KC_T   ,KC_D   ,      KC_H   ,KC_N   ,KC_E   ,KC_I   ,KC_O   ,KC_QUOT,
    KC_DEL ,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,      KC_K   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_ENT ,
    KC_ESC ,KC_LGUI,KC_F8  ,KC_F10 ,KC_LALT,                      XXXXXXX,KC_LBRC,KC_RBRC,MO(RES),KC_PSCR,
    KC_SPC ,KC_F7  ,KC_LCTL,KC_LALT,KC_F12 ,KC_LSFT,      XXXXXXX,DF(BAS),KC_VOLU,KC_VOLD,MO(SYM),_______
  ),
  [SYM] = LAYOUT_fontaine(
    _______,_______,_______,_______,_______,_______,      _______,_______,_______,_______,_______,_______,
    KC_GRV ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,      KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_EQL ,
    _______,KC_VOLU,KC_MUTE,KC_MSTP,KC_MPLY,KC_PGUP,      KC_LBRC,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,_______,
    _______,KC_VOLD,KC_PAUSE,KC_MPRV,KC_MNXT,KC_PGDN,     KC_RBRC,KC_HOME,KC_END ,_______,KC_BSLS,_______,
    RGB_TOG,_______,_______,_______,_______,                      _______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,      _______,_______,_______,_______,_______,_______
  ),
  [RGB] = LAYOUT_fontaine(
    _______,_______,_______,_______,_______,_______,      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,      _______,_______,_______,_______,_______,_______,
    _______,RGB_HUI,RGB_SAI,RGB_VAI,_______,_______,      _______,_______,_______,_______,_______,_______,
    _______,RGB_HUD,RGB_SAD,RGB_VAD,_______,_______,      _______,_______,_______,_______,_______,_______,
    RGB_TOG,_______,_______,_______,_______,                      _______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,      _______,_______,_______,_______,_______,_______
  ),
  [RES] = LAYOUT_fontaine(
    RESET  ,_______,_______,_______,_______,_______,      _______,_______,_______,_______,_______,RESET  ,
    _______,_______,_______,_______,_______,_______,      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,                      _______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,      _______,_______,_______,_______,_______,_______
  )
};

