#include QMK_KEYBOARD_H

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Colemak
 * ,-----------------------------------------------------------------------------------.
 * | TAB  |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   ;  |  -   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | BKSP |   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | DEL  |   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | ESC  | GUI  | ALT  | CTRL | SFT  |      |      | FN1  | FN2  |      |      |PRNT  |
 * `-----------------------------------------------------------------------------------'
 */
[0] = LAYOUT_ortho_4x12(
  KC_TAB,  KC_Q,    KC_W,    KC_F,     KC_P,    KC_G,   KC_J,    KC_L, KC_U,    KC_Y,    KC_SCLN, KC_MINS,
  KC_BSPC, KC_A,    KC_R,    KC_S,     KC_T,    KC_D,   KC_H,    KC_N, KC_E,    KC_I,    KC_O,    KC_QUOT,
  KC_DEL,  KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,   KC_K,    KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
  KC_ESC,  KC_LGUI, KC_LALT, KC_LCTRL, KC_LSFT, KC_SPC, MO(1),  MO(2), XXXXXXX, XXXXXXX, XXXXXXX, KC_PSCR
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  =   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      | LGTU |      |      | PGU  |      |  [   | LFT  |  UP  |  DN  |  RGT |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      | LGTD |      |      | PGD  |      |  ]   | HOME | END  |      |  \   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[1] = LAYOUT_ortho_4x12(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
  _______, KC_VOLU, KC_MUTE, KC_MSTP, KC_MPLY, KC_PGUP, KC_LBRC, KC_LEFT, KC_UP,   KC_RGHT, KC_GRV,  _______,
  _______, KC_VOLD, KC_PAUS, KC_MPRV, KC_MNXT, KC_PGDN, KC_RBRC, KC_HOME, KC_DOWN, KC_END,  KC_BSLS, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[2] = LAYOUT_ortho_4x12(
  KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
)

};

