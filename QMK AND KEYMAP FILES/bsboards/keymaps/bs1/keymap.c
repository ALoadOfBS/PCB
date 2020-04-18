#include "bsboards.h"

//Macros
	enum custom_keycodes {
		M_EMAIL = SAFE_RANGE,	/*Custom Macro for email*/
		M_ALTF4,	/*"alt+f4" macro*/
		M_CADEL,	/*"ctrl+alt+del" macro*/
		M_CTRLC,
		M_CTRLV,
		M_CTRLA,
		M_SN
	};

	

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/*KEYMAP(
		KC_ESCAPE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, 
		MO(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_MEDIA_PLAY_PAUSE, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT, KC_F14, 
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(1), KC_RALT, KC_CAPS, KC_RCTL, KC_F15),*/

[0] = KEYMAP(
		KC_ESCAPE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, 
		MO(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_MEDIA_PLAY_PAUSE, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT, KC_F13, 
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPACE, MO(1), KC_RALT, KC_CAPS, KC_RCTL, KC_F14),


	[1] = KEYMAP(
		KC_GRAVE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, RESET,
		KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGUP, KC_PSCR,
		KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TG(2), KC_END, KC_PGDN, KC_TRNS, KC_AUDIO_MUTE,
		KC_TRNS, RGB_TOG, RGB_RMOD, RGB_MOD, RGB_VAI, RGB_HUI, RGB_SAI, KC_TRNS, KC_TRNS, KC_INS, KC_DEL, KC_TRNS, M_CADEL, 
		KC_TRNS, KC_TRNS, M_SN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, M_EMAIL),

	[2] = KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, RGB_TOG, RGB_MOD, MO(3), MO(4), MO(5), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[3] = KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[4] = KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[5] = KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),



};

/*const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	if (!record->event.pressed) {
		switch(id) {
			case M_ALTF4:
				return MACRO(SS_DOWN(KC_RALT), SS_TAP(KC_F4), SS_UP(KC_RALT), );
			case M_CADEL:
				return MACRO(SS_DOWN(KC_LCTL), SS_DOWN(KC_LALT), SS_TAP(KC_DEL), SS_UP(KC_LALT), SS_UU(KC_LCTL), END);
			case M_CTRLC:
				return MACRO(SS_DOWN(KC_LCTL), SS_TAP(KC_C), SS_UP(KC_LCTL),);
			case M_CTRLV:
				return MACRO(SS_DOWN(KC_LCTL), SS_TAP(KC_V), SS_UP(KC_LCTL),);
			case M_CTRLA:
				return MACRO(SS_DOWN(KC_LCTL), SS_TAP(KC_A), SS_UP(KC_LCTL),);
		}
	return MACRO_NONE;
}*/

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case M_EMAIL:
			if (record->event.pressed) {
				SEND_STRING("enter your email here on line 99 of keymap.c file");
			}
			else {

			}
			break;
		case M_CTRLA:
			if (record->event.pressed) {
				SEND_STRING(SS_LCTL("a"));
			}
			break;
		case M_CTRLC:
			if (record->event.pressed) {
				SEND_STRING(SS_LCTL("c"));
			}
			break;
		case M_CTRLV:
			if (record->event.pressed) {
				SEND_STRING(SS_LCTL("v"));
			}
			break;
		case M_CADEL:
			if (record->event.pressed) {
				SEND_STRING(SS_DOWN(X_LCTRL)SS_DOWN(X_LALT)SS_DOWN(X_DELETE)SS_UP(X_LCTRL)SS_UP(X_LALT)SS_UP(X_DELETE));
			}
			break;
		case M_ALTF4:
			if (record->event.pressed) {
				SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_F4)SS_UP(X_LALT)SS_UP(X_F4));
			}
			break;
		case M_SN:
			if (record->event.pressed) {
				rgblight_mode(RGBLIGHT_MODE_SNAKE);
				rgblight_sethsv(HSV_CHARTREUSE);
			}
				
			break;
			

	}
	return true;
}


//void led_set_user(uint8_t usb_led) {

	/*if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}*/
void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* First encoder */
   	if (layer_state_is(0)){
  		 if (clockwise) {
    	  tap_code(KC_AUDIO_VOL_DOWN);
   		} else {
    	  tap_code(KC_AUDIO_VOL_UP);
    	}
	}
    	if (layer_state_is(3)){
    		if (clockwise)
    		rgblight_decrease_val();
    	else {
    		rgblight_increase_val();
    	}
  	}

  	if (layer_state_is(4)){
    		if (clockwise)
    		rgblight_decrease_hue();
    	else {
    		rgblight_increase_hue();
    	}
  	} 

  	if (layer_state_is(5)){
    		if (clockwise)
    		rgblight_decrease_sat();
    	else {
    		rgblight_increase_sat();
    	}
  	}  
}
}