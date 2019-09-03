#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _FUNC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        
    /* Keymap (Base Layer) Default Layer
     * ,----------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|   BS  | §  |
     * |----------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  {|  }| Ent |Del |
     * |------------------------------------------------------.    |----|
     * |Fn    |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  #|    |PgUp|
     * |----------------------------------------------------------------|
     * |Shift| <|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Up |PgDn|
     * |----------------------------------------------------------------|
     * |Ctrl|Win |Alt |          Space        |Alt |Fn|Ctrl|Lef|Dow|Rig |
     * `----------------------------------------------------------------'
     */
    [_QWERTY] = LAYOUT_all(
        KC_ESC,     KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC, KC_GRV, 
        KC_TAB,     KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_DEL, 
        MO(_FUNC),  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,                   KC_ENT,  KC_PGUP, 
        KC_LSFT,    KC_NUBS,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_PGDN, 
        KC_LCTL,    KC_LGUI,KC_LALT,KC_SPC, KC_SPC, KC_SPC,                                   KC_RALT, MO(_FUNC),KC_RCTL,KC_LEFT, KC_DOWN, KC_RGHT),

    /* Keymap Fn Layer
     * ,----------------------------------------------------------------.
     * | ` | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  Del  |Ins |
     * |----------------------------------------------------------------|
     * |     |TOG|M+ |H+ |S+ |V+ |Sp+|   |Prt|SLk|Pau|   |   |     |Home|
     * |------------------------------------------------------.    |----|
     * |      |VLK|M- |H- |S- |V+ |Sp-|   |   |   |   |   |   |    |End |
     * |----------------------------------------------------------------|
     * |       |BL |BL-|BL+|BRTG|   |   |   |   |   |   |      |PUp|    |
     * |----------------------------------------------------------------|
     * |    |   |    |                       |    |    |   |Hom|PDn|End |
     * `----------------------------------------------------------------'
     */
    [_FUNC] = LAYOUT_all(
         _______,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_DEL,KC_DEL,KC_INS, 
         _______,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,_______,KC_PSCR,KC_SLCK,KC_PAUS,_______,_______,_______,      KC_HOME, 
         _______,     VLK_TOG, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,_______,_______,_______,_______,_______,      _______,      KC_END, 
         _______,_______,BL_TOGG, BL_DEC, BL_INC, BL_BRTG,_______,_______,_______,_______,_______,_______,_______,        KC_PGUP,_______, 
         _______,_______  ,_______,      _______,     _______,    _______,  _______,_______, _______,KC_HOME,KC_PGDN,KC_END),
    };

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void matrix_init_user(void) {
    
}

void matrix_scan_user(void) {
    
}

void led_set_user(uint8_t usb_led) {
    if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
      rgblight_enable_noeeprom();
    } else {
      rgblight_disable_noeeprom();
    }
}
