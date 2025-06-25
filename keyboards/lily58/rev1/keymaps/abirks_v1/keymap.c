#include QMK_KEYBOARD_H

// Keyboard Layers
#define _QW 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* QWERTY layer
   * ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗                       ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗
   * ║       │  !    │  " @  │  # £  │  ¤ $  │  %    ║                       ║  &    │  / {  │  ( [  │  ) ]  │  = }  │  ?    ║
   * ║  ESC  │  1    │  2    │  3    │  4    │  5    ║                       ║  6    │  7    │  8    │  9    │  0    │  +    ║
   * ╟───────┼───────┼───────┼───────┼───────┼───────╢                       ╟───────┼───────┼───────┼───────┼───────┼───────╢
   * ║       │  Q    │  W    │  E €  │  R    │  T    ║                       ║  Y    │  U    │  I    │  O    │  P    │  Å    ║
   * ║  TAB  │       │       │       │       │       ║                       ║       │       │       │       │       │       ║
   * ╟───────┼───────┼───────┼───────┼───────┼───────╢                       ╟───────┼───────┼───────┼───────┼───────┼───────╢
   * ║       │  A    │  S    │  D    │  F    │  G    ║                       ║  H    │  J    │  K    │  L    │  Æ    │  Ø    ║
   * ║ SHIFT │       │       │       │       │       ║                       ║       │       │       │       │       │       ║
   * ╟───────┼───────┼───────┼───────┼───────┼───────╚═══════╗       ╔═══════╝───────┼───────┼───────┼───────┼───────┼───────╢
   * ║       │  > \  │  Z    │  X    │  C    │  V    │ LWIN  ║       ║  INS  │  B    │  N    │  M    │  ;    │  :    │  _    ║
   * ║ CTRL  │  <    │       │       │       │       │       ║       ║       │       │       │       │  ,    │  .    │  -    ║
   * ╚═══════╧═══════╧═══════╗───────┼───────┼───────┼───────╢       ╟───────┼───────┼───────┼───────╔═══════╧═══════╧═══════╝
   *                         ║       │       │       │       ║       ║       │       │  ALT  │       ║
   *                         ║  FN   │  ALT  │  DEL  │ ENTER ║       ║ SPACE │ BSPC  │  GR   │  FN   ║
   *                         ╚═══════╧═══════╧═══════╧═══════╝       ╚═══════╧═══════╧═══════╧═══════╝
   */
    [_QW] = LAYOUT(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                   KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                                   KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,
        KC_LSFT,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                                   KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
        KC_LCTL,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_LWIN,            KC_INS,   KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,
                                      MO(_FN),  KC_LALT,  KC_DEL,   KC_ENT,             KC_SPC,   KC_BSPC,  KC_RALT,  MO(_FN)
    ),

  /* FUNCTION layer
   * ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗                       ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗
   * ║       │       │       │       │       │       ║                       ║       │       │       │       │       │  ` |  ║
   * ║   ½   │  F1   │  F2   │  F3   │  F4   │  F5   ║                       ║  F6   │  F7   │  F8   │  F9   │  F10  │  ´    ║
   * ╟───────┼───────┼───────┼───────┼───────┼───────╢                       ╟───────┼───────┼───────┼───────┼───────┼───────╢
   * ║       │       │       │       │       │       ║                       ║       │       │       │       │       │  ^ ~  ║
   * ║ TRANS │       │       │       │       │       ║                       ║       │       │       │  F11  │  F12  │  ¨    ║
   * ╟───────┼───────┼───────┼───────┼───────┼───────╢                       ╟───────┼───────┼───────┼───────┼───────┼───────╢
   * ║       │       │       │       │       │       ║                       ║       │       │       │       │       │  *    ║
   * ║ TRANS │       │       │       │       │       ║                       ║       │       │       │       │   ^   │  '    ║
   * ╟───────┼───────┼───────┼───────┼───────┼───────╚═══════╗       ╔═══════╝───────┼───────┼───────┼───────┼───────┼───────╢
   * ║       │       │       │       │       │       │       ║       ║       │       │       │       │       │       │       ║
   * ║ TRANS │       │       │       │       │       │ HOME  ║       ║  END  │       │       │       │   <   │   v   │   >   ║
   * ╚═══════╧═══════╧═══════╗───────┼───────┼───────┼───────╢       ╟───────┼───────┼───────┼───────╔═══════╧═══════╧═══════╝
   *                         ║       │       │       │       ║       ║       │       │       │       ║
   *                         ║ TRANS │ TRANS │ TRANS │ TRANS ║       ║ TRANS │ TRANS │ TRANS │ TRANS ║
   *                         ╚═══════╧═══════╧═══════╧═══════╝       ╚═══════╧═══════╧═══════╧═══════╝
   */
    [_FN] = LAYOUT(
        KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                                  KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_EQL,
        KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                  KC_NO,    KC_NO,    KC_NO,    KC_F11,   KC_F12,   KC_RBRC,
        KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_UP,    KC_NUHS,
        KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_HOME,            KC_END,   KC_NO,    KC_NO,    KC_NO,    KC_LEFT,  KC_DOWN,  KC_RGHT,
                                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
};

// OLED update loop, make sure to set OLED_ENABLE = yes in rules.mk
#ifdef OLED_ENABLE

// abirks logo. Edited using https://joric.github.io/qle/
static const char PROGMEM abirks_logo[] = {
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,240, 14,  1,  1,  1, 14,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,224,224,224,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,224,224,224,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,224,224,224,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0, 24, 36, 68, 66,130,130,130,130,132, 68,255, 36, 40,152,144,152, 40, 36,255, 68,132,132,130,130,130, 66, 68, 36, 24,  0,  0,  0,  0,  0,  0, 96, 96,120,120,120,120,120,120,120,120,248,248,224,224,  0,  0,255,255,255,255,224,224,120,120,120,120,248,248,224,224,128,128,  0,  0,249,249,249,249,  0,  0,248,248,248,248,224,224,120,120,120,120,  0,  0,255,255,255,255,  0,  0,128,128,224,224,120,120, 24, 24,  0,  0,224,224,248,248,120,120,120,120,120,120, 96, 96,  0,  0,  0,  0,  0,  0,  0,  0, 
  0,  0,  0,  0,  0, 24, 36, 34, 66, 65, 65, 65, 33, 33, 34,255, 36, 20, 25,  9, 25, 20, 36,255, 34, 33, 33, 65, 65, 65, 66, 34, 36, 24,  0,  0,  0,  0,  0,  0,248,248,254,254,134,134,134,134,134,134,255,255,255,255,  0,  0,255,255,255,255,225,225,128,128,128,128,225,225,255,255,127,127,  0,  0,255,255,255,255,  0,  0,255,255,255,255,  1,  1,  0,  0,  0,  0,  0,  0,255,255,255,255, 30, 30,127,127,249,249,224,224,128,128,  0,  0,135,135,159,159,158,158,158,158,254,254,248,248,  0,  0,  0,  0,  0,  0,  0,  0, 
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,112,128,128,128,112, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  7,  7,  7,  7,  7,  7,  7,  7,  1,  1,  7,  7,  0,  0,  7,  7,  7,  7,  1,  1,  7,  7,  7,  7,  7,  7,  1,  1,  0,  0,  0,  0,  7,  7,  7,  7,  0,  0,  7,  7,  7,  7,  0,  0,  0,  0,  0,  0,  0,  0,  7,  7,  7,  7,  0,  0,  0,  0,  1,  1,  7,  7,  7,  7,  0,  0,  1,  1,  7,  7,  7,  7,  7,  7,  7,  7,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,
};

static const char PROGMEM filled_circle[] = {
  0b00111100,
  0b01111110,
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111111,
  0b01111110,
  0b00111100
};

static const char PROGMEM empty_circle[] = {
  0b00111100,
  0b01000010,
  0b10000001,
  0b10000001,
  0b10000001,
  0b10000001,
  0b01000010,
  0b00111100
};

static void draw_circle(bool filled, int x, int y, const char *label) {
    oled_set_cursor(x, y);
    oled_write_raw_P(filled ? filled_circle : empty_circle, sizeof(filled_circle));
    oled_set_cursor(x+2, y);
    oled_write(label, false);
}

static void render_mod_status(void) {
  uint8_t mods = get_mods() | get_oneshot_mods();;
  
  bool is_shift = mods & MOD_MASK_SHIFT;
  bool is_ctrl = mods & MOD_MASK_CTRL;
  bool is_fn = layer_state_is(_FN);
  bool is_alt = mods & MOD_BIT(KC_LALT);
  bool is_altgr = mods & MOD_BIT(KC_RALT);

  draw_circle(is_shift, 1, 2, "Sh");
  draw_circle(is_ctrl, 1, 4, "Ct");
  draw_circle(is_fn, 1, 6, "Fn");
  draw_circle(is_alt, 1, 8, "A");
  draw_circle(is_altgr, 1, 10, "AG");
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (is_keyboard_master()) {
    return OLED_ROTATION_270;
  } else {
    return OLED_ROTATION_180;
  }
}

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    render_mod_status();
  } else {
    oled_write_raw_P(abirks_logo, sizeof(abirks_logo));
  }
  return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    // set_timelog();
  }
  return true;
}
