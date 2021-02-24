// using as reference
// https://docs.qmk.fm/#/keymap
// thanks to atlacat, hailbreno, itsaferbie and weeheavy...
// and special thanks to  AGausmann and drashna for the layer-activated RGB underglow
// https://www.reddit.com/r/olkb/comments/6t1vdu/update_layeractivated_rgb_underglow/ 
// https://github.com/AGausmann/qmk_firmware/blob/agausmann-v3.x/keyboards/nyquist/keymaps/agausmann/keymap.c
#include QMK_KEYBOARD_H
/* Each layer gets a name for readability.
* The underscores don't mean anything - you can
* have a layer called STUFF or any other name.
* Layer names don't all need to be of the same
* length, and you can also skip them entirely
* and just use numbers. */
#define BL 0     // Typing
#define DT 1     // Dota
#define FL 2     // Function
#define NL 3     // Numpad
#define RL 4     // RGB
/* Let's give an easier name to the RGB modes 
* and assign the ones we want to the different layer
* these will then be used by the function below */
#define RGB_STA RGB_M_P   //rgb static
#define RGB_BRE RGB_M_B   //rgb breathe
#define RGB_RAI RGB_M_R   //rgb rainbow
#define RGB_SWI RGB_M_SW  //rgb swirl
#define RGB_SNA RGB_M_SN  //rgb snake
#define RGB_KNI RGB_M_K   //rgb knight
#define RGB_GRA RGB_M_G   //rgb gradient
#define RGB_XMS RGB_M_X   //rgb christmas
#define RGB_BL_MODE    rgblight_mode_noeeprom(3)              //rgb mode for BL layer
#define RGB_BL_LIGHT   rgblight_sethsv_noeeprom_turquoise()   //rgb light for BL layer
#define RGB_DT_MODE    rgblight_mode_noeeprom(1)             //rgb mode for FL layer
#define RGB_DT_LIGHT   rgblight_sethsv_noeeprom_orange()      //rgb light for FL layer
#define RGB_NL_MODE    rgblight_mode_noeeprom(12)             //rgb mode for NL layer
#define RGB_NL_LIGHT   rgblight_sethsv_noeeprom_turquoise()       //rgb light for NL layer
#define RGB_RL_MODE    rgblight_mode_noeeprom(22)             //rgb mode for RL layer
#define RGB_RL_LIGHT   rgblight_sethsv_noeeprom_red()         //rgb light for RL layer
      
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
  /* Keymap BL: Base
   *
   * ,-----------------------------------------------------------.
   * |Del | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  |   |
   * |-----------------------------------------------------------|
   * | Tab | q | w | f | p | g | \ | j | l | u | y | ; | - |     |
   * |------------------------------------------------------ Ent |
   * |Backsp| a | r | s | t | d |PgU| h | n | e | i | o | ' |    |
   * |-----------------------------------------------------------|
   * |Shft   | z | x | c | v | b |PgD| k | m | , | . | / | Up|Prt|
   * |-----------------------------------------------------------|
   * |Esc|Gui |Alt |  Ctrl  | Spc |    FN    |Alt|Num|Lft|Dwn|Rgt|
   * `-----------------------------------------------------------'
   */
   [BL] = LAYOUT_iso_fontaine(
      //  1        2          3          4          5          6          7          8          9          10         11         12         13         14
      KC_DEL,    KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,     KC_F12, KC_BSPC, KC_BSPC,
      KC_TAB ,    KC_Q,      KC_W,      KC_F,      KC_P,      KC_G,      KC_BSLS,   KC_J,      KC_L,      KC_U,      KC_Y,      KC_SCLN,   KC_MINS,
      KC_BSPC,     KC_A,      KC_R,      KC_S,      KC_T,      KC_D,      KC_PGUP,   KC_H,      KC_N,      KC_E,      KC_I,      KC_O,      KC_QUOT,   KC_ENT,
      KC_LSFT,      KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_PGDN,   KC_K,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_UP,    KC_PSCR,
      KC_ESC,  KC_LGUI,  KC_LALT,             KC_LCTL,          KC_SPC,              MO(FL),                KC_RALT,   MO(NL),     KC_LEFT,   KC_DOWN,  KC_RIGHT),

   /* Keymap DT: Dota
    * ,-----------------------------------------------------------.
    * |Del | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  |   |
    * |-----------------------------------------------------------|
    * | Tab | q | w | f | p | g | \ | j | l | u | y | ; | - |     |
    * |------------------------------------------------------ Ent |
    * |Backsp| a | r | s | t | d |PgU| h | n | e | i | o | ' |    |
    * |-----------------------------------------------------------|
    * |Shft   | z | x | c | v | b |PgD| k | m | , | . | / | Up|Prt|
    * |-----------------------------------------------------------|
    * |Esc|Gui |Alt |  Ctrl  | Spc |    F8    |Alt|Num|Lft|Dwn|Rgt|
    * `-----------------------------------------------------------'   */
   [DT] = LAYOUT_iso_fontaine(
      //  1          2          3          4          5          6          7          8          9          10         11         12         13         14
      _______, _______,  _______,  _______,   _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______, _______,
      _______,  _______,  _______,  _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
      _______,   _______,  _______,  _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
      _______,    _______,  _______,  _______,  _______,  _______,   _______,   _______,   _______,        _______,  _______,  _______, _______, _______,
      _______, _______,_______,          _______,                   _______,            KC_F8,           _______,  _______,  _______, _______, _______),

   /* Keymap FL: Functions
    * ,-----------------------------------------------------------.
    * |    |   |   |   |   |   |   |   |   |   |   |   |   |  |   |
    * |-----------------------------------------------------------|
    * |     | 1 | 2 | 3 | 4 | 5 |   | 6 | 7 | 8 | 9 | 0 | = |     |
    * |------------------------------------------------------     |
    * |      |Vl+|Mut|Stp|Ply|PgU|   | [ | L | U | D | R | ` |    |
    * |-----------------------------------------------------------|
    * |       |Vl-|Pau|Prv|Nxt|PgD|   | ] |Hom|End|   | \ |   |   |
    * |-----------------------------------------------------------|
    * |   |    |    |        |     |          |   |   |   |   |   |
    * `-----------------------------------------------------------'   */
   [FL] = LAYOUT_iso_fontaine(
   //  1          2          3          4          5          6          7          8          9          10         11         12         13         14
      _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,     _______, _______,
      _______,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      _______,   KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_EQL,
      _______,     KC_VOLU,   KC_MUTE,   KC_MSTP,   KC_MPLY,   KC_PGUP,   _______,   KC_LBRC,   KC_LEFT,   KC_UP,     KC_DOWN,   KC_RGHT,    KC_GRV,   _______,
      _______,      KC_VOLD,   KC_PAUSE,  KC_MPRV,   KC_MNXT,   KC_PGDN,   _______,   KC_RBRC,   KC_HOME,   KC_END,    _______,   KC_BSLS,   _______,  _______,
      _______, _______,  _______,             _______,          _______,              _______,              _______,   _______,   _______,   _______,  _______),

   /* Keymap FL: Numpag
    * ,-----------------------------------------------------------.
    * |NmLk| + | - | * | / |   |   |   |   |   |   |  | BL| DT| RL|
    * |-----------------------------------------------------------|
    * |     | 7 | 8 | 9 |   |   |   |   |   |   |   |   |   |     |
    * |------------------------------------------------------     |
    * |      | 4 | 5 | 6 |   |   |   |   |   |   |   |   |   |    |
    * |-----------------------------------------------------------|
    * |       | 1 | 2 | 3 |   |   |   |   |   |   |   |   |   |   |
    * |-----------------------------------------------------------|
    * |   | .  | 0  |        | Ent |          |   |   |   |   |   |
    * `-----------------------------------------------------------'   */
   [NL] = LAYOUT_iso_fontaine(
	//  1          2          3          4          5          6          7          8          9          10         11         12         13         14
	    KC_NLCK, KC_PPLS, KC_PMNS, KC_PAST, KC_PSLS,  _______,   _______,   _______,   _______,   _______,   _______,   _______, TO(BL),   TO(DT),    TO(RL),
        _______, KC_P7,   KC_P8,   KC_P9,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,  KC_P4,   KC_P5,   KC_P6,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   KC_P1,   KC_P2,   KC_P3,  _______,  _______,   _______,   _______,   _______,   _______,  _______,  _______, _______, _______,
        _______, KC_PDOT,KC_P0,          KC_SPC,                   KC_ENT,            _______,      _______,  _______, _______, _______, _______),

  /* Keymap RL: RGB Layer
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
   * |-----------------------------------------------------------|
   * |     |tog|mod|hui|hud|   |   |sai|sad|vai|vad|   |   |     |
   * |------------------------------------------------------     |
   * |       |sta|bre|rai|swi|   |   |sna|kni|gra|xms|   |   |   |
   * |-----------------------------------------------------------|
   * |    |   |bd |bt |bi |bs |   |   |   |   |   |   |          |
   * |-----------------------------------------------------------|
   * |    |    |    |        |    |         |    |    |    |     |
   * `-----------------------------------------------------------'   */
   [RL] = LAYOUT_iso_fontaine(
	//  1          2          3          4          5          6          7          8          9          10         11         12         13         14
	     _______,    _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______, _______,
        _______,   RGB_TOG,   RGB_MOD,   RGB_HUI,   RGB_HUD,   _______,   _______,   RGB_SAI,   RGB_SAD,   RGB_VAI,   RGB_VAD,   _______,   _______,
        _______,   RGB_STA,   RGB_BRE,   RGB_RAI,   RGB_SWI,   _______,   _______,   RGB_SNA,   RGB_KNI,   RGB_GRA,   RGB_XMS,   _______,   _______,   _______,
        _______,   BL_DEC,    BL_TOGG,   BL_INC,    BL_STEP,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,    _______,   _______,   _______,   _______,   _______,   _______),       
};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}


// layer-activated RGB underglow

void matrix_scan_user(void) {

  #ifdef RGBLIGHT_ENABLE

  static uint8_t old_layer = 1;
  uint8_t new_layer = biton32(layer_state);

  if (old_layer != new_layer) {
    switch (new_layer) {
      case BL:
          RGB_NL_MODE;
          RGB_NL_LIGHT;        
        break;
      case DT:
          RGB_DT_MODE;
          RGB_DT_LIGHT;  
        break;
      case NL:
          // RGB_NL_MODE; 
         // RGB_NL_LIGHT; 
        break;
      case RL:
          RGB_RL_MODE; 
         // RGB_RL_LIGHT;        
        break;
    }

    old_layer = new_layer;
  }

  #endif //RGBLIGHT_ENABLE

}
