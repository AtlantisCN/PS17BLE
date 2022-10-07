#pragma once

#include "config_common.h"

/* Device */
#define VENDOR_ID       0x416B
#define PRODUCT_ID      0x0b17
#define DEVICE_VER      0x0001
#define MANUFACTURER    Atlantis
#define PRODUCT         PS17BLE

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 4
/* key matrix pins */
#define MATRIX_ROW_PINS { F0, F1, F4, B6, C6, C7 }
#define MATRIX_COL_PINS { F6, F7, D3, D6 }
/* encoder pins */
#define ENCODERS_PAD_A { D2 }
#define ENCODERS_PAD_B { F5 }
#define ENCODER_RESOLUTION 4
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
/* LED Indicators */
#define LED_NUM_LOCK_PIN B0
#define LED_CAPS_LOCK_PIN D5
#define LED_SCROLL_LOCK_PIN D7
#define LED_PIN_ON_STATE 0

#define DEBOUNCE 5
#define TAP_CODE_DELAY 10

/* Bluetooth */
#ifdef BLUETOOTH_ENABLE
#define BLUEFRUIT_LE_RST_PIN D4
#define BLUEFRUIT_LE_CS_PIN B4
#define BLUEFRUIT_LE_IRQ_PIN E6
#define BATTERY_LEVEL_PIN B5
#define BATTERY_LEVEL_POLL 5000
#define LED_LOW_BATTERY_PIN B5
#endif

#define RGB_DI_PIN B7
#ifdef  RGB_DI_PIN
#define RGBLED_NUM 36

#define RGBLIGHT_EFFECT_STATIC_LIGHT
#define RGBLIGHT_EFFECT_BREATHING//呼吸动画
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL//启用彩虹漩涡动画模式。
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_STATIC_GRADIEN//启用静态渐变模式。
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#endif

/* VIA */
#ifdef  VIA_ENABLE
#define DYNAMIC_KEYMAP_LAYER_COUNT 7
#endif
