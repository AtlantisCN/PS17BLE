#pragma once

#include "quantum.h"

#define LAYOUT( \
  K00, K01, K02,      \
  K10, K11, K12, K13, \
  K20, K21, K22, K23, \
  K30, K31, K32,      \
  K40, K41, K42, K43, \
  K50,      K52  \
) { \
  { K00,   K01,   K02,   KC_NO }, \
  { K10,   K11,   K12,   K13 }, \
  { K20,   K21,   K22,   K23 }, \
  { K30,   K31,   K32,   KC_NO }, \
  { K40,   K41,   K42,   K43 }, \
  { K50,   KC_NO, K52,   KC_NO }  \
}

enum enable_keycodes {
  DG_BATT = SAFE_RANGE,
};

#ifdef BLUETOOTH_ENABLE
void tap_battery_level(void);
void set_low_battery_led(void);
#endif
