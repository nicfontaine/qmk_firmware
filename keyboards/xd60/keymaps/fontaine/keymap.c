#include QMK_KEYBOARD_H

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// 0: Base Layer
LAYOUT_66(
  KC_DEL,           KC_F1,    KC_F2,    KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,    KC_F11,  KC_F12,   KC_BSPC,  KC_NO,    \
  KC_TAB,           KC_Q,    KC_W,    KC_F,    KC_P,   KC_G,   KC_J,   KC_L,   KC_U,   KC_Y,    KC_SCLN, KC_MINS,  KC_LBRC,  KC_RBRC,   \
  KC_BSPC,          KC_A,    KC_R,    KC_S,    KC_T,   KC_D,   KC_H,   KC_N,   KC_E,   KC_I,    KC_O,    KC_QUOT,  KC_NO,    KC_ENT,    \
  KC_DEL, KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   KC_K,   KC_M,   KC_COMM,KC_DOT,  KC_SLSH, KC_ENT,   KC_UP,    KC_PSCR,    \
  KC_ESC, KC_LALT, KC_LCTL,       KC_NO,      KC_LALT,    MO(1),       KC_SPC, KC_NO,  KC_LALT,        KC_LEFT,  KC_DOWN,  KC_RIGHT),

// 1: Function Layer
LAYOUT_66(
  _______,          KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,   KC_F11,   KC_F12,   _______,  KC_NO,    \
  KC_GRV,           KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_EQL,   _______,  _______,   \
  _______,          KC_VOLU, KC_MUTE, KC_MSTP, KC_MPLY, KC_PGUP, KC_LBRC,KC_LEFT,KC_UP,  KC_DOWN, KC_RIGHT, KC_GRV,  _______,  _______,   \
  _______, _______, KC_VOLD, KC_PAUSE, KC_MPRV, KC_MNXT, KC_PGDN, KC_RBRC,KC_HOME,KC_END, _______, KC_BSLS, _______,  _______,  _______,   \
  RGB_TOG, _______, _______,      _______,    _______,    _______     ,_______, _______, _______,        _______,  _______,  _______),

};

// LSFT_T(KC_SPC)