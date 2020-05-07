#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    /*              MEDIA
    *    ,---------------------------.
    *    | VLUP | MUTE | STOP | PLAY |
    *    |----------------------------
    *    | VLDN |AUTOG | PREV | NEXT |
    *    |----------------------------
    *    | WHUP |      | MUTE | TO 0 |
    *    |----------------------------
    *    | WHDN |  UP  | RFSH | SPCE |
    *    |---------------------------|
    *    | LEFT | DOWN | RGHT | ENTR |
    *    `---------------------------'
    */
    KC_VOLU, KC_MUTE, KC_MSTP,  KC_MPLY, \
    KC_VOLD, KC_PAUSE,KC_MPRV,  KC_MNXT, \
    KC_WH_U, KC_NO,   KC_PAUSE, TO(1),   \
    KC_WH_D, KC_UP,   KC_WREF,  KC_SPC,  \
    KC_LEFT, KC_DOWN, KC_RIGHT, KC_ENT  \
  ),
  [1] = LAYOUT(
    /*            NUMPAD
    *    ,---------------------------.
    *    |   +  |   -  |   *  |   /  |
    *    |---------------------------|
    *    |   7  |   8  |   9  | NMLK |
    *    |---------------------------|
    *    |   4  |   5  |   6  | TO 1 |
    *    |---------------------------|
    *    |   1  |   2  |   3  | SPCE |
    *    |---------------------------|
    *    | BSPC |   .  |   0  | ENTR |
    *    `---------------------------'
    */
    KC_PPLS, KC_PMNS, KC_PAST, KC_PSLS, \
    KC_P7,   KC_P8,   KC_P9,   KC_NLCK, \
    KC_P4,   KC_P5,   KC_P6,   TO(0),   \
    KC_P1,   KC_P2,   KC_P3,   KC_SPC,  \
    KC_BSPC, KC_PDOT, KC_P0,   KC_ENT   \
  )

};