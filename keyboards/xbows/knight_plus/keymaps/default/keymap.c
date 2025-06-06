/* Copyright 2021 Shulin Huang <mumu@x-bows.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// declarations for macros
enum custom_keycodes {
    DELVE_NEXT = SAFE_RANGE,
    DELVE_STEPIN,
    DELVE_STEPOUT,
    DELVE_CONTINUE,
    DELVE_EXIT,
    DELVE_RESTART_DEBUG,
    DELVE_RESTART_TEST,
    DELVE_UP_FRAME,
    DELVE_DOWN_FRAME,
    DOUBLE_CLICK,
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
        case DOUBLE_CLICK:
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

// Tap Dance declarations
enum {
    // for tab
    TD_LCTL_TAB,
    TD_RCTL_TAB,
    TD_MPLY_MNXT,
    TD_MAC_F8,
    TD_SWITCH_LANG,
    TD_MOUSE_LAYER,
    TD_LAYER_9and3,
};

void dance_mouse_layer(tap_dance_state_t *state, void *user_data) {
    // https://github.com/qmk/qmk_firmware/blob/master/docs/feature_layers.md
    if (state->count == 1) {
        layer_invert(1);
    } else {
        layer_invert(4);
    }
}

void dance_layers_9and3(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        layer_invert(9);
    } else {
        layer_invert(3);
    }
}

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    [TD_LCTL_TAB]    = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, KC_TAB),
    [TD_RCTL_TAB]    = ACTION_TAP_DANCE_DOUBLE(KC_RCTL, KC_TAB),
    [TD_MPLY_MNXT]   = ACTION_TAP_DANCE_DOUBLE(KC_MPLY, KC_MNXT),
    [TD_MAC_F8]      = ACTION_TAP_DANCE_DOUBLE(KC_F8, KC_MPLY),
    [TD_SWITCH_LANG] = ACTION_TAP_DANCE_DOUBLE(G(KC_8), G(KC_7)),
    [TD_MOUSE_LAYER] = ACTION_TAP_DANCE_FN(dance_mouse_layer),
    [TD_LAYER_9and3] = ACTION_TAP_DANCE_FN(dance_layers_9and3),
};

// combos definitions
const uint16_t PROGMEM esc_combo[]    = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM alfred_combo[] = {KC_F, KC_J, COMBO_END};
/* const uint16_t PROGMEM click_combo[]      = {KC_G, KC_H, COMBO_END}; */
/* const uint16_t PROGMEM lang_combo[]       = {KC_D, KC_K, COMBO_END}; */
const uint16_t PROGMEM centralize_combo[] = {KC_LGUI, KC_RGUI, COMBO_END};

combo_t key_combos[] = {
    COMBO(esc_combo, FORCE_ESC),
    COMBO(alfred_combo, LGUI(KC_J)),
    /* COMBO(click_combo, KC_BTN1), */
    /* COMBO(lang_combo, LGUI(KC_SPC)), */
    COMBO(centralize_combo, LCTL(LALT(LCMD(KC_C)))),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // default layer
    [0] = LAYOUT(
        /* S(G(KC_4)) , S(G(KC_5)) , KC_F2   , KC_GRV      , KC_MINS , KC_EQL          , G(S(KC_TAB))    , G(KC_TAB)   , KC_LBRC , KC_RBRC , KC_BSLS , KC_F11 , G(S(KC_RBRC)) , TG(6)     , KC_PSCR       , // 15 */
        KC_ESC             , KC_F1      , KC_F2   , KC_F3       , TG(4)   , KC_F5           , KC_F6           , KC_F7       , TD(TD_MAC_F8)   , KC_F9   , KC_F10  , KC_F11 , KC_F12        , KC_NO     , KC_NO         , // 15
        KC_EQL             , KC_1       , KC_2    , KC_3        , KC_4    , KC_5 /*         , */              , KC_6        , KC_7    , KC_8    , KC_9    , KC_0   , KC_MINS       , KC_NO     , KC_NO         , // 14
        KC_TAB             , KC_Q       , KC_W    , LT(2, KC_E) , KC_R    , KC_T /*         , */          , KC_Y    , KC_U    , LT(2,KC_I)    , KC_O   , KC_P          , KC_BSLS   , C(A(G(KC_A))) , C(A(G(KC_E))) , C(A(G(KC_0))) , // 15
        TD(TD_MOUSE_LAYER) , LT(8,KC_A) , KC_S    , LT(1, KC_D) , KC_F    , KC_G        , KC_BSPC , KC_H    , KC_J    , KC_K   , KC_L          , LT(8      , KC_SCLN)      , MT(MOD_RGUI   , KC_QUOT)      , C(A(G(KC_X))) , TG(3) , // 15
        C(A(G(KC_T)))      , KC_Z       , KC_X    , LT(5, KC_C) , LT(9,KC_V) , KC_B            , KC_ENT      , KC_N    , LT(9,KC_M)    , KC_COMM , KC_DOT , KC_SLSH       , TD(TD_SWITCH_LANG) , KC_UP         , // 14
        KC_LCTL            , KC_LALT    , KC_LGUI , MT(MOD_LSFT , KC_SPC)     , TD(TD_LCTL_TAB) , TD(TD_RCTL_TAB) , MT(MOD_RSFT , KC_SPC) , KC_RGUI , KC_RALT , TD(TD_LAYER_9and3)  , KC_LEFT       , KC_DOWN   , KC_RGHT)      , // 13
    // layer for browser
    [1] = LAYOUT(
        KC_TRNS , KC_TRNS     , KC_TRNS , KC_TRNS   , G(KC_MINS) , G(KC_EQL)    , KC_TRNS , C(A(G(KC_1))) , C(A(G(KC_4))) , C(A(G(KC_6))) , KC_MYCM   , KC_TRNS , G(KC_BSPC)        , NK_TOGG         , QK_BOOT , // 15
        KC_TRNS , G(KC_0)     , G(KC_1) , G(KC_2)   , G(KC_3)    , KC_TRNS      , /*      , */ KC_MS_L    , KC_MS_D       , KC_MS_U       , KC_MS_R   , KC_TRNS , KC_KB_VOLUME_DOWN , KC_KB_VOLUME_UP , KC_NO   , // 14
        KC_TRNS , SAVE_IMAGE2 , KC_BTN5 , KC_BTN4   , G(KC_R)    , G(KC_T)      , /*      , */ KC_LEFT    , KC_DOWN       , LT(2, KC_UP)  , KC_RGHT   , KC_TRNS , KC_TRNS           , KC_TRNS , KC_TRNS , KC_TRNS , // 15
        KC_TRNS , G(KC_A)     , G(KC_S) , G(KC_W)   , KC_BTN1    , KC_BTN3      , KC_TRNS , C(S(KC_TAB))  , KC_WH_D       , KC_WH_U       , C(KC_TAB) , G(KC_W) , KC_BTN1           , KC_TRNS         , KC_NO   , // 15
        KC_TRNS , G(KC_Z)     , KC_TRNS , G(KC_C)   , G(KC_V)    , DOUBLE_CLICK , KC_TRNS , G(KC_V)       , KC_BTN1       , KC_BTN2       , KC_BTN3   , G(KC_F) , KC_TRNS           , KC_UP           , // 14
        KC_TRNS , KC_TRNS     , KC_TRNS , S(KC_SPC) , KC_BTN1    , KC_BTN2      , KC_SPC  , KC_TRNS       , KC_TRNS       , S(G(KC_T))    , KC_LEFT   , KC_DOWN , KC_RGHT)          , // 13
    // layer for window manipuration
    [2] = LAYOUT(
        KC_NO , KC_NO , KC_NO         , KC_NO         , KC_NO         , KC_NO , KC_NO , KC_NO            , KC_NO           , KC_NO            , KC_NO         , KC_NO            , KC_NO  , KC_NO , KC_NO , // 15
        KC_NO , KC_NO , KC_NO         , C(A(G(KC_5))) , KC_NO         , KC_NO , /*    , */ C(A(G(KC_6))) , C(A(G(KC_7)))   , C(A(G(KC_8)))    , C(A(G(KC_9))) , KC_NO            , KC_NO  , KC_NO , KC_NO , // 14
        KC_NO , KC_NO , KC_NO         , C(A(G(KC_7))) , KC_NO         , KC_NO , /*    , */ C(A(G(KC_Y))) , C(A(G(KC_U)))   , C(A(G(KC_I)))    , C(A(G(KC_O))) , KC_NO            , KC_NO  , KC_NO , KC_NO , KC_NO , // 15
        KC_NO , KC_NO , C(A(G(KC_A))) , C(A(G(KC_E))) , C(A(G(KC_0))) , KC_NO , KC_NO , C(A(G(KC_H)))    , C(A(G(KC_J)))   , C(A(G(KC_K)))    , C(A(G(KC_L))) , C(A(G(KC_SCLN))) , KC_NO  , KC_NO , KC_NO , // 15
        KC_NO , KC_NO , KC_NO         , C(A(G(KC_8))) , KC_NO         , KC_NO , KC_NO , C(A(G(KC_N)))    , C(A(G(KC_DOT))) , C(A(G(KC_COMM))) , C(A(G(KC_M))) , KC_NO            , KC_NO  , KC_NO , // 14
        KC_NO , KC_NO , KC_NO         , KC_NO         , KC_NO         , KC_NO , KC_NO , KC_NO            , KC_NO           , KC_TRNS          , KC_NO         , KC_NO            , KC_NO) , // 13
    // layer for vim-like movement
    [3] = LAYOUT(
        KC_ESC , KC_NO   , KC_NO   , KC_NO      , KC_NO   , KC_NO    , KC_NO   , KC_TRNS , KC_NO   , KC_NO , KC_NO    , KC_NO , KC_NO  , KC_NO , KC_NO   , // 15
        KC_NO  , G(KC_0) , G(KC_1) , G(KC_2)    , KC_NO   , KC_NO /* , */      , KC_NO   , KC_NO   , KC_NO , KC_NO    , KC_NO , KC_NO  , KC_NO , KC_NO   , // 14
        KC_NO  , KC_NO   , KC_NO   , KC_NO      , KC_NO   , KC_NO /* , */      , KC_NO   , KC_NO   , KC_NO , G(KC_O)  , KC_NO , KC_NO  , KC_NO , KC_NO   , KC_NO , // 15
        KC_NO  , KC_NO   , KC_NO   , G(KC_BSPC) , KC_BTN1 , KC_NO    , KC_NO   , KC_LEFT , KC_DOWN , KC_UP , KC_RIGHT , KC_NO , KC_NO  , KC_NO , KC_TRNS , // 15
        KC_NO  , KC_TRNS , KC_NO   , A(G(KC_D)) , KC_NO   , KC_NO    , KC_ENT  , KC_NO   , KC_BTN2 , KC_NO , KC_NO    , KC_NO , KC_NO  , KC_NO , // 14
        KC_NO  , KC_NO   , KC_TRNS , KC_TRNS    , KC_BTN1 , KC_BTN2  , KC_TRNS , KC_TRNS , KC_NO   , KC_TRNS , KC_NO    , KC_NO , KC_NO) , // 13
    // layer for left-handed browser
    [4] = LAYOUT(
        KC_TRNS    , KC_TRNS , KC_TRNS          , KC_TRNS      , KC_TRNS   , KC_TRNS , KC_TRNS , KC_TRNS    , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , // 15
        KC_TRNS    , KC_TRNS , KC_TRNS          , KC_TRNS      , G(KC_R)   , KC_TRNS , /*      , */ KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , // 14
        KC_TRNS    , KC_TRNS , KC_RGHT          , C(S(KC_TAB)) , C(KC_TAB) , G(KC_T) , /*      , */ KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS , // 15
        TG(4)      , G(KC_A) , G(KC_S)          , G(KC_W)      , KC_BTN1   , KC_BTN3 , KC_TRNS , KC_TRNS    , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , // 15
        KC_TRNS    , G(KC_Z) , COPY_OPENING_URL , G(KC_C)      , G(KC_V)   , KC_RGHT , KC_TRNS , KC_TRNS    , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS , // 14
        S(G(KC_T)) , KC_TRNS , KC_TRNS          , S(KC_SPC)    , LT(6, KC_SPC)    , KC_TRNS , KC_TRNS , KC_TRNS    , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS) , // 13
    // layer for delve/debugger 2
    [5] = LAYOUT(
        KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS    , KC_TRNS          , KC_TRNS        , KC_TRNS       , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , // 15
        KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , /*      , */ KC_TRNS , KC_TRNS          , KC_TRNS        , KC_TRNS       , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , // 14
        KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , /*      , */ KC_TRNS , DELVE_DOWN_FRAME , DELVE_UP_FRAME , KC_TRNS       , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS , // 15
        KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS    , DELVE_NEXT       , DELVE_STEPIN   , DELVE_STEPOUT , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , // 15
        KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS    , DELVE_CONTINUE   , DELVE_EXIT     , KC_TRNS       , KC_TRNS , KC_TRNS  , KC_TRNS , // 14
        KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS    , KC_TRNS          , KC_TRNS        , KC_TRNS       , KC_TRNS , KC_TRNS) , // 13
    // layer for left-handed vim-like movement
    [6] = LAYOUT(
        KC_NO , KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO , KC_NO    , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO  , KC_NO , KC_NO , // 15
        KC_NO , KC_NO , KC_MS_L , KC_MS_U , KC_MS_D , KC_MS_R , /*    , */ KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO  , KC_NO , KC_NO , // 14
        KC_NO , KC_NO , KC_WH_L , KC_WH_U , KC_WH_D , KC_WH_R , /*    , */ KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO  , KC_NO , KC_NO , KC_NO , // 15
        KC_NO , KC_NO , KC_LEFT , KC_UP   , KC_DOWN , KC_RGHT , KC_NO , KC_NO    , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO  , KC_NO , KC_NO , // 15
        KC_NO , KC_NO , KC_NO   , KC_WH_U , KC_WH_D , KC_NO   , KC_NO , KC_NO    , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO  , KC_NO , // 14
        KC_NO , KC_NO , KC_NO   , KC_NO   , KC_TRNS , KC_NO   , KC_NO , KC_NO    , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO) , // 13
    // layer for only hjkl vim-like movement
    [7] = LAYOUT(
        KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO    , KC_NO   , KC_NO , KC_NO    , KC_NO , KC_NO  , KC_NO   , KC_NO , // 15
        KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , /*    , */ KC_NO , KC_NO   , KC_NO , KC_NO    , KC_NO , KC_NO  , KC_NO   , KC_NO , // 14
        KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , /*    , */ KC_NO , KC_NO   , KC_NO , KC_NO    , KC_NO , KC_NO  , KC_NO   , KC_NO , KC_NO , // 15
        KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_LEFT  , KC_DOWN , KC_UP , KC_RIGHT , KC_NO , KC_NO  , KC_TRNS , KC_NO , // 15
        KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO    , KC_NO   , KC_NO , KC_NO    , KC_NO , KC_NO  , KC_NO   , // 14
        KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO    , KC_NO   , KC_NO , KC_NO    , KC_NO , KC_NO) , // 13
    // layer for ErgoDox EZ like function/number/symbols key bindings
    [8] = LAYOUT(
        KC_TRNS       , KC_TRNS    , KC_TRNS    , KC_TRNS       , KC_TRNS    , KC_TRNS    , KC_TRNS , KC_TRNS       , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS   , KC_TRNS  , KC_TRNS , KC_TRNS , // 15
        KC_TRNS       , S(G(KC_4)) , S(G(KC_5)) , C(S(G(KC_4))) , KC_TAB     , KC_NO      , /*      , */ S(KC_MINS) , KC_F7   , KC_NO   , KC_NO   , KC_SLSH   , KC_NO    , KC_TRNS , KC_TRNS , // 14
        KC_TRNS       , S(KC_1)    , S(KC_2)    , S(KC_LBRC)    , S(KC_RBRC) , S(KC_BSLS) , /*      , */ KC_UP      , KC_7    , KC_8    , KC_9    , S(KC_8)   , KC_F12   , KC_TRNS , KC_TRNS , KC_TRNS , // 15
        KC_TRNS       , S(KC_3)    , S(KC_4)    , S(KC_9)       , S(KC_0)    , KC_GRV     , KC_BTN1 , KC_DOWN       , KC_4    , KC_5    , KC_6    , S(KC_EQL) , KC_TRNS  , KC_TRNS , KC_TRNS , // 15
        C(A(G(KC_X))) , S(KC_5)    , S(KC_6)    , KC_LBRC       , KC_RBRC    , S(KC_GRV)  , KC_WH_D , S(KC_7)       , KC_1    , KC_2    , KC_3    , KC_MINS   , KC_TRNS  , KC_TRNS , // 14
        KC_TRNS       , KC_EQL     , KC_TRNS    , KC_TRNS       , KC_TRNS    , KC_TRNS    , KC_TRNS , KC_0          , KC_EQL  , KC_TRNS , KC_TRNS , KC_TRNS   , KC_TRNS) , // 13
    // layer for Function keys and vim movement without scrolling cursor
    [9] = LAYOUT(
        KC_NO  , KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO    , KC_NO , KC_NO         , KC_NO , KC_NO  , KC_NO        , KC_NO , KC_NO , // 15
        KC_ESC , KC_F1 , KC_F2   , KC_F3   , KC_F4   , KC_F5   , /*      , */ KC_F6 , KC_F7 , TD(TD_MAC_F8) , KC_F9 , KC_F10 , KC_F11       , KC_NO , KC_NO , // 14
        KC_NO  , KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , /*      , */ KC_NO , KC_NO , KC_NO         , KC_NO , KC_NO  , KC_NO        , KC_NO , KC_NO , KC_NO , // 15
        KC_NO  , KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO    , KC_J  , KC_K          , KC_NO , KC_NO  , KC_NO        , KC_NO , KC_NO , // 15
        KC_NO  , KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO    , KC_NO , KC_NO         , KC_NO , KC_NO  , KC_NO        , KC_NO , // 14
        KC_NO  , KC_H  , C(KC_E) , C(KC_E) , C(KC_E) , C(KC_E) , C(KC_E) , C(KC_E)  , KC_L  , KC_TRNS       , KC_NO , KC_NO  , KC_NO) // 13
};
