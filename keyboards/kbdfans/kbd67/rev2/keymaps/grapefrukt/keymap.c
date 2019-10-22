#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _FUNC,
};

enum unicode_names {
    HOTDOG,
};

const uint32_t PROGMEM unicode_map[] = {
    [HOTDOG]  = 0x1F32D,  // 🌭
};

//Tap Dance Declarations
enum {
  TD_PAUSE_SKIP = 0
};

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Esc, twice for Caps Lock
  [TD_PAUSE_SKIP] = ACTION_TAP_DANCE_DOUBLE(KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK)
  // Other declarations would go here, separated by commas, if you have them
};

//In Layer declaration, add tap dance item in place of a key code


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        
    /* Keymap (Base Layer) Default Layer
     * ,----------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|   BS  | §  |
     * |----------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  {|  }| Ent |PgUp|
     * |------------------------------------------------------.    |----|
     * |Win   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  #|    |PgDn|
     * |----------------------------------------------------------------|
     * |Shift| <|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Up |Del |
     * |----------------------------------------------------------------|
     * |Ctrl|Fn |Alt |          Space        |Alt |Win|Ctrl|Lef|Dow|Rig |
     * `----------------------------------------------------------------'
     */
    [_QWERTY] = LAYOUT_all(
        KC_ESC,    KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC, KC_GRV, 
        KC_TAB,      KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,        KC_PGUP,
        KC_LGUI,      KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,                KC_ENT,  KC_PGDN, 
        KC_LSFT, KC_NUBS,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,            KC_UP,   KC_DEL, 
        KC_LCTL,    MO(_FUNC),KC_LALT,KC_SPC, KC_SPC, KC_SPC,                                 KC_RALT, KC_RGUI,KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

    /* Keymap Fn Layer
     * ,----------------------------------------------------------------.
     * | 🌭| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  Del  |Prt |
     * |----------------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |Vol+|
     * |------------------------------------------------------.    |----|
     * |      |   |   |   |   |   |   |   |   |   |   |   |   |    |P/S |
     * |----------------------------------------------------------------|
     * |       |    |   |   |   |   |   |   |   |   |   |      |PUp|Vol-|
     * |----------------------------------------------------------------|
     * |    |   |    |                       |    |    |   |Hom|PDn|End |
     * `----------------------------------------------------------------'
     */
    [_FUNC] = LAYOUT_all(
         X(HOTDOG),  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_DEL,KC_DEL, KC_PSCR,
         _______,   _______, _______, _______, _______, _______, _______,_______,_______,_______,_______,_______,_______,_______,   KC_AUDIO_VOL_UP, 
         _______,     _______, _______, _______, _______, _______, _______,_______,_______,_______,_______,_______,      _______,   TD(TD_PAUSE_SKIP), 
         _______,_______,_______, _______, _______, _______,_______,_______,_______,_______,_______,_______,_______,        KC_PGUP,KC_AUDIO_VOL_DOWN, 
         _______,_______  ,_______,      _______,     _______,    _______,                 _______,_______, _______,KC_HOME,KC_PGDN,KC_END),
    };

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void matrix_init_user(void) {
    set_unicode_input_mode(UC_WINC);
}

void matrix_scan_user(void) {
    
}

void led_set_user(uint8_t usb_led) {
    
}

void eeconfig_init_user(void) {
    
}
