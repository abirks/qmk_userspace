/* Copyright 2018 MechMerlin
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

// Keyboard Layers
#define _QW 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* QWERTY layer
   * ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗
   * ║       │  !    │  " @  │  # £  │  ¤ $  │  %    │  VOL  │ MUTE  │  VOL  │  &    │  / {  │  ( [  │  ) ]  │  = }  │  ?    ║
   * ║  ESC  │  1    │  2    │  3    │  4    │  5    │  DWN  │       │   UP  │  6    │  7    │  8    │  9    │  0    │  +    ║
   * ╟───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────╢
   * ║       │  Q    │  W    │  E €  │  R    │  T    │ PREV  │ PLAY/ │ NEXT  │  Y    │  U    │  I    │  O    │  P    │  Å    ║
   * ║  TAB  │       │       │       │       │       │       │ PAUSE │       │       │       │       │       │       │       ║
   * ╟───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────╢
   * ║       │  A    │  S    │  D    │  F    │  G    │ F21   │ F22   │ F23   │  H    │  J    │  K    │  L    │  Æ    │  Ø    ║
   * ║ SHIFT │       │       │       │       │       │Spotify│Browser│ IDE   │       │       │       │       │       │       ║
   * ╟───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────╢
   * ║       │  > \  │  Z    │  X    │  C    │  V    │ LWIN  │       │  INS  │  B    │  N    │  M    │  ;    │  :    │  _    ║
   * ║ CTRL  │  <    │       │       │       │       │       │       │       │       │       │       │  ,    │  .    │  -    ║
   * ╟───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────╢
   * ║       │       │       │       │       │       │       │       │       │       │  ALT  │       │       │       │       ║
   * ║       │       │       │  FN   │  ALT  │  DEL  │ ENTER │       │ SPACE │ BSPC  │  GR   │  FN   │       │       │       ║
   * ╚═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╝
   */
    [_QW] = LAYOUT_ortho_5x15(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_VOLD,  KC_MUTE,  KC_VOLU,  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,
        KC_LSFT,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_F21,   KC_F22,   KC_F23,   KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
        KC_LCTL,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_LWIN,  KC_NO,    KC_INS,   KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,
        KC_NO,    KC_NO,    KC_NO,    MO(_FN),  KC_LALT,  KC_DEL,   KC_ENT,   KC_NO,    KC_SPC,   KC_BSPC,  KC_RALT,  MO(_FN),  KC_NO,    KC_NO,    KC_NO
    ),

  /* FUNCTION layer
   * ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗
   * ║       │       │       │       │       │       │       │       │       │       │       │       │       │       │  ` |  ║
   * ║   ½   │  F1   │  F2   │  F3   │  F4   │  F5   │ TRANS │ TRANS │ TRANS │  F6   │  F7   │  F8   │  F9   │  F10  │  ´    ║
   * ╟───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────╢
   * ║       │       │       │       │       │       │       │       │       │       │       │       │       │       │  ^ ~  ║
   * ║ TRANS │       │       │       │       │       │ TRANS │ TRANS │ TRANS │       │       │       │  F11  │  F12  │  ¨    ║
   * ╟───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────╢
   * ║       │       │       │       │       │       │       │       │       │       │       │       │       │       │  *    ║
   * ║ TRANS │       │       │       │       │       │ TRANS │ TRANS │ TRANS │       │       │       │       │   ^   │  '    ║
   * ╟───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────╢
   * ║       │       │       │       │       │       │       │       │       │       │       │       │       │       │       ║
   * ║ TRANS │       │       │       │       │       │  HOME │       │  END  │       │       │       │   <   │   v   │   >   ║
   * ╟───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────╢
   * ║       │       │       │       │       │       │       │       │       │       │       │       │       │       │       ║
   * ║       │       │       │ TRANS │ TRANS │ TRANS │ TRANS │       │ TRANS │ TRANS │ TRANS │ TRANS │       │       │       ║
   * ╚═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╝
   */
    [_FN] = LAYOUT_ortho_5x15(
        KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_EQL,
        KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_F11,   KC_F12,   KC_RBRC,
        KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_UP,    KC_NUHS,
        KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_HOME,  KC_NO,    KC_END,   KC_NO,    KC_NO,    KC_NO,    KC_LEFT,  KC_DOWN,  KC_RGHT,
        KC_NO,    KC_NO,    KC_NO,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO,    KC_NO
    ),
};

// Prevent double presses from repeated keys
bool prevent_double(keyrecord_t *record, bool *registered) {
    if (record->event.pressed) {
        if (*registered) {
            return false;
        } else {
            *registered = true;
            return true;
        }
    } else {
        if (*registered) {
            *registered = false;
            return true;
        } else {
            return false;
        }
    }
}

// Special keys
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        default:
            return true; // Process all other keycodes normally
    }
}
