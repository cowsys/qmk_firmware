#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

// Tap Dance declarations
enum {
    // for tab
    TD_LCTL_TAB,
    TD_RCTL_TAB,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_LCTL_TAB] = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, KC_TAB),
    [TD_RCTL_TAB] = ACTION_TAP_DANCE_DOUBLE(KC_RCTL, KC_TAB),
};

// combos definitions
const uint16_t PROGMEM esc_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM alfred_combo[] = {KC_F, KC_J, COMBO_END};
/* const uint16_t PROGMEM layer1_combo[] = {KC_D, KC_K, COMBO_END}; */
const uint16_t PROGMEM lang_ja_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM lang_en_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM lang_combo[] = {KC_D, KC_K, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(alfred_combo,  LGUI(KC_J)),
    /* COMBO(layer1_combo,  TG(1)), */ // layer切り替え後、そのlayerのKCになってしまうためtoggleできない
    COMBO(lang_ja_combo, LCTL(LSFT(KC_J))),
    COMBO(lang_en_combo, LCTL(LSFT(KC_SCLN))),
    COMBO(lang_combo,    LGUI(KC_SPC))
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
            KC_ESC  , LCTL(LSFT(LGUI(KC_4))) , KC_F2   , KC_GRV , KC_MINS         , KC_EQL            , KC_F6   ,KC_F7    , KC_LBRC , KC_RBRC  , KC_BSLS , KC_F11  , KC_F12   , KC_DEL     , KC_PSCR    , // 15 keys
            KC_GRV  , KC_1                   , KC_2    , KC_3   , KC_4            , KC_5          /*  , */      , KC_6    , KC_7     , KC_8    , KC_9    , KC_0    , KC_MINS  , KC_EQL     , KC_BSPC    , // 14 keys
            KC_TAB  , KC_Q                   , KC_W    , KC_E   , KC_R            , KC_T           /* , */      , KC_Y    , KC_U     , KC_I    , KC_O    , KC_P    , KC_LBRC  , KC_RBRC    , KC_BSLS    , TG(4)      , // 15 keys
            KC_CAPS , KC_A                   , KC_S    , KC_D   , KC_F            , KC_G              , KC_BSPC , KC_H    , KC_J     , KC_K    , KC_L    , KC_SCLN , KC_QUOT  , KC_ENT     , TG(3)      , // 15 keys
            KC_LSFT , KC_Z                   , KC_X    , KC_C   , KC_V            , KC_B              , KC_ENT  , KC_N    , KC_M     , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT  , KC_UP      , // 14 keys
            KC_LCTL , KC_LALT                , KC_LGUI , MT(MOD_LSFT, KC_SPC) , TD(TD_LCTL_TAB) , TD(TD_RCTL_TAB)   , MT(MOD_RSFT    , KC_SPC)  , KC_RGUI , TG(1) , TG(2)   , KC_LEFT , KC_DOWN , KC_RGHT) , // 13 keys
	[1] = LAYOUT(
            KC_ESC  , KC_TRNS , KC_TRNS , KC_TRNS    , KC_TRNS    , KC_TRNS , KC_TRNS , KC_TRNS            , KC_TRNS , KC_CALC , KC_MYCM         , KC_TRNS , KC_TRNS  , NK_TOGG , QK_BOOT ,
            KC_TRNS , KC_TRNS , RGB_VAI , KC_TRNS    , KC_TRNS    , KC_TRNS , /*      , */ KC_MS_L         , KC_MS_D , KC_MS_U , KC_MS_R         , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS ,
            RGB_TOG , RGB_MOD , RGB_VAD , KC_TRNS    , LGUI(KC_R) , KC_TRNS , /*      , */ KC_TRNS         , KC_DOWN , KC_UP   , KC_TRNS         , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS ,
            KC_TRNS , KC_TRNS , LGUI(KC_S) , LGUI(KC_W) , KC_TRNS    , KC_TRNS , KC_TRNS , LCTL(LSFT(KC_TAB)) , KC_WH_D , KC_WH_U , LCTL(KC_TAB) , LGUI(KC_W)  , KC_TRNS  , KC_TRNS , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS    , KC_TRNS    , KC_TRNS , KC_TRNS , KC_TRNS            , KC_BTN1 , KC_BTN2 , KC_BTN3         , KC_BTN4 , KC_TRNS  , KC_UP ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS    , KC_TRNS    , KC_TRNS , KC_TRNS , KC_TRNS            , KC_TRNS , KC_TRNS , KC_LEFT , KC_DOWN , KC_RGHT) ,
	[2] = LAYOUT(
            KC_NO   , KC_NO                  , KC_NO                  , KC_NO            , KC_NO            , KC_NO      , KC_NO , KC_NO               , KC_NO                     , KC_NO                      , KC_NO                , KC_NO , KC_NO  , KC_NO , KC_NO ,
            KC_NO   , KC_NO                  , KC_NO                  , KC_NO            , KC_NO            , KC_NO  /*  , */    , KC_NO               , LCTL(LALT(KC_RIGHT))      , LCTL(LALT(KC_LEFT))        , KC_NO                , KC_NO , KC_NO  , KC_NO , KC_NO ,
            KC_NO   , KC_NO                  , KC_NO                  , KC_NO            , KC_NO            , KC_NO   /* , */    , KC_NO               , LCTL(LALT(LSFT(KC_LEFT))) , LCTL(LALT(LSFT(KC_UP)))    , KC_NO                , KC_NO , KC_NO  , KC_NO , KC_NO , KC_NO ,
            KC_NO   , LCTL(LALT(KC_D))       , LCTL(LALT(KC_T))       , LALT(LCMD(KC_D)) , LALT(LCMD(KC_G)) , KC_NO      , KC_NO , LALT(LGUI(KC_LEFT)) , LALT(LGUI(KC_DOWN))       , LALT(LGUI(KC_UP))          , LALT(LGUI(KC_RIGHT)) , KC_NO , KC_NO  , KC_NO , KC_NO ,
            KC_LSFT , LCTL(LALT(LGUI(KC_D))) , LCTL(LALT(LGUI(KC_T))) , KC_NO            , KC_NO            , KC_NO      , KC_NO , KC_NO               , LCTL(LALT(LSFT(KC_DOWN))) , LCTL(LALT(LSFT(KC_RIGHT))) , KC_NO                , KC_NO , KC_NO  , KC_NO ,
            KC_NO   , KC_NO                  , KC_NO                  , KC_NO            , KC_NO            , KC_NO      , KC_NO , KC_NO               , KC_NO                     , KC_TRNS                    , KC_NO                , KC_NO , KC_NO) ,
	[3] = LAYOUT(
            KC_NO , KC_NO , KC_NO , KC_NO         , KC_NO , KC_NO      , KC_NO  , KC_NO   , KC_NO   , KC_NO , KC_NO    , KC_NO , KC_NO  , KC_NO , KC_NO   ,
            KC_NO , KC_NO , KC_NO , KC_NO         , KC_NO , KC_NO  /*  , */     , KC_NO   , KC_NO   , KC_NO , KC_NO    , KC_NO , KC_NO  , KC_NO , KC_NO   ,
            KC_NO , KC_NO , KC_NO , KC_NO         , KC_NO , KC_NO   /* , */     , KC_NO   , KC_NO   , KC_NO , KC_NO    , KC_NO , KC_NO  , KC_NO , KC_NO   , KC_NO          ,
            KC_NO , KC_NO , KC_NO , LGUI(KC_BSPC) , KC_NO , KC_NO      , KC_NO  , KC_LEFT , KC_DOWN , KC_UP , KC_RIGHT , KC_NO , KC_NO  , KC_NO , KC_TRNS , // target rows
            KC_NO , KC_NO , KC_NO , KC_NO         , KC_NO , KC_NO      , KC_ENT , KC_NO   , KC_NO   , KC_NO , KC_NO    , KC_NO , KC_NO  , KC_NO ,
            KC_NO , KC_NO , KC_NO , KC_SPC        , KC_NO , KC_NO      , KC_SPC , KC_NO   , KC_NO   , KC_NO , KC_NO    , KC_NO , KC_NO) ,
	[4] = LAYOUT(
            KC_NO , KC_NO      , KC_NO      , KC_NO      , KC_NO , KC_NO , KC_NO  , KC_NO    , KC_NO               , KC_NO                , KC_NO    , KC_NO , KC_NO  , KC_NO , KC_NO ,
            KC_NO , LGUI(KC_1) , LGUI(KC_0) , LGUI(KC_2) , KC_NO , KC_NO , /*     , */ KC_NO , KC_NO               , KC_NO                , KC_NO    , KC_NO , KC_NO  , KC_NO , KC_NO ,
            KC_NO , KC_NO      , KC_NO      , KC_E       , KC_NO , KC_NO , /*     , */ KC_NO , RGUI(RSFT(KC_LEFT)) , RGUI(RSFT(KC_RIGHT)) , KC_NO    , KC_NO , KC_NO  , KC_NO , KC_NO , KC_TRNS , // target rows
            KC_NO , KC_NO      , KC_NO      , KC_NO      , KC_NO , KC_NO , KC_NO  , KC_LEFT  , RGUI(LCTL(KC_LEFT)) , RGUI(LCTL(KC_RIGHT)) , KC_RIGHT , KC_NO , KC_NO  , KC_NO , KC_NO ,
            KC_NO , KC_NO      , KC_NO      , KC_NO      , KC_NO , KC_NO , KC_ENT , KC_NO    , KC_DOWN             , KC_UP                , KC_NO    , KC_NO , KC_NO  , KC_NO ,
            KC_NO , KC_NO      , KC_NO      , KC_SPC     , KC_NO , KC_NO , KC_SPC , KC_NO    , KC_NO               , KC_NO                , KC_NO    , KC_NO , KC_NO)
};
