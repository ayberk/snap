/* Copyright 2021 Jay Greco
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

#include "bongo.h"

// clang-format off
enum layers {
    _BASE,
    _VIA1,
    _VIA2,
    _VIA3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_all(
    KC_VOLU,          KC_ESC,   KC_F1,   KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,    KC_F7,  KC_F8,  KC_F9,   KC_F10,    KC_F11,    KC_F12,   KC_PSCR,  KC_PAUS,           KC_MNXT,
    KC_VOLD, KC_F13,  KC_GRV,   KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,     KC_7,   KC_8,   KC_9,    KC_0,      KC_MINS,   KC_EQL,   KC_BSPC,  KC_DEL,   KC_HOME, KC_MPRV,
             KC_F14,  KC_TAB,   KC_Q,    KC_W,   KC_E,   KC_R,           KC_T,     KC_Y,   KC_U,   KC_I,    KC_O,      KC_P,      KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_END,
             KC_F15,  KC_CAPS,  KC_A,    KC_S,   KC_D,   KC_F,           KC_G,     KC_H,   KC_J,   KC_K,    KC_L,      KC_SCLN,   KC_QUOT,  KC_ENT,             KC_PGUP,
             KC_F16,  KC_LSFT,  KC_NUHS, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,     KC_N,   KC_M,   KC_COMM, KC_DOT,    KC_SLSH,   KC_RSFT,            KC_UP,    KC_PGDN,
             KC_F17,  KC_LCTL,  MO(_VIA1), KC_LGUI, KC_LALT,     KC_SPC,   KC_SPC,                  MO(_VIA1), KC_RALT,   KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT
  ),
    [_VIA1] = LAYOUT_all(
    KC_NO,          RESET,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,         KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,  KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,          KC_NO,    KC_NO,                  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO
  ),
    [_VIA2] = LAYOUT_all(
    KC_NO,          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,         KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,  KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,          KC_NO,    KC_NO,                  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO
  ),
    [_VIA3] = LAYOUT_all(
    KC_NO,          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,         KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,  KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,          KC_NO,    KC_NO,                  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO
  ),
};
// clang-format on

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_left())
        return OLED_ROTATION_0;
    else
        return OLED_ROTATION_180;
}

int get_free_ram(void) {
    extern int __heap_start, *__brkval;
    int        v;
    int        diff = (int)&v - (__brkval == 0 ? (int)&__heap_start : (int)__brkval);
    return diff;
}

static void render_status(void) {
    oled_set_cursor(0, 0);
    oled_write_P(PSTR("SNAP75 "), false);
    oled_write_P(PSTR("Layer "), false);
    switch (get_highest_layer(layer_state)) {
        case _VIA1:
            oled_write_P(PSTR("FN1 "), false);
            break;
        case _VIA2:
            oled_write_P(PSTR("FN2 "), false);
            break;
        case _VIA3:
            oled_write_P(PSTR("FN3 "), false);
            break;
        default: // use BASE case as default
            oled_write_P(PSTR("Base"), false);
    }

    // Host Keyboard LED Status
    oled_set_cursor(0, 1);
    static uint8_t persistent_led_state = 0;
    uint8_t        led_usb_state        = host_keyboard_leds();

    // Only update if the LED state has changed
    // Otherwise, the OLED will not turn off if an LED is on.
    if (persistent_led_state != led_usb_state) {
        persistent_led_state = led_usb_state;

        oled_write_ln_P(PSTR(""), false);

        if (IS_LED_ON(led_usb_state, USB_LED_CAPS_LOCK)) {
            oled_set_cursor(0, 1);
            oled_write_P(PSTR("CAPS"), false);
        }

        if (IS_LED_ON(led_usb_state, USB_LED_NUM_LOCK)) {
            oled_set_cursor(5, 1);
            oled_write_P(PSTR("NUM"), true);
        }

        if (IS_LED_ON(led_usb_state, USB_LED_SCROLL_LOCK)) {
            oled_set_cursor(9, 1);
            oled_write_P(PSTR("SCR"), false);
        }
    }

    // WPM and free RAM
    oled_set_cursor(0, 2);
    oled_write_P(PSTR("WPM "), false);
    uint8_t current_wpm = get_current_wpm();
    oled_write(get_u8_str(current_wpm, '0'), true);

    oled_set_cursor(8, 2);
    oled_write_P(PSTR("RAM "), false);
    uint16_t free_ram = (uint16_t)get_free_ram();
    oled_write(get_u16_str(free_ram, '0'), true);
}

bool        oled_task_user(void) {
#if defined RGBLIGHT_ENABLE && defined MATCH_OLED_RGB_BRIGHTNESS
    // Sync OLED brightness to RGB LED brightness
    // Only update the brightness if it's changed
    uint16_t rgb_brightness = (rgblight_get_val() * OLED_BRIGHTNESS) >> 8;
    if (rgblight_is_enabled() && (oled_get_brightness() != rgb_brightness)) {
        oled_set_brightness(rgb_brightness);
    }
#endif
    if (is_keyboard_master()) {
        draw_bongo(false);
    } else {
        render_status();
    }
    return true;
}
