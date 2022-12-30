#include QMK_KEYBOARD_H

enum sofle_layers {
    _BASE,
    _NAV,
    _NUM,
    _FUN,
    _MOUSE,
    _SYM,
    _MEDIA,
    _BUTTON,
};

enum custom_keycodes {
    KC_BASE = SAFE_RANGE,
    KC_W1,
    KC_W2,
    KC_W3,
    KC_W4,
    KC_W5,
    KC_W6,
    KC_W7,
    KC_W8,
    KC_W9,
    KC_W0,
    KC_PRVWD,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * COLEMAK-DH
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   F  |   P  |   G  |                    |   J  |   L  |   U  |   Y  |   ;  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   A  |   R  |   S  |   T  |   D  |-------.    ,-------|   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   K  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */


/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  Mute |    | Pause |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCTL | LOPT | LCMD |LOWER | /Enter  /       \Space \  |RAISE | RCMD | ROPT | RCTL |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */


/*
[_EMPTY] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                              _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                              _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                              _______, _______, _______, _______,_______, _______,
  _______, _______, _______, _______, _______, _______, _______,         _______,_______, _______, _______, _______, _______, _______,
                       _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
),
*/
[_BASE] = LAYOUT(
KC_NO, KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,
KC_NO, KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              KC_NO,
KC_NO, LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),   KC_NO,
KC_NO, LT(_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,  KC_MUTE,        XXXXXXX,    KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(_BUTTON,KC_SLSH),KC_NO,
KC_NO, KC_NO,             LT(_MEDIA,KC_ESC),LT(_NAV,KC_SPC),  LT(_MOUSE,KC_TAB),        LT(_SYM,KC_ENT),  LT(_NUM,KC_BSPC), LT(_FUN,KC_DEL),  KC_NO,           KC_NO
),
// [_BASE] = LAYOUT(
//   KC_NO,   KC_W1,  KC_W2,   KC_W3,   KC_W4,  KC_W5,                                   KC_W6,    KC_W7,    KC_W8,    KC_W9,    KC_W0,  RGB_TOG,
//   KC_NO,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                                   KC_J,    KC_L,    KC_U,    KC_Y, KC_QUOT,  RGB_HUI,rstd
//   KC_NO, LGUI_T(KC_A),LALT_T(KC_R),LCTL_T(KC_S),LSFT_T(KC_T),KC_G,           KC_M,LSFT_T(KC_N),LCTL_T(KC_E),LALT_T(KC_I),LGUI_T(KC_O),  RGB_SAI,
//   KC_NO,  KC_Z,   ALGR_T(KC_X),    KC_C,    KC_D,    KC_V, KC_MUTE,               XXXXXXX,KC_K,    KC_H, KC_COMM,  ALGR_T(KC_DOT), KC_SLSH,  RGB_VAI,
//         KC_LGUI,LGUI(KC_J),KC_ESC, LT(_NAV, KC_SPC),LT(_MOUSE, KC_TAB),      LT(_SYM,KC_ENT),LT(_NUM, KC_BSPC), LT(_FUN,  KC_DEL ), LGUI(KC_COMM), KC_RGUI
// ),
[_NUM] = LAYOUT(
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO,   KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO,
  KC_NO,    KC_SCLN, KC_4, KC_5, KC_6, KC_EQL, XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,
  KC_NO, KC_GRV, KC_1, KC_2, KC_3, KC_BSLS, _______, _______, KC_CIRC, KC_AMPR, _______, _______, KC_RPRN, KC_NO,
                       _______, _______, KC_DOT, KC_0, KC_MINS, _______, _______, _______, _______, _______
),
[_NAV] = LAYOUT(
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO,  KC_INS, KC_PSCR, KC_APP, XXXXXXX, XXXXXXX, KC_PGUP, KC_PASTE, KC_COPY, KC_CUT, KC_UNDO, KC_NO,
  KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, CAPSWRD, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO,
  KC_NO,KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, XXXXXXX, _______, _______, KC_INS, KC_HOME, KC_PGUP, KC_PGDN, KC_LEND, KC_NO,
                         _______, _______, _______, _______, _______, KC_ENT, KC_BSPC, KC_DEL, _______, _______
),
[_FUN] = LAYOUT(
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
 KC_NO,   KC_F12, KC_F7, KC_F8, KC_F9, KC_RBRC, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO,
KC_NO,    KC_F11, KC_F4, KC_F5, KC_F6, KC_EQL, XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,
KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_BSLS, _______, _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
                        _______, _______, KC_APP, KC_SPC, KC_TAB, _______, _______, _______, _______, _______
),
[_MOUSE] = LAYOUT(
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  _______, _______, _______, _______, _______, _______, KC_PGUP, KC_PASTE, KC_COPY, KC_CUT, KC_UNDO, KC_NO,
  _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO,
                       _______, _______, _______, _______, _______, KC_BTN1, KC_BTN3, KC_BTN2, _______, _______
),
// [_NUM] = LAYOUT(
//   _______,  KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR,                         KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______,
//   _______,   KC_LBRC,   KC_7,   KC_8,   KC_9,   KC_RBRC,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
//   KC_GRV,    KC_SCLN,    KC_4,    KC_5,    KC_6,    KC_EQL,                     XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT,KC_LGUI, XXXXXXX,
//   _______, KC_GRV,   KC_1,    KC_2,    KC_3, KC_BSLS, _______,         _______,KC_CIRC, KC_AMPR, _______, _______, KC_RPRN, KC_PIPE,
//                        _______, _______, KC_LPRN, KC_0, KC_MINS,       _______, _______, _______, _______, _______
// ),
// [_NAV] = LAYOUT(
//   _______, _______ , _______ , _______ , _______ , _______,                           _______,  _______  , _______,  _______ ,  _______ ,_______,
//   _______,  KC_INS,  KC_PSCR,   KC_APP,  XXXXXXX, XXXXXXX,                        KC_PGUP, KC_PRVWD,   KC_NXTWD,KC_DLINE, KC_BSPC, _______,
//   _______, KC_LGUI, KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX,                       CAPSWRD,  KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_BSPC,
//   _______,KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, XXXXXXX,  _______,       _______,  XXXXXXX, KC_HOME,  KC_PGUP, KC_PGDN ,KC_LEND,   _______,
//                          _______, _______, _______, _______, _______,       KC_ENT, KC_BSPC, KC_DEL, _______, _______
// ),
// [_FUN] = LAYOUT(
//   _______,  KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR,                         KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______,
//   _______,   KC_F12,   KC_F7,   KC_F8,   KC_F9,   KC_RBRC,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
//   KC_GRV,    KC_F11,    KC_F4,    KC_F5,    KC_F6,    KC_EQL,                     XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT,KC_LGUI, XXXXXXX,
//   _______, KC_F10,   KC_F1,    KC_F2,    KC_F3, KC_BSLS, _______,         _______,KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
//                         _______, _______, KC_APP, KC_SPC, KC_TAB,       _______, _______, _______, _______, _______
// ),
// [_MOUSE] = LAYOUT(
//   _______, _______, _______, _______, _______, _______,                              _______, _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______, _______,                              _______, _______, _______, _______, _______, _______,
//   _______, KC_LGUI, KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX,                           XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BSPC,
//   _______, _______, _______, _______, _______, _______, _______,         _______,_______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
//                        _______, _______, _______, _______, _______,    KC_BTN1, KC_BTN3, KC_BTN2, _______, _______
// ),
[_SYM] = LAYOUT(
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
KC_NO, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_UNDS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
// [_SYM] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRV, KC_TILD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_LBRC, KC_LPRN, KC_QUOT, KC_SLSH, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_RCBR, KC_RBRC, KC_RPRN, KC_DQUO, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LT, KC_GT, KC_UNDS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
[_BUTTON] = LAYOUT(
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
 KC_NO,KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
 KC_NO,KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
 KC_NO,KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_UNDS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

[_MEDIA] = LAYOUT(
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
KC_NO, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_UNDS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

#ifdef OLED_ENABLE

static void print_status_narrow(void) {
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _NAV:
            oled_write_P(PSTR("Nav\n"), false);
            break;
        case _NUM:
            oled_write_P(PSTR("Num\n"), false);
            break;
        case _FUN:
            oled_write_P(PSTR("Fun\n"), false);
            break;
        case _MOUSE:
            oled_write_P(PSTR("Mouse"), false);
            break;
        case _SYM:
            oled_write_P(PSTR("Sym\n"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("CPWRD"), is_caps_word_on());
    oled_write_P(PSTR("WPM: "), false);
    oled_write(get_u8_str(get_current_wpm(), '0'), false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        oled_write_ln_P(PSTR("TODO"),false);
    }
    return false;
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_BASE:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_BASE);
            }
            return false;
        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
             if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                     //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
        case KC_DLINE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_BSPC);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_BSPC);
            }
            break;
        case KC_COPY:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_C);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_C);
            }
            return false;
        case KC_PASTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_V);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_V);
            }
            return false;
        case KC_CUT:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_X);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_X);
            }
            return false;
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_Z);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_Z);
            }
            return false;
            break;
        case KC_W1:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_1);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_1);
            }
            return false;
            break;
        case KC_W2:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_2);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_2);
            }
            return false;
            break;
        case KC_W3:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_3);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_3);
            }
            return false;
            break;
        case KC_W4:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_4);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_4);
            }
            return false;
            break;
        case KC_W5:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_5);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_5);
            }
            return false;
            break;
        case KC_W6:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_6);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_6);
            }
            return false;
            break;
        case KC_W7:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_7);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_7);
            }
            return false;
            break;
        case KC_W8:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_8);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_8);
            }
            return false;
            break;
        case KC_W9:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_9);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_9);
            }
            return false;
            break;
        case KC_W0:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_0);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_0);
            }
            return false;
            break;
    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_WH_D);
        } else {
            tap_code(KC_WH_U);
        }
    }
    return true;
}

#endif

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_QWERTY] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN),   ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [_LOWER] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),   ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [_RAISE] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),   ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },
    [_ADJUST] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),  ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
};
#endif

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
}

void write_int_ln(const char* prefix, uint8_t value) {
    oled_write_P(prefix, false);
    oled_write(get_u8_str(value, ' '), false);
}

static void print_status_narrow(void) {
    oled_write_ln_P(PSTR("SofleChoc _____"), false);

    if (get_highest_layer(layer_state) == _ADJUST) {
        uint8_t mode  = rgb_matrix_get_mode();
        HSV     hsv   = rgb_matrix_get_hsv();
        uint8_t speed = rgb_matrix_get_speed();

        if (keymap_config.swap_lctl_lgui) {
            oled_write_ln_P(PSTR("MAC\n"), false);
        } else {
            oled_write_ln_P(PSTR("WIN\n"), false);
        }

        oled_write_ln("RGB", false);
        write_int_ln(PSTR("Mo"), mode);
        write_int_ln(PSTR("H "), hsv.h);
        write_int_ln(PSTR("S "), hsv.s);
        write_int_ln(PSTR("V "), hsv.v);
        write_int_ln(PSTR("Sp"), speed);
        oled_write_P(PSTR("\n\n\n"), false);
    } else {
        oled_write_P(PSTR("\n\n\n\n\n\n\n\n\n"), false);
        led_t led_usb_state = host_keyboard_led_state();
        if (led_usb_state.caps_lock) {
            oled_write_ln_P(PSTR(" CAP "), true);
        } else {
            oled_write_ln_P(PSTR("     "), false);
        }
    }

    // Print current layer
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("Alpha"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Nav  "), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Sym  "), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("Adj  "), false);
            break;
        default:
            oled_write_P(PSTR("???  "), false);
    }
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }

    return false;
}

#endif
