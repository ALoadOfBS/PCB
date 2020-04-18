#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    BS Boards
#define PRODUCT         BS Board
#define DESCRIPTION     Custom Keyboard Project

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* key matrix pins */
#define MATRIX_ROW_PINS { D3, D2, D1, D0, D4 }
#define MATRIX_COL_PINS { B0, F4, F5, F6, F7, B1, B3, B2, B6, F0, F1, C7, D5, B7 }

#define UNUSED_PINS { B4, B5, }

/* Pins connected to the encoder*/
#define ENCODERS_PAD_A { C6 }
#define ENCODERS_PAD_B { D7 }
#define ENCODER_RESOLUTION 4

#define RGB_DI_PIN  E6 
/* Pin connected to the data pin of the LEDs*/

/* Number of LEDs connected to the board*/
#define RGBLED_NUM 28

/*The number of steps to cycle through the hue by*/
#ifdef RGBLIGHT_HUE_STEP
#define RGBLIGHT_HUE_STEP 10
#endif

/*The number of steps to cycle through the saturation by*/
#ifdef RGBLIGHT_SAT_STEP
#define RGBLIGHT_SAT_STEP 17
#endif

/*The number of steps to cycle through the brightness by*/
#ifdef RGBLIGHT_VAL_STEP
#define RGBLIGHT_VAL_STEP 17
#endif

/* The maximum RGBLIGHT brighness level*/
#define RGBLIGHT_LIMIT_VAL 200

/* If defined, the RGB lighting will be switched off when the host goes to sleep*/
#define RGBLIGHT_SLEEP

#define RGBLIGHT_ANIMATIONS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
/*#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 5
#endif*/

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#endif