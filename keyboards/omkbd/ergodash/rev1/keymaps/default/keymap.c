#include QMK_KEYBOARD_H

const rgblight_segment_t PROGMEM my_layer0_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1,  HSV_OFF},
    {1, 1,  HSV_OFF},
    {2, 1,  HSV_OFF},
    {3, 1,  HSV_OFF},
    {4, 1,  HSV_OFF},
    {5, 1,  HSV_OFF},
    {6, 1,  HSV_OFF},
    {7, 1,  HSV_OFF},
    {8, 1,  HSV_OFF},
    {9, 1,  HSV_OFF},
    {10, 1, HSV_OFF},
    {11, 1, HSV_OFF},
    //
    {12, 1, HSV_OFF},
    {13, 1, HSV_OFF},
    {14, 1, HSV_OFF},
    {15, 1, HSV_OFF},
    {16, 1, HSV_OFF},
    {17, 1, HSV_OFF},
    {18, 1, HSV_OFF},
    {19, 1, HSV_OFF},
    {20, 1, HSV_OFF},
    {21, 1, HSV_OFF},
    {22, 1, HSV_OFF},
    {23, 1, HSV_OFF}
);
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1,  HSV_OFF},
    {1, 1,  HSV_OFF},
    {2, 1,  HSV_OFF},
    {3, 1,  HSV_OFF},
    {4, 1,  HSV_CYAN},
    {5, 1,  HSV_CYAN},
    {6, 1,  HSV_CYAN},
    {7, 1,  HSV_CYAN},
    {8, 1,  HSV_OFF},
    {9, 1,  HSV_OFF},
    {10, 1, HSV_OFF},
    {11, 1, HSV_OFF},
    //
    {12, 1, HSV_OFF},
    {13, 1, HSV_OFF},
    {14, 1, HSV_OFF},
    {15, 1, HSV_OFF},
    {16, 1, HSV_CYAN},
    {17, 1, HSV_CYAN},
    {18, 1, HSV_CYAN},
    {19, 1, HSV_CYAN},
    {20, 1, HSV_OFF},
    {21, 1, HSV_OFF},
    {22, 1, HSV_OFF},
    {23, 1, HSV_OFF}
);
const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1,  HSV_OFF},
    {1, 1,  HSV_OFF},
    {2, 1,  HSV_OFF},
    {3, 1,  HSV_OFF},
    {4, 1,  HSV_GREEN},
    {5, 1,  HSV_GREEN},
    {6, 1,  HSV_GREEN},
    {7, 1,  HSV_GREEN},
    {8, 1,  HSV_OFF},
    {9, 1,  HSV_OFF},
    {10, 1, HSV_OFF},
    {11, 1, HSV_OFF},
    //
    {12, 1, HSV_OFF},
    {13, 1, HSV_OFF},
    {14, 1, HSV_OFF},
    {15, 1, HSV_OFF},
    {16, 1, HSV_GREEN},
    {17, 1, HSV_GREEN},
    {18, 1, HSV_GREEN},
    {19, 1, HSV_GREEN},
    {20, 1, HSV_OFF},
    {21, 1, HSV_OFF},
    {22, 1, HSV_OFF},
    {23, 1, HSV_OFF}
);
const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1,  HSV_OFF},
    {1, 1,  HSV_OFF},
    {2, 1,  HSV_OFF},
    {3, 1,  HSV_OFF},
    {4, 1,  HSV_YELLOW},
    {5, 1,  HSV_YELLOW},
    {6, 1,  HSV_YELLOW},
    {7, 1,  HSV_YELLOW},
    {8, 1,  HSV_OFF},
    {9, 1,  HSV_OFF},
    {10, 1, HSV_OFF},
    {11, 1, HSV_OFF},
    //
    {12, 1, HSV_OFF},
    {13, 1, HSV_OFF},
    {14, 1, HSV_OFF},
    {15, 1, HSV_OFF},
    {16, 1, HSV_YELLOW},
    {17, 1, HSV_YELLOW},
    {18, 1, HSV_YELLOW},
    {19, 1, HSV_YELLOW},
    {20, 1, HSV_OFF},
    {21, 1, HSV_OFF},
    {22, 1, HSV_OFF},
    {23, 1, HSV_OFF}
);
const rgblight_segment_t PROGMEM my_layer4_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1,  HSV_OFF},
    {1, 1,  HSV_OFF},
    {2, 1,  HSV_OFF},
    {3, 1,  HSV_OFF},
    {4, 1,  HSV_RED},
    {5, 1,  HSV_RED},
    {6, 1,  HSV_RED},
    {7, 1,  HSV_RED},
    {8, 1,  HSV_OFF},
    {9, 1,  HSV_OFF},
    {10, 1, HSV_OFF},
    {11, 1, HSV_OFF},
    //
    {12, 1, HSV_OFF},
    {13, 1, HSV_OFF},
    {14, 1, HSV_OFF},
    {15, 1, HSV_OFF},
    {16, 1, HSV_RED},
    {17, 1, HSV_RED},
    {18, 1, HSV_RED},
    {19, 1, HSV_RED},
    {20, 1, HSV_OFF},
    {21, 1, HSV_OFF},
    {22, 1, HSV_OFF},
    {23, 1, HSV_OFF}
);
const rgblight_segment_t PROGMEM my_layer5_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1,  HSV_OFF},
    {1, 1,  HSV_OFF},
    {2, 1,  HSV_OFF},
    {3, 1,  HSV_OFF},
    {4, 1,  HSV_ORANGE},
    {5, 1,  HSV_ORANGE},
    {6, 1,  HSV_ORANGE},
    {7, 1,  HSV_ORANGE},
    {8, 1,  HSV_OFF},
    {9, 1,  HSV_OFF},
    {10, 1, HSV_OFF},
    {11, 1, HSV_OFF},
    //
    {12, 1, HSV_OFF},
    {13, 1, HSV_OFF},
    {14, 1, HSV_OFF},
    {15, 1, HSV_OFF},
    {16, 1, HSV_ORANGE},
    {17, 1, HSV_ORANGE},
    {18, 1, HSV_ORANGE},
    {19, 1, HSV_ORANGE},
    {20, 1, HSV_OFF},
    {21, 1, HSV_OFF},
    {22, 1, HSV_OFF},
    {23, 1, HSV_OFF}
);

const rgblight_segment_t PROGMEM my_layer6_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1,  HSV_OFF},
    {1, 1,  HSV_OFF},
    {2, 1,  HSV_OFF},
    {3, 1,  HSV_OFF},
    {4, 1,  HSV_BLUE},
    {5, 1,  HSV_BLUE},
    {6, 1,  HSV_BLUE},
    {7, 1,  HSV_BLUE},
    {8, 1,  HSV_OFF},
    {9, 1,  HSV_OFF},
    {10, 1, HSV_OFF},
    {11, 1, HSV_OFF},
    //
    {12, 1, HSV_OFF},
    {13, 1, HSV_OFF},
    {14, 1, HSV_OFF},
    {15, 1, HSV_OFF},
    {16, 1, HSV_BLUE},
    {17, 1, HSV_BLUE},
    {18, 1, HSV_BLUE},
    {19, 1, HSV_BLUE},
    {20, 1, HSV_OFF},
    {21, 1, HSV_OFF},
    {22, 1, HSV_OFF},
    {23, 1, HSV_OFF}
);
const rgblight_segment_t PROGMEM my_layer7_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1,  HSV_OFF},
    {1, 1,  HSV_OFF},
    {2, 1,  HSV_OFF},
    {3, 1,  HSV_OFF},
    {4, 1,  HSV_SPRINGGREEN},
    {5, 1,  HSV_SPRINGGREEN},
    {6, 1,  HSV_SPRINGGREEN},
    {7, 1,  HSV_SPRINGGREEN},
    {8, 1,  HSV_OFF},
    {9, 1,  HSV_OFF},
    {10, 1, HSV_OFF},
    {11, 1, HSV_OFF},
    //
    {12, 1, HSV_OFF},
    {13, 1, HSV_OFF},
    {14, 1, HSV_OFF},
    {15, 1, HSV_OFF},
    {16, 1, HSV_SPRINGGREEN},
    {17, 1, HSV_SPRINGGREEN},
    {18, 1, HSV_SPRINGGREEN},
    {19, 1, HSV_SPRINGGREEN},
    {20, 1, HSV_OFF},
    {21, 1, HSV_OFF},
    {22, 1, HSV_OFF},
    {23, 1, HSV_OFF}
);
const rgblight_segment_t PROGMEM my_layer8_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1,  HSV_OFF},
    {1, 1,  HSV_OFF},
    {2, 1,  HSV_OFF},
    {3, 1,  HSV_OFF},
    {4, 1,  HSV_TEAL},
    {5, 1,  HSV_TEAL},
    {6, 1,  HSV_TEAL},
    {7, 1,  HSV_TEAL},
    {8, 1,  HSV_OFF},
    {9, 1,  HSV_OFF},
    {10, 1, HSV_OFF},
    {11, 1, HSV_OFF},
    //
    {12, 1, HSV_OFF},
    {13, 1, HSV_OFF},
    {14, 1, HSV_OFF},
    {15, 1, HSV_OFF},
    {16, 1, HSV_TEAL},
    {17, 1, HSV_TEAL},
    {18, 1, HSV_TEAL},
    {19, 1, HSV_TEAL},
    {20, 1, HSV_OFF},
    {21, 1, HSV_OFF},
    {22, 1, HSV_OFF},
    {23, 1, HSV_OFF}
);
const rgblight_segment_t PROGMEM my_layer9_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1,  HSV_OFF},
    {1, 1,  HSV_OFF},
    {2, 1,  HSV_OFF},
    {3, 1,  HSV_OFF},
    {4, 1,  HSV_AZURE},
    {5, 1,  HSV_AZURE},
    {6, 1,  HSV_AZURE},
    {7, 1,  HSV_AZURE},
    {8, 1,  HSV_OFF},
    {9, 1,  HSV_OFF},
    {10, 1, HSV_OFF},
    {11, 1, HSV_OFF},
    //
    {12, 1, HSV_OFF},
    {13, 1, HSV_OFF},
    {14, 1, HSV_OFF},
    {15, 1, HSV_OFF},
    {16, 1, HSV_AZURE},
    {17, 1, HSV_AZURE},
    {18, 1, HSV_AZURE},
    {19, 1, HSV_AZURE},
    {20, 1, HSV_OFF},
    {21, 1, HSV_OFF},
    {22, 1, HSV_OFF},
    {23, 1, HSV_OFF}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_layer0_layer,
    my_layer1_layer,
    my_layer2_layer,
    my_layer3_layer,
    my_layer4_layer,
    my_layer5_layer,
    my_layer6_layer,
    my_layer7_layer,
    my_layer8_layer,
    my_layer9_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}


enum layer_names {
    /* _QWERTY, */
    /* _LOWER, */
    /* _RAISE, */
    /* _ADJUST, */
    _BASE,
    _BRWSR,
    _WNDW,
    _VIM,
    _LEFT,
    _DLV,
    _SBLNUM,
    _VIMSCRL,
    _CURSOR
};

// https://docs.qmk.fm/feature_layers#functions
// bool led_update_user(led_t led_state) {
//     rgblight_set_layer_state(0, led_state.caps_lock);
//     return true;
// }

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _BASE));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _BRWSR));
    rgblight_set_layer_state(2, layer_state_cmp(state, _WNDW));
    rgblight_set_layer_state(3, layer_state_cmp(state, _DLV));
    rgblight_set_layer_state(4, layer_state_cmp(state, _SBLNUM));
    rgblight_set_layer_state(5, layer_state_cmp(state, _LEFT));
    rgblight_set_layer_state(6, layer_state_cmp(state, _VIMSCRL));
    rgblight_set_layer_state(7, layer_state_cmp(state, _VIM));
    rgblight_set_layer_state(9, layer_state_cmp(state, _CURSOR));
    // rgblight_set_layer_state(3, layer_state_cmp(state, _ADJUST));
    return state;
}

enum custom_keycodes {
  /* QWERTY = SAFE_RANGE, */
  /* LOWER, */
  /* RAISE, */
  /* ADJUST, */
  BASE = SAFE_RANGE,
  BROWSER,
  WINDOW,
  VIM,
  LEFT,
  DELVE, // 5
  LVIM,
  VIMX,
  ERGODOX,
  VIMSCROLL, // 9
  CURSOR,
  DELVE_NEXT,
  DELVE_STEPIN,
  DELVE_STEPOUT,
  DELVE_CONTINUE,
  DELVE_EXIT,
  DELVE_RESTART_DEBUG,
  DELVE_RESTART_TEST,
  DELVE_UP_FRAME,
  DELVE_DOWN_FRAME,
  DBL_CLK,
  SAVE_IMAGE,
  SAVE_IMAGE2,
  FORCE_ESC,
  COPY_OPENING_URL,
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DELVE_NEXT:
            if (record->event.pressed) {
                SEND_STRING("n\n");
            }
            break;
        case DELVE_STEPIN:
            if (record->event.pressed) {
                SEND_STRING("s\n");
            }
            break;
        case DELVE_STEPOUT:
            if (record->event.pressed) {
                SEND_STRING("so\n");
            }
            break;
        case DELVE_CONTINUE:
            if (record->event.pressed) {
                SEND_STRING("c\n");
            }
            break;
        case DELVE_EXIT:
            if (record->event.pressed) {
                SEND_STRING("exit\n");
                SEND_STRING(SS_DELAY(400) SS_TAP(X_ENT));
            }
            break;
        case DELVE_RESTART_DEBUG:
            if (record->event.pressed) {
                SEND_STRING("exit\n");
                SEND_STRING(SS_DELAY(400) SS_TAP(X_ENT));
                SEND_STRING("'d");
            }
            break;
        case DELVE_RESTART_TEST:
            if (record->event.pressed) {
                SEND_STRING("exit\n");
                SEND_STRING(SS_DELAY(400) SS_TAP(X_ENT));
                SEND_STRING("'gg");
            }
            break;
        case DELVE_UP_FRAME:
            if (record->event.pressed) {
                SEND_STRING("up\n");
            }
            break;
        case DELVE_DOWN_FRAME:
            if (record->event.pressed) {
                SEND_STRING("down\n");
            }
            break;
            /* case KC_1: */
            /*     if (record->event.pressed) { */
            /*       // Do something when pressed */
            /*       wait_ms(9000); */
            /*       #<{(| register_code(KC_1); |)}># */
            /*     } else { */
            /*       // Do something else when release */
            /*       #<{(| unregister_code(KC_1); |)}># */
            /*     } */
            /*     // register_code/unregister_codeを実行しないかつtrueを返却することにより */
            /*     // key press処理にディレイがかかりかつ"Process KC_1 keycode normally"となるようになる */
            /*     break; */
        case DBL_CLK:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_BTN1) SS_TAP(X_BTN1));
            }
            break;
        case SAVE_IMAGE:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_BTN2) SS_DELAY(400) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_ENT));
            }
            break;
        case SAVE_IMAGE2:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_BTN2) SS_DELAY(400) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_ENT));
            }
            break;
        case FORCE_ESC:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_ESC) SS_LGUI("9"));
            }
            break;
        case COPY_OPENING_URL:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                register_code(KC_L);
                unregister_code(KC_L);
                unregister_code(KC_LGUI);
                register_code(KC_LGUI);
                register_code(KC_C);
                unregister_code(KC_C);
                unregister_code(KC_LGUI);
            }
            break;
    }
    return true;
};

void dance_mouse_layer(tap_dance_state_t *state, void *user_data) {
    // https://github.com/qmk/qmk_firmware/blob/master/docs/feature_layers.md
    if (state->count == _BRWSR){
        layer_invert(_BRWSR);
    } else {
        layer_invert(_LEFT);
    }
}

void dance_layers_9and3(tap_dance_state_t *state, void *user_data) {
    if (state->count == _BRWSR){
        layer_invert(_VIMSCRL);
    } else {
        layer_invert(_VIM);
    }
}

// Tap Dance declarations
enum {
    // for tab
    TD_CTL_TAB,
    TD_MPLY_MNXT,
    TD_MAC_F8,
    TD_TGLIPT,
    TD_MS_LYR,
    TD_LYR_93,
    TD_LCTL_LAYER_CURSOR,
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    [TD_CTL_TAB]             = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, KC_TAB),
    [TD_MPLY_MNXT]           = ACTION_TAP_DANCE_DOUBLE(KC_MPLY, KC_MNXT),
    [TD_MAC_F8]              = ACTION_TAP_DANCE_DOUBLE(KC_F8, KC_MPLY),
    [TD_TGLIPT]              = ACTION_TAP_DANCE_DOUBLE(G(KC_8), G(KC_7)),
    [TD_MS_LYR]              = ACTION_TAP_DANCE_FN(dance_mouse_layer),
    [TD_LYR_93]              = ACTION_TAP_DANCE_FN(dance_layers_9and3),
    [TD_LCTL_LAYER_CURSOR]   = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, TG(CURSOR)),
};

// combos definitions
const uint16_t PROGMEM esc_combo[]        = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM alfred_combo[]     = {KC_F, KC_J, COMBO_END};
const uint16_t PROGMEM centralize_combo[] = {KC_LGUI, KC_RGUI, COMBO_END};

combo_t key_combos[] = {
    COMBO(esc_combo,        FORCE_ESC),
    COMBO(alfred_combo,     LGUI(KC_J)),
    COMBO(centralize_combo, LCTL(LALT(LCMD(KC_C)))),
};

#define EISU LALT(KC_GRV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_EQL,        KC_1,            KC_2,   KC_3,           KC_4,      KC_5,   KC_ESC,                                              KC_ESC,            KC_6,    KC_7,        KC_8,           KC_9,    KC_0,                 KC_MINS,
    KC_TAB,        KC_Q,            KC_W,   LT(_WNDW,KC_E), KC_R,      KC_T,   KC_BSPC,                                             KC_BSPC,           KC_Y,    KC_U,        LT(_WNDW,KC_I), KC_O,    KC_P,                 KC_BSLS,
    TD(TD_MS_LYR), LT(_SBLNUM,KC_A),KC_S,   LT(_BRWSR,KC_D),KC_F,      KC_G,   KC_ENT,                                              KC_ENT,            KC_H,    KC_J,        KC_K,           KC_L,    LT(_SBLNUM,KC_SCLN),  MT(MOD_RGUI, KC_QUOT),
    C(A(G(KC_T))), KC_Z,            KC_X,   LT(_DLV,KC_C),  KC_V,KC_B, KC_ESC,                                                      KC_ESC,            KC_N,    KC_M,        KC_COMM,        KC_DOT,  KC_SLSH,              TD(TD_TGLIPT),
    KC_LCTL,       KC_LALT,         KC_LEFT,                KC_RIGHT,  KC_LGUI,MT(MOD_LSFT,KC_SPC),TD(TD_CTL_TAB),TD(TD_CTL_TAB),  MT(MOD_RSFT,KC_SPC),KC_RGUI, KC_NO ,                      KC_NO,   KC_RALT ,             TD(TD_LYR_93)
    // KC_EQL,                  KC_1,      KC_2,  KC_3,       KC_4,      KC_5,   KC_ESC,                                              KC_ESC,            KC_6,    KC_7,        KC_8,       KC_9,    KC_0,           KC_MINS,
    // KC_TAB,                  KC_Q,      KC_W,  LT(2,KC_E), KC_R,      KC_T,   KC_BSPC,                                             KC_BSPC,           KC_Y,    KC_U,        LT(2,KC_I), KC_O,    KC_P,           KC_BSLS,
    // TD(TD_MOUSE_LAYER),      LT(8,KC_A),KC_S,  LT(1,KC_D), KC_F,      KC_G,   KC_ENT,                                              KC_ENT,            KC_H,    KC_J,        KC_K,       KC_L,    LT(8,KC_SCLN),  MT(MOD_RGUI, KC_QUOT),
    // C(A(G(KC_T))),           KC_Z,      KC_X,  LT(5,KC_C), LT(9,KC_V),KC_B,   KC_ESC,                                              KC_ESC,            KC_N,    LT(9,KC_M),  KC_COMM,    KC_DOT,  KC_SLSH,        TD(TD_SWITCH_LANG),
    // KC_LCTL,               KC_LALT,   KC_LEFT,             KC_RIGHT,     KC_LGUI,MT(MOD_LSFT,KC_SPC),TD(TD_LCTL_TAB),TD(TD_RCTL_TAB), MT(MOD_RSFT,KC_SPC),KC_RGUI, KC_NO ,                  KC_NO,   KC_RALT ,       TD(TD_LAYER_9and3)
    /* KC_EQL,             KC_1,      KC_2,  KC_3,        KC_4,      KC_5,   KC_LBRC,                                             KC_RBRC,            KC_6,    KC_7,        KC_8,       KC_9,    KC_0,           KC_MINS, */
    /* KC_TAB,             KC_Q,      KC_W,  LT(2, KC_E), KC_R,      KC_T,   KC_BSPC,                                             KC_BSPC ,           KC_Y,    KC_U,        LT(2,KC_I), KC_O,    KC_P,           KC_BSLS, */
    /* TD(TD_MOUSE_LAYER), LT(8,KC_A),KC_S,  LT(1, KC_D), KC_F,      KC_G,   KC_ENT ,                                             KC_ENT,             KC_H,    KC_J,        KC_K,       KC_L,    LT(8, KC_SCLN), MT(MOD_RGUI, KC_QUOT), */
    /* C(A(G(KC_T))),      KC_Z,      KC_X,  LT(5, KC_C), LT(9,KC_V),KC_B,   KC_NO  ,                                             KC_NO ,             KC_N,    LT(9,KC_M),  KC_COMM,    KC_DOT,  KC_SLSH,        TD(TD_SWITCH_LANG), */
    /* KC_LCTL,            KC_LALT,   KC_NO,              KC_NO,     KC_LGUI,MT(MOD_LSFT,KC_SPC),TD(TD_LCTL_TAB),TD(TD_RCTL_TAB), MT(MOD_RSFT,KC_SPC),KC_RGUI, KC_NO ,                  KC_NO,   KC_RALT ,       KC_NO */
  ),
  [_BRWSR] = LAYOUT(
    KC_TRNS, G(KC_0), G(KC_1), G(KC_2), G(KC_3), KC_TRNS,   _______,                         _______, KC_MS_L,      KC_MS_D, KC_MS_U,      KC_MS_R,   KC_TRNS, _______,
    KC_TRNS, KC_NO,   KC_BTN5, KC_BTN4, G(KC_R), G(KC_T),   KC_TRNS,                         KC_TRNS, KC_LEFT,      KC_DOWN, LT(_WNDW, KC_UP), KC_RGHT,   KC_TRNS, _______,
    KC_TRNS, G(KC_A), G(KC_S), G(KC_W), KC_BTN1, KC_BTN3,   KC_TRNS,                         KC_TRNS, C(S(KC_TAB)), KC_WH_D, KC_WH_U,      C(KC_TAB), G(KC_W), KC_BTN1,
    KC_TRNS, G(KC_Z), KC_TRNS, G(KC_C), G(KC_V), DBL_CLK,   _______,                         _______, G(KC_V),      KC_BTN1, KC_BTN2,      KC_BTN3,   G(KC_F), KC_TRNS,
    KC_TRNS, KC_TRNS, _______,          KC_NO,   KC_TRNS,   S(KC_SPC), KC_BTN1,     KC_BTN2, KC_SPC,  KC_TRNS,      KC_NO,                 _______,   KC_TRNS, S(G(KC_T))
  ),
  [_LEFT] = LAYOUT(
    KC_TRNS,   KC_TRNS, KC_TRNS,          KC_TRNS,      G(KC_R),   KC_TRNS,KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,   KC_TRNS, KC_RGHT,          C(S(KC_TAB)), C(KC_TAB), G(KC_T),KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    TG(_LEFT), G(KC_A), G(KC_S),          G(KC_W),      KC_BTN1,   KC_BTN3,KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,   G(KC_Z), COPY_OPENING_URL, G(KC_C),      G(KC_V),   KC_RGHT,KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    S(G(KC_T)),KC_TRNS, KC_TRNS,                        KC_TRNS,   KC_TRNS,S(KC_SPC),KC_SPC,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [_SBLNUM] = LAYOUT(
    KC_TRNS,       S(G(KC_4)), S(G(KC_5)), C(S(G(KC_4))), KC_TAB,     KC_NO,       KC_TRNS,                       KC_TRNS, S(KC_MINS), KC_F7,   KC_NO,   KC_NO,   KC_SLSH,   KC_NO,
    KC_TRNS,       S(KC_1),    S(KC_2),    S(KC_LBRC),    S(KC_RBRC), S(KC_BSLS),  KC_TRNS,                       KC_TRNS, KC_UP,      KC_7,    KC_8,    KC_9,    S(KC_8),   KC_F12,
    KC_TRNS,       S(KC_3),    S(KC_4),    S(KC_9),       S(KC_0),    KC_GRV,      KC_BTN1,                       KC_BTN1, KC_DOWN,    KC_4,    KC_5,    KC_6,    S(KC_EQL), KC_TRNS,
    C(A(G(KC_X))), S(KC_5),    S(KC_6),    KC_LBRC,       KC_RBRC,    S(KC_GRV),   KC_WH_D,                       KC_WH_D, S(KC_7),    KC_1,    KC_2,    KC_3,    KC_MINS,   KC_TRNS,
    KC_TRNS,       KC_EQL,     KC_TRNS,                   KC_NO  ,    KC_TRNS,     KC_TRNS,KC_TRNS,       KC_TRNS,KC_TRNS, KC_TRNS,    KC_NO,            KC_0,    KC_EQL,    KC_TRNS
  ),
  [_WNDW] = LAYOUT(
    KC_NO, KC_NO, KC_NO,         C(A(G(KC_5))), KC_NO,        KC_NO,KC_NO,                       KC_NO, C(A(G(KC_6))), C(A(G(KC_7))),   C(A(G(KC_8))),    C(A(G(KC_9))), KC_NO,            KC_NO,
    KC_NO, KC_NO, KC_NO,         C(A(G(KC_7))), KC_NO,        KC_NO,KC_NO,                       KC_NO, C(A(G(KC_Y))), C(A(G(KC_U))),   C(A(G(KC_I))),    C(A(G(KC_O))), KC_NO,            KC_NO,
    KC_NO, KC_NO, C(A(G(KC_A))), C(A(G(KC_E))), C(A(G(KC_0))),KC_NO,KC_NO,                       KC_NO, C(A(G(KC_H))), C(A(G(KC_J))),   C(A(G(KC_K))),    C(A(G(KC_L))), C(A(G(KC_SCLN))), KC_NO,
    KC_NO, KC_NO, KC_NO,         C(A(G(KC_8))), KC_NO,        KC_NO,KC_NO,                       KC_NO, C(A(G(KC_N))), C(A(G(KC_DOT))), C(A(G(KC_COMM))), C(A(G(KC_M))), KC_NO,            KC_NO,
    KC_NO, KC_NO, KC_NO,                        KC_NO,        KC_NO,KC_NO,KC_NO,       KC_NO,    KC_NO, KC_NO,         KC_NO,                             KC_NO,         KC_NO,            KC_TRNS
  ),
  [_DLV] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS,       KC_TRNS,       KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,                       KC_TRNS, KC_TRNS, DELVE_DOWN_FRAME,DELVE_UP_FRAME,KC_TRNS,       KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,                       KC_TRNS, KC_TRNS, DELVE_NEXT,      DELVE_STEPIN,  DELVE_STEPOUT, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,                       KC_TRNS, KC_TRNS, DELVE_CONTINUE,  DELVE_EXIT,    KC_TRNS,       KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,       KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS,       KC_TRNS, KC_TRNS
  ),
  [_VIM] = LAYOUT(
    KC_NO, G(KC_0), G(KC_1), G(KC_2),   KC_NO,   KC_NO,  KC_NO,                   KC_NO,  KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO, KC_NO,
    KC_NO, KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,  KC_NO,                   KC_NO,  KC_NO,   KC_NO,   KC_NO, G(KC_O), KC_NO, KC_NO,
    KC_NO, KC_NO,   KC_NO,   G(KC_BSPC),KC_BTN1, KC_NO,  KC_NO,                   KC_NO,  KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,KC_NO, KC_NO,
    KC_NO, KC_TRNS, KC_NO,   A(G(KC_D)),KC_NO,   KC_NO,  KC_ENT,                  KC_ENT, KC_NO,   KC_BTN2, KC_NO, KC_NO,   KC_NO, KC_NO,
    KC_NO, KC_NO,   KC_TRNS,            KC_NO,   KC_TRNS,KC_TRNS,KC_BTN1, KC_BTN2,KC_TRNS,KC_TRNS, KC_NO,          KC_NO,   KC_NO, KC_TRNS
  ),
  [_VIMSCRL] = LAYOUT(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,  KC_NO,                       KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,  KC_NO,                       KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,  KC_NO,                       KC_NO,   KC_NO,   KC_J,  KC_K,  KC_NO,   KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,  KC_NO,                       KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
    KC_NO, KC_H, C(KC_E),       C(KC_E), C(KC_E),C(KC_E),C(KC_E), C(KC_E),    C(KC_E), C(KC_E), C(KC_E),      C(KC_E), KC_L,  KC_TRNS
  ),
  // // layer for
  // [_CURSOR] = LAYOUT(
  //   KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO,   KC_NO,  KC_NO,                       KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
  //   KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO,   KC_NO,  KC_NO,                       KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
  //   KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO,   KC_NO,  KC_NO,                       KC_NO,   KC_NO,   KC_J,  KC_K,  KC_NO,   KC_NO, KC_NO,
  //   KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO,   KC_NO,  KC_NO,                       KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
  //   TD(TD_LCTL_LAYER_CURSOR), KC_NO, KC_LEFT,       KC_RIGHT,KC_NO,  KC_NO, KC_NO,          KC_NO,KC_NO,   KC_NO,   KC_NO,        KC_NO,   KC_NO, KC_NO
  // ),
  /* [_EMPTY] = LAYOUT( */
  /*   _______, _______, _______, _______, _______, _______,_______,                       _______, _______, _______, _______, _______, _______, _______, */
  /*   _______, _______, _______, _______, _______, _______,_______,                       _______, _______, _______, _______, _______, _______, _______, */
  /*   _______, _______, _______, _______, _______, _______,_______,                       _______, _______, _______, _______, _______, _______, _______, */
  /*   _______, _______, _______, _______, _______, _______,_______,                       _______, _______, _______, _______, _______, _______, _______, */
  /*   _______, _______, _______,          _______, _______,_______,_______,       _______,_______, _______, _______,          _______, _______, _______ */
  /* ), */
};
/* const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { */

/*   /1* Qwerty */
/*    * ,----------------------------------------------------------------------------------------------------------------------. */
/*    * | ESC  |   1  |   2  |   3  |   4  |   5  |   [  |                    |   ]  |   6  |   7  |   8  |   9  |   0  |Pscree| */
/*    * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------| */
/*    * |  `   |   Q  |   W  |   E  |   R  |   T  |   -  |                    |   =  |   Y  |   U  |   I  |   O  |   P  |  \   | */
/*    * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------| */
/*    * | Tab  |   A  |   S  |   D  |   F  |   G  |  Del |                    | Bksp |   H  |   J  |   K  |   L  |   ;  |  "   | */
/*    * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------| */
/*    * | Shift|   Z  |   X  |   C  |   V  |   B  | Space|                    | Enter|   N  |   M  |   ,  |   .  |   /  | Shift| */
/*    * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------| */
/*    * | Ctrl |  GUI |  ALt | EISU |||||||| Lower| Space|  Del |||||||| Bksp | Enter| Raise|||||||| Left | Down |  Up  | Right| */
/*    * ,----------------------------------------------------------------------------------------------------------------------. */
/*    *1/ */
/*   [_QWERTY] = LAYOUT( */
/*     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC,                        KC_RBRC, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PSCR, */
/*     KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_MINS,                        KC_EQL , KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, */
/*     KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_DEL ,                        KC_BSPC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, */
/*     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_SPC ,                        KC_ENT , KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, */
/*     KC_LCTL, KC_LGUI, KC_LALT, EISU,             LOWER,   KC_SPC ,KC_DEL,         KC_BSPC,KC_ENT , RAISE,            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT */
/*   ), */

/*   /1* Lower */
/*    * ,----------------------------------------------------------------------------------------------------------------------. */
/*    * |  F11 |  F1  |  F2  |  F3  |  F4  |  F5  |   {  |                    |   }  |  F6  |  F7  |  F8  |  F9  |  F10 |  F12 | */
/*    * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------| */
/*    * |  ~   |   !  |   @  |   #  |   $  |   %  |   _  |                    |   +  |   ^  |   &  |   *  |   (  |   )  |  |   | */
/*    * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------| */
/*    * | Tab  |   1  |   2  |   3  |   4  |   5  |  Del |                    | Bksp |   H  |   J  |   K  |   L  |   :  |  "   | */
/*    * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------| */
/*    * | Shift|   6  |   7  |   8  |   9  |   0  | Space|                    | Enter|   N  |   M  |   <  |   >  |   ?  | Shift| */
/*    * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------| */
/*    * | Ctrl |  GUI |  ALt | EISU |||||||| Lower| Space|  Del |||||||| Bksp | Enter| Raise|||||||| Home |PageDn|PageUp|  End | */
/*    * ,----------------------------------------------------------------------------------------------------------------------. */
/*    *1/ */
/*   [_LOWER] = LAYOUT( */
/*     KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_LCBR,                        KC_RCBR, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12, */
/*     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_UNDS,                        KC_PLUS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, */
/*     KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_DEL ,                        KC_BSPC, KC_H,    KC_J,    KC_K,    KC_L,    KC_COLN, KC_DQT , */
/*     KC_LSFT, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_SPC ,                        KC_ENT , KC_N,    KC_M,    KC_LT,   KC_GT,   KC_QUES, KC_RSFT, */
/*     KC_LCTL, KC_LGUI, KC_LALT, EISU,             LOWER,   KC_SPC ,KC_DEL,         KC_BSPC,KC_ENT , RAISE,            KC_HOME, KC_PGDN, KC_PGUP, KC_END */
/*   ), */

/*   /1* Raise */
/*    * ,----------------------------------------------------------------------------------------------------------------------. */
/*    * |  F11 |  F1  |  F2  |  F3  |  F4  |  F5  |   {  |                    |   }  |  F6  |  F7  |  F8  |  F9  |  F10 |  F12 | */
/*    * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------| */
/*    * |  ~   |   !  |   @  |   #  |   $  |   %  |   _  |                    |   +  |   ^  |   &  |   *  |   (  |   )  |  |   | */
/*    * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------| */
/*    * | Tab  |   1  |   2  |   3  |   4  |   5  |  Del |                    | Bksp |   H  |   J  |   K  |   L  |   :  |  "   | */
/*    * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------| */
/*    * | Shift|   6  |   7  |   8  |   9  |   0  | Space|                    | Enter|   N  |   M  |   <  |   >  |   ?  | Shift| */
/*    * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------| */
/*    * | Ctrl |  GUI |  ALt | EISU |||||||| Lower| Space|  Del |||||||| Bksp | Enter| Raise|||||||| Home |PageDn|PageUp|  End | */
/*    * ,----------------------------------------------------------------------------------------------------------------------. */
/*    *1/ */
/*   [_RAISE] = LAYOUT( */
/*     KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_LCBR,                        KC_RCBR, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12, */
/*     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_UNDS,                        KC_PLUS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, */
/*     KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_DEL ,                        KC_BSPC, KC_H,    KC_J,    KC_K,    KC_L,    KC_COLN, KC_DQT , */
/*     KC_LSFT, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_SPC ,                        KC_ENT , KC_N,    KC_M,    KC_LT,   KC_GT,   KC_QUES, KC_RSFT, */
/*     KC_LCTL, KC_LGUI, KC_LALT, EISU,             LOWER,   KC_SPC ,KC_DEL,         KC_BSPC,KC_ENT , RAISE,            KC_HOME, KC_PGDN, KC_PGUP, KC_END */
/*   ), */

/*   /1* Adjust */
/*    * ,----------------------------------------------------------------------------------------------------------------------. */
/*    * |      |      |      |      |      |      |      |                    |      |      |      |      |      |      |      | */
/*    * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------| */
/*    * |      | Reset|RGB ON|  MODE|  HUE-|  HUE+|      |                    |      |  SAT-|  SAT+|  VAL-|  VAL+|      |      | */
/*    * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------| */
/*    * |      |      | BL ON|  BRTG|  INC|   DEC|      |                    |      |      |      |      |      |      |      | */
/*    * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------| */
/*    * |      |      |      |      |      |      |      |                    |      |      |      |      |      |      |      | */
/*    * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------| */
/*    * |      |      |      |      ||||||||      |      |      ||||||||      |      |      ||||||||      |      |      |      | */
/*    * ,----------------------------------------------------------------------------------------------------------------------. */
/*    *1/ */
/*   [_ADJUST] = LAYOUT( */
/*     _______, _______, _______, _______, _______, _______,_______,                       _______, _______, _______, _______, _______, _______, _______, */
/*     _______, QK_BOOT  , RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI,_______,                       _______, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, _______, _______, */
/*     _______, _______, BL_TOGG, BL_BRTG, BL_INC , BL_DEC ,_______,                       _______, _______, _______, _______, _______, _______, _______, */
/*     _______, _______, _______, _______, _______, _______,_______,                       _______, _______, _______, _______, _______, _______, _______, */
/*     _______, _______, _______, _______,          _______,_______,_______,       _______,_______, _______,          _______, _______, _______, _______ */
/*   ) */
/* }; */

/* #ifdef AUDIO_ENABLE */
/* float tone_qwerty[][2]     = SONG(QWERTY_SOUND); */
/* #endif */

/* void persistent_default_layer_set(uint16_t default_layer) { */
/*   eeconfig_update_default_layer(default_layer); */
/*   default_layer_set(default_layer); */
/* } */

/* bool process_record_user(uint16_t keycode, keyrecord_t *record) { */
/*   switch (keycode) { */
/*     case QWERTY: */
/*       if (record->event.pressed) { */
/*          print("mode just switched to qwerty and this is a huge string\n"); */
/*         set_single_persistent_default_layer(_QWERTY); */
/*       } */
/*       return false; */
/*       break; */
/*     case LOWER: */
/*       if (record->event.pressed) { */
/*         layer_on(_LOWER); */
/*         update_tri_layer(_LOWER, _RAISE, _ADJUST); */
/*       } else { */
/*         layer_off(_LOWER); */
/*         update_tri_layer(_LOWER, _RAISE, _ADJUST); */
/*       } */
/*       return false; */
/*       break; */
/*     case RAISE: */
/*       if (record->event.pressed) { */
/*         layer_on(_RAISE); */
/*         update_tri_layer(_LOWER, _RAISE, _ADJUST); */
/*       } else { */
/*         layer_off(_RAISE); */
/*         update_tri_layer(_LOWER, _RAISE, _ADJUST); */
/*       } */
/*       return false; */
/*       break; */
/*     case ADJUST: */
/*       if (record->event.pressed) { */
/*         layer_on(_ADJUST); */
/*       } else { */
/*         layer_off(_ADJUST); */
/*       } */
/*       return false; */
/*       break; */
/*   } */
/*   return true; */
/* } */
