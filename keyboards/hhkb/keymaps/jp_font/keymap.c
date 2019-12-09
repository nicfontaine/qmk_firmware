#include QMK_KEYBOARD_H

/* Layer 0: HHKB JP
 * ,-----------------------------------------------------------.
 * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9| 10|  -|  =|Yen|Bsp|
 * |-----------------------------------------------------------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|     |
 * |------------------------------------------------------` Ent|
 * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  `|    |
 * |-----------------------------------------------------------|
 * |Shft   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|  \| Up|Sft|
 * |-----------------------------------------------------------|
 * |   ||Ctl|Alt|Cmd|   |   Spc   |Bsp|   |   |   ||Lft|Dwn|Rgh|
 * `-----------------------------------------------------------'
 */

/* Layer 1: HHKB mode (HHKB Fn)
 * ,-----------------------------------------------------------.
 * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
 * |-----------------------------------------------------------|
 * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
 * |------------------------------------------------------`    |
 * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|   |    |
 * |-----------------------------------------------------------|
 * |       |   |   |   |   |   |  +|  -|End|PgD|Dow|   |   |   |
 * |-----------------------------------------------------------|
 * |   ||   |   |   |   |         |   |   |   |   ||   |   |   |
 * `-----------------------------------------------------------'
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_JP(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_BSLS, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_MINS,
        KC_BSPC, KC_A, KC_R, KC_S, KC_T, KC_D, KC_PGUP, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_PGDN, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_UP, KC_PSCR,
        KC_DEL, KC_ESC, KC_LGUI, KC_LALT, KC_LCTL, KC_SPC, MO(1), KC_RALT, KC_LBRC, KC_RBRC, KC_LEFT, KC_DOWN, KC_RGHT),

    [1] = LAYOUT_JP(
        _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INS, KC_DEL,
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, _______, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL,
        _______, _______, _______, KC_VOLU, KC_PGUP, _______,_______, KC_LBRC, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, _______, KC_PENT,
        _______, _______, _______, KC_VOLD, KC_PGDN, _______,_______, KC_RBRC, KC_HOME, KC_END, _______, KC_BSLS, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______)};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t macro_id, uint8_t opt)
{
    return MACRO_NONE;
}
