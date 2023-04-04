#include QMK_KEYBOARD_H
#include "print.h"
#include "keymap_german.h"
#include "sendstring_german.h"

#define _FuncL 1
#define _NumL 2
#define _NavL 3

enum custom_keycodes {
    LogMakro = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  
  [0] = LAYOUT(                                                                                                                   //Splitt  
    //1                 //2             //3             4               5               6           7         8                     9                 10            11        12            13      14              15              16
    KC_ESCAPE	,         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,       LogMakro,  KC_NO,                KC_NO,             KC_NO,       KC_6,     KC_7,       KC_8,    KC_9,            KC_0,           KC_END,
    KC_TAB    ,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,       DE_AT,     KC_NO,                KC_NO,             KC_NO,       DE_Z,     KC_U,       KC_I,    KC_O,            KC_P,           KC_DELETE,
    KC_CAPS_LOCK,     	KC_A,           KC_S,           KC_D,           KC_F,           KC_G,       KC_NO,     KC_NO,                KC_NO,             KC_NO,       KC_H,     KC_J,       KC_K,    KC_L,            KC_RBRC,        KC_PAGE_UP,
    KC_LSHIFT,          DE_Y,           KC_X,           KC_C,           KC_V,           KC_B,       KC_NO,     KC_NO,                KC_NO,             KC_NO,       KC_N,     KC_M,       KC_COMM ,KC_DOT  ,        DE_MINS,        KC_PAGE_DOWN,
    KC_LEFT_CTRL,       KC_LEFT_GUI,    KC_LALT,        MO(_NumL),      MO(_FuncL),     KC_SPACE, KC_BACKSPACE,KC_ENTER,             KC_ENTER,       KC_BACKSPACE,   KC_SPACE, MO(_NavL),  KC_NO,   KC_RIGHT_ALT,    KC_RIGHT_GUI,   KC_RIGHT_CTRL
  ),

  [_FuncL] = LAYOUT(                                                                                                               //Splitt       
    //1                 //2             //3             4               5               6           7         8                     9                 10            11        12             13      14               15             16
    KC_GRAVE ,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,      QK_RBT,   KC_NO,                KC_NO,          QK_BOOT,        KC_F6,    KC_F7,         KC_F8,  KC_F9,           KC_F10,        DE_SS,
    KC_NO,             KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,     KC_NO,    KC_NO,                KC_NO,            KC_NO,        KC_NO,    DE_UDIA ,      KC_NO,  DE_ODIA ,        KC_NO,         DE_PLUS ,
    KC_NO,     	       DE_ADIA ,       KC_NO,          KC_NO,          KC_NO,          KC_NO,      KC_NO,    KC_NO,                KC_NO,            KC_NO,        KC_NO,    KC_NO,         KC_NO,  KC_NO,           KC_NO,         DE_HASH ,
    KC_TRNS,           DE_LABK ,       KC_NO,          KC_NO,          KC_NO,          KC_NO,      KC_NO,    KC_NO,                KC_NO,            KC_NO,        KC_NO,    KC_NO,         DE_QUOT,KC_NO,           KC_NO,         KC_NO,
    KC_TRNS ,          KC_TRNS,        KC_TRNS,        KC_NO,          KC_TRNS,        KC_NO,      KC_NO,    KC_NO,                KC_NO,            KC_NO,        KC_NO,    KC_NO,         KC_NO,  KC_NO,           KC_NO,         KC_NO  
  ),        

  [_NumL] = LAYOUT(                                                                                                         //Splitt                
    //1                 //2             //3             4               5               6           7         8                     9                 10            11        12             13      14               15             16
    KC_NO,             KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,      KC_NO,    KC_NO,                KC_NO,            KC_NO,        KC_NO,    KC_PSLS,       KC_PAST,KC_PMNS,         KC_PPLS,       KC_NO,
    KC_NO,             DE_RPRN ,       DE_RCBR ,       DE_RBRC ,       DE_SLSH,        KC_NO,      KC_NO,    KC_NO,                KC_NO,            KC_NO,        KC_NO,    KC_P7,         KC_P8,  KC_P9,           KC_NO,         KC_NO,
    KC_NO,     	       DE_LPRN,        DE_LCBR ,       DE_LBRC ,       DE_PIPE ,       KC_NO,      KC_NO,    KC_NO,                KC_NO,            KC_NO,        KC_NO,    KC_P4,         KC_P5,  KC_P6,           KC_NO,         KC_NO,
    KC_NO,             KC_NO,          KC_NO,          KC_NO,          DE_BSLS,        KC_NO,      KC_NO,    KC_NO,                KC_NO,            KC_NO,        KC_NO,    KC_P1,         KC_P2,  KC_P3,           KC_NO,         KC_NO,
    KC_NO,             KC_NO,          KC_NO,          KC_TRNS,        KC_NO,          KC_NO,      KC_NO,    KC_NO,                KC_NO,            KC_NO,        KC_NO,    KC_P0,         KC_NO,  KC_NO,           KC_NO,         KC_NO  
  ),  

  [_NavL] = LAYOUT(                                                                                                         //Splitt                
    //1                 //2             //3             4               5               6           7         8                     9                 10            11        12             13      14              15             16
    KC_NO,             KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,      KC_NO,    KC_NO,                KC_NO,            KC_NO,        KC_NO,    KC_NO,         KC_NO,    KC_NO,         KC_NO,         KC_NO,
    KC_NO,             KC_HOME,        KC_UP,          KC_END,         KC_NO,          KC_NO,      KC_NO,    KC_NO,                KC_NO,            KC_NO,        KC_NO,    KC_NO,         KC_NO,    KC_NO,         KC_NO,         KC_NO,
    KC_NO,     	       KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_NO,      KC_NO,    KC_NO,                KC_NO,            KC_NO,        KC_NO,    KC_NO,         KC_NO,    KC_NO,         KC_NO,         KC_NO,
    KC_TRNS,           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,      KC_NO,    KC_NO,                KC_NO,            KC_NO,        KC_NO,    KC_NO,         KC_NO,    KC_NO,         KC_NO,         KC_NO,
    KC_TRNS,           KC_NO,          KC_TRNS,        KC_NO,          KC_NO,          KC_NO,      KC_NO,    KC_NO,                KC_NO,            KC_NO,        KC_NO,    KC_TRNS,       KC_NO,    KC_NO,         KC_NO,         KC_NO  
  )      
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif 

  switch (keycode)
  {
    case LogMakro:
        if (record->event.pressed) 
        {
            SEND_STRING("Debug.Log($\" \");" SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT));
        }
        break;
  }

  return true;
}
