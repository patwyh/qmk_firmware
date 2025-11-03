#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_6x6(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_RALT, KC_ENT,
        KC_BSPC, KC_SLSH, KC_N,    KC_M,    KC_COMM, KC_DOT
    ),

    [1] = LAYOUT_6x6(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
        KC_TRNS, KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_TRNS, KC_PGUP,
        KC_TRNS, KC_HOME, KC_UP,   KC_END,  KC_PGDN, KC_DEL,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F6,
        KC_TRNS, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11
    )
};