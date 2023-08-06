#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
#define L_BASE 0
#define L_NUM 1
#define L_SYM 2
#define L_NAV 3

// Defines for tap/hold combos
#define LSFT_ESC LSFT_T(KC_ESC)     // ESC when tapped, left shift when held
#define LT_SYMSP LT(L_SYM, KC_SPC)  // Space when tapped, Sym layer when held
#define LT_NUMSP LT(L_NUM, KC_SPC)  // Space when tapped, Num layer when held
#define LT_NAVEN LT(L_NAV, KC_ENTER) // Enter when tapped, Nav layer when held

// Defines for home row mods.
#define A_GUI LGUI_T(KC_A)       // A when tapped, left cmd when held
#define S_ALT LALT_T(KC_S)       // S when tapped, left alt when held
#define D_ALT LCTL_T(KC_D)       // D when tapped, left ctrl when held

#define COM_GUI LCTL_T(KC_COMM)  // Comma when tapped, left ctrl when held
#define DOT_ALT LALT_T(KC_DOT)   // Dot when tapped, left alt when held
#define SLA_ALT LGUI_T(KC_SLASH) // Slash when tapped, left cmd when held

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   Q  |   W  |   E  |   R  |   T  |      |      |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |      |      |   H  |   J  |   K  |   L  |   ;  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |      |      |   N  |   M  |   ,  |   ,  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |Esc/Sh|Sp/L2 | BkSp |Ent/L3|Sp/L1 |  Sh  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[L_BASE] = LAYOUT_preonic_grid(
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_NO,   KC_NO,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  A_GUI,   S_ALT,   D_ALT,   KC_F,    KC_G,    KC_NO,   KC_NO,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_NO,   KC_NO,   KC_N,    KC_M,    COM_GUI, DOT_ALT, SLA_ALT,
  KC_NO,   KC_NO,   KC_NO,   LSFT_ESC,LT_SYMSP,KC_BSPC, LT_NAVEN,LT_NUMSP,KC_RSFT, KC_NO,   KC_NO,   KC_NO
),

/* Num
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   1  |   2  |   3  |   4  |   5  |      |      |   6  |   7  |   8  |   9  |   0  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Tab  |      |      |  '   |   '  |      |      |   \  |   -  |   =  |   [  |   ]  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   `  |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |Esc/Sh|Sp/L2 | BkSp |Ent/L3|Sp/L1 |  Sh  |      |      |      |
 *  `-----------------------------------------------------------------------------------'
 */
[L_NUM] = LAYOUT_preonic_grid(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    XXXXXXX, XXXXXXX, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
  KC_TAB,  XXXXXXX, XXXXXXX, KC_QUOT, KC_QUOT, XXXXXXX, XXXXXXX, KC_BSLS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_GRAVE,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT, KC_SPC,  KC_BSPC, KC_ENT,  KC_TRNS, KC_RSFT, XXXXXXX, XXXXXXX, XXXXXXX 
),

/* Sym
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   !  |   @  |   #  |   $  |   %  |      |      |   ^  |   &  |   *  |   (  |   )  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Tab  |      |      |  "   |   "  |      |      |   |  |   _  |   +  |   {  |   }  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   ~  |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |Esc/Sh|Sp/L2 | BkSp |Ent/L3|Sp/L1 |  Sh  |      |      |      |
 *  `-----------------------------------------------------------------------------------'
 */
[L_SYM] = LAYOUT_preonic_grid(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, XXXXXXX, XXXXXXX, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
  KC_TAB,  XXXXXXX, XXXXXXX, KC_DQUO, KC_DQUO, XXXXXXX, XXXXXXX, KC_PIPE, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_GRV,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT, KC_TRNS, KC_BSPC, KC_ENT,  KC_SPC,  KC_RSFT, XXXXXXX, XXXXXXX, XXXXXXX 
),

/* Nav
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  | F10  |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  F4  |  F5  |  F6  | F11  |      |      |  <-  |   v  |   ^  |  ->  | Caps |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  | F12  |      |      | Home | PgDn | PgUp | End  | Ins  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |Esc/Sh|Sp/L2 | BkSp |Ent/L3|Sp/L1 |  Sh  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[L_NAV] = LAYOUT_preonic_grid(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_F7,   KC_F8,   KC_F9,   KC_F10,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_F4,   KC_F5,   KC_F6,   KC_F11,  XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS,
  XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F12,  XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
  XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT, KC_SPC,  KC_BSPC, KC_TRNS, KC_SPC,  KC_RSFT, XXXXXXX, XXXXXXX, XXXXXXX 
),

};

bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) {
  return false;
}

#ifdef AUDIO_ENABLE
float tone_startup[][2] = {
  {NOTE_C5, 8},
  {NOTE_E6, 4},
  {NOTE_D6, 16},
  {NOTE_G6, 8}
};

float tone_goodbye[][2] = SONG(GOODBYE_SOUND);

float music_scale[][2]  = SONG(MUSIC_SCALE_SOUND);
#endif

void matrix_init_user(void) {
    #ifdef AUDIO_ENABLE
        startup_user();
    #endif
}

#ifdef AUDIO_ENABLE

void startup_user(void)
{
    PLAY_SONG(tone_startup);
}

void shutdown_user(void)
{
    PLAY_SONG(tone_goodbye);
    stop_all_notes();
}

void music_on_user(void)
{
    music_scale_user();
}

void music_scale_user(void)
{
    PLAY_SONG(music_scale);
}

#endif
