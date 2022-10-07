#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
    KC_VOLD, MO(1), KC_VOLU,
    KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
    KC_P7, KC_P8, KC_P9, KC_PPLS,
    KC_P4, KC_P5, KC_P6,
    KC_P1, KC_P2, KC_P3, KC_PENT,
    KC_P0, KC_PDOT),

  [1] = LAYOUT(
    KC_A, KC_TRNS, KC_B,
    RGB_TOG, RGB_MOD, RGB_VAD, RGB_VAI,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS)
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
          action_exec((keyevent_t){
                  .key = (keypos_t){.row = 0, .col = 0}, .pressed = true, .time = (timer_read() | 1)  /* time should not be 0 */
                       });  
          action_exec((keyevent_t){
                  .key = (keypos_t){.row = 0, .col = 0}, .pressed = false, .time = (timer_read() | 1)  /* time should not be 0 */
                       });  
           } else {
          action_exec((keyevent_t){
                  .key = (keypos_t){.row = 0, .col = 2}, .pressed = true, .time = (timer_read() | 1)  /* time should not be 0 */
                       });
          action_exec((keyevent_t){
                  .key = (keypos_t){.row = 0, .col = 2}, .pressed = false, .time = (timer_read() | 1)  /* time should not be 0 */
                       });  
           }
    }
}
