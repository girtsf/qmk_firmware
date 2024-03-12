// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _LAYER_BASE,
    _LAYER_FN,
};

// Activate fn layer when held, send ESC when tapped.
#define _ESC_FN LT(_FN, KC_ESC)
#define _ESC_BS LT(_FN, KC_BSPC)
// #define _F_LSFT MT(MOD_LSFT, KC_F)
// #define _J_RSFT MT(MOD_RSFT, KC_J)

#define _PIPE RSFT(KC_BSLS)
#define _LCBRC RSFT(KC_LBRC)
#define _RCBRC RSFT(KC_RBRC)

#define _FN MO(_LAYER_FN)

// win+ctrl+arrow keys to switch desktops.
#define _WCLEFT LGUI(LCTL(KC_LEFT))
#define _WCRGHT LGUI(LCTL(KC_RIGHT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_LAYER_BASE] = LAYOUT(
        //                                                                    ||
        KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , _______,                   _______, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS,
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_LBRC,                   KC_RBRC, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_EQL ,
        KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_F14 ,                   KC_F19 , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , _FN    , KC_BSPC, KC_F17 , KC_DEL , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
        _______, _______, KC_LWIN, KC_LALT, KC_SPC ,          _ESC_FN, KC_ENT , KC_ENT , _ESC_BS,          _______, KC_RALT, KC_RWIN, _______, KC_RCTL
    ),
    [_LAYER_FN] = LAYOUT(
        //                                                                    ||
        _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , _______,                   _______, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_BSLS,
        _______, _______, _______, _______, _______, _______, _______,                   _______, KC_HOME, _______, _______, KC_END , KC_PGUP, _PIPE  ,
        _______, _______, _______, _______, _______, _______, _______,                   _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_PGDN, _______,
        _______, _WCLEFT, _WCRGHT, _______, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, _LCBRC , _RCBRC , _______, _______,
        _______, _______, _______, _______, _______,          _______, _______, KC_INS , KC_DEL ,          _______, _______, _______, _______, _______
    ),
};

void keyboard_post_init_user(void) {
  debug_enable   = true;
  debug_matrix   = true;
  debug_keyboard = true;
}
