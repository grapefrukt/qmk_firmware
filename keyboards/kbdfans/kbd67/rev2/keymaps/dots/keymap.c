 #include QMK_KEYBOARD_H

enum layers {
    _QWERTY
};

enum unicode_names {
    CW,
    CY,
    CG,
    CO,
    CP,
    CB,
    CR,

    CM,
};

const uint32_t PROGMEM unicode_map[] = {
    [CW]  = 0x26AA,  // white circle ⚪
    [CY]  = 0x1F7E1,  // yellow circle 🟡
    [CG]  = 0x1F7E2,  // green circle 🟢
    [CO]  = 0x1F7E0,  // orange circle 🟠
    [CP]  = 0x1F7E3,  // purple circle 🟣
    [CB]  = 0x1F535,  // blue circle 🔵
    [CR]  = 0x1F534,  // red circle 🔴
    [CM]  = 0x1F311,  // moon (gray) circle 🌑
};


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
        X(CO),    X(CW),   X(CW),   X(CW),   X(CW),   X(CW),   X(CW),   X(CW),   X(CM),    X(CM),    X(CW),    X(CW), X(CW),  KC_BSPC, KC_BSPC, X(CR), 
        X(CM),      X(CW),   X(CW),   X(CW),   X(CW),   X(CW),   X(CW),   X(CW),   X(CW),    X(CW),    X(CW),    X(CW), X(CW), X(CW),        X(CY),
        X(CG),      X(CW),   X(CW),   X(CW),   X(CW),   X(CW),   X(CW),   X(CW),   X(CW),    X(CW),    X(CW), X(CW),                X(CG),  X(CG), 
        X(CY), X(CW),X(CW),   X(CW),   X(CW),   X(CW),   X(CW),   X(CW),   X(CW),    X(CW), X(CW),  X(CW), X(CY),            X(CM),   X(CB), 
        X(CR),    X(CP),X(CB),KC_SPC, KC_SPC, KC_SPC,                                 X(CB), X(CP),X(CR), X(CM), X(CM), X(CM)),
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
