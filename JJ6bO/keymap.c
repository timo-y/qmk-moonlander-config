#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_0_0_255,
  HSV_172_255_255,
  HSV_122_255_128,
  HSV_27_255_255,
  HSV_215_255_128,
  HSV_0_255_255,
  HSV_129_186_206,
  HSV_112_251_220,
  HSV_52_255_255,
  HSV_220_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
};



#define DUAL_FUNC_0 LT(1, KC_K)
#define DUAL_FUNC_1 LT(13, KC_R)
#define DUAL_FUNC_2 LT(3, KC_L)
#define DUAL_FUNC_3 LT(10, KC_F4)
#define DUAL_FUNC_4 LT(3, KC_B)
#define DUAL_FUNC_5 LT(13, KC_M)
#define DUAL_FUNC_6 LT(6, KC_F9)
#define DUAL_FUNC_7 LT(12, KC_F1)
#define DUAL_FUNC_8 LT(14, KC_M)
#define DUAL_FUNC_9 LT(10, KC_F8)
#define DUAL_FUNC_10 LT(13, KC_V)
#define DUAL_FUNC_11 LT(13, KC_O)
#define DUAL_FUNC_12 LT(3, KC_T)
#define DUAL_FUNC_13 LT(13, KC_F18)
#define DUAL_FUNC_14 LT(7, KC_U)
#define DUAL_FUNC_15 LT(2, KC_5)
#define DUAL_FUNC_16 LT(5, KC_F6)
#define DUAL_FUNC_17 LT(11, KC_V)
#define DUAL_FUNC_18 LT(10, KC_F18)
#define DUAL_FUNC_19 LT(14, KC_F3)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,    MO(5),                                          TG(2),          DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_10,   DUAL_FUNC_11,   DUAL_FUNC_12,   KC_TRANSPARENT, 
    KC_ESCAPE,      DUAL_FUNC_5,    DUAL_FUNC_6,    KC_L,           DUAL_FUNC_7,    KC_W,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_K,           KC_H,           KC_G,           KC_F,           KC_Q,           DE_SS,          
    KC_TAB,         MT(MOD_LSFT, KC_U),MT(MOD_LGUI, KC_I),MT(MOD_LALT, KC_A),MT(MOD_LCTL, KC_E),KC_O,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_S,           MT(MOD_LCTL, KC_N),MT(MOD_LALT, KC_R),MT(MOD_RGUI, KC_T),MT(MOD_LSFT, KC_D),DE_Y,           
    KC_NO,          DE_UE,          DE_OE,          DE_AE,          KC_P,           DE_Z,                                           KC_B,           KC_M,           KC_COMMA,       KC_DOT,         KC_J,           KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(1),          KC_SPACE,       KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_LEFT_SHIFT,  MO(3),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_BSPC,        KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_RING,        DE_UNDS,        DE_LBRC,        DE_RBRC,        UD_DE_CIRC,        KC_NO,                                          KC_TRANSPARENT, DE_EXLM,        DE_LESS,        DE_MORE,        DE_EQL,         DE_AMPR,        DE_PARA,        
    KC_TRANSPARENT, DUAL_FUNC_13,   DUAL_FUNC_14,   DUAL_FUNC_15,   DUAL_FUNC_16,   DE_ASTR,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, DE_QST,         DUAL_FUNC_17,   DUAL_FUNC_18,   MT(MOD_RGUI, DE_MINS),DUAL_FUNC_19,   DE_AT,          
    KC_TRANSPARENT, DE_HASH,        DE_DLR,         DE_PIPE,        DE_TILD,        UD_DE_GRV,                                         DE_PLUS,        DE_PERC,        DE_DQOT,        DE_QUOT,        DE_SCLN,        DE_EURO,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, TO(4),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_NO,                                          KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,        
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, DE_Z,           KC_U,           KC_I,           KC_O,           KC_P,           DE_UE,          
    KC_CAPS,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           DE_OE,          DE_AE,          
    KC_LEFT_SHIFT,  DE_Y,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, DE_MINS,        KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_LEFT_ALT,    MO(3),          KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_NO,                                          KC_NO,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_PAGE_UP,     KC_BSPC,        KC_UP,          KC_DELETE,      KC_PGDN,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PSCR,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_MS_BTN4,     KC_F12,         
    KC_TRANSPARENT, MT(MOD_LSFT, KC_HOME),MT(MOD_LGUI, KC_LEFT),MT(MOD_LALT, KC_DOWN),MT(MOD_LCTL, KC_RIGHT),KC_END,         KC_TRANSPARENT,                                                                 KC_TRANSPARENT, ST_MACRO_0,     MT(MOD_LCTL, KC_KP_4),MT(MOD_LALT, KC_KP_5),MT(MOD_RGUI, KC_KP_6),MT(MOD_LSFT, KC_KP_DOT),KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_H,           KC_J,           KC_K,           KC_L,                                           KC_KP_0,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_COMMA,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_MS_WH_UP,    KC_MS_UP,       KC_MS_WH_DOWN,  KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_WWW_BACK,    KC_WWW_FORWARD, KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_NO,          KC_RIGHT_SHIFT, 
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_AUDIO_VOL_DOWN,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_NO,          KC_LEFT_ALT,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          ST_MACRO_1,     KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          HSV_0_0_255,    HSV_172_255_255,HSV_122_255_128,HSV_27_255_255, HSV_215_255_128,KC_TRANSPARENT,                                 KC_SYSTEM_SLEEP,KC_NO,          AU_TOGG,        MU_TOGG,        MU_NEXT,        KC_NO,          KC_NO,          
    KC_NO,          HSV_0_255_255,  HSV_129_186_206,HSV_112_251_220,HSV_52_255_255, HSV_220_255_255,QK_BOOT,                                                                        KC_SYSTEM_POWER,KC_NO,          KC_NO,          KC_NO,          RGB_MODE_FORWARD,KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          RGB_SPD,        RGB_SPI,        RGB_SLD,        KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          TOGGLE_LAYER_COLOR,                                                                                                RGB_TOG,        KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_HUD,        RGB_HUI,        RGB_VAD,                        RGB_VAI,        RGB_SAI,        RGB_SAD
  ),
};


const uint16_t PROGMEM combo0[] = { KC_KP_COMMA, KC_KP_1, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_NUM),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {134,255,213}, {0,0,0}, {0,0,255}, {250,159,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {134,255,213}, {0,0,0}, {0,0,0}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {134,255,213}, {0,0,0}, {0,0,255}, {250,159,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {134,255,213}, {0,0,0}, {0,0,0}, {105,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {85,203,158}, {0,0,0}, {0,0,255}, {250,159,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {134,255,213}, {0,0,0}, {0,0,255}, {250,159,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {105,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,255}, {0,0,255}, {0,0,255}, {10,225,255}, {10,225,255}, {0,0,255}, {0,0,255}, {10,225,255}, {0,0,255}, {0,0,255}, {0,0,255}, {10,225,255}, {10,225,255}, {0,0,255}, {10,225,255}, {0,0,255}, {0,0,255}, {10,225,255}, {0,0,255}, {134,255,213}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {134,255,213}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {85,203,158}, {0,0,0}, {0,0,0}, {105,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {32,176,255}, {146,224,255}, {146,224,255}, {0,0,255}, {0,0,0}, {32,176,255}, {146,224,255}, {85,203,158}, {90,242,239}, {0,0,0}, {32,176,255}, {85,203,158}, {85,203,158}, {90,242,239}, {134,255,213}, {32,176,255}, {146,224,255}, {85,203,158}, {90,242,239}, {0,0,255}, {32,176,255}, {146,224,255}, {146,224,255}, {90,242,239}, {0,0,0}, {0,0,0}, {0,0,0}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {32,176,255}, {32,176,255}, {0,0,0}, {0,0,0}, {0,0,0}, {32,176,255}, {44,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {32,176,255}, {146,224,255}, {146,224,255}, {146,224,255}, {0,0,0}, {32,176,255}, {146,224,255}, {146,224,255}, {146,224,255}, {85,203,158}, {32,176,255}, {146,224,255}, {146,224,255}, {146,224,255}, {0,0,255}, {32,176,255}, {15,166,195}, {15,166,195}, {146,224,255}, {0,0,0}, {0,0,0}, {0,0,0}, {105,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,183,238}, {0,205,155}, {0,0,0}, {0,0,0}, {0,0,0}, {0,205,155}, {0,205,155}, {0,0,0}, {134,255,213}, {0,0,0}, {0,183,238}, {0,205,155}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {134,255,213}, {0,0,0}, {0,0,0}, {0,183,238}, {31,255,255}, {134,255,213}, {134,255,213}, {0,0,0}, {0,183,238}, {31,255,255}, {243,222,234}, {0,0,255}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {105,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {129,186,206}, {0,0,0}, {0,0,0}, {0,0,0}, {122,255,128}, {113,230,211}, {0,0,0}, {0,0,0}, {0,0,0}, {27,255,255}, {52,255,255}, {0,0,0}, {0,0,0}, {15,97,236}, {215,255,128}, {220,255,255}, {0,0,0}, {85,203,158}, {0,0,0}, {140,178,255}, {129,220,231}, {140,220,231}, {30,255,139}, {243,222,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {250,159,255}, {0,183,238}, {0,183,238}, {0,0,0}, {0,0,0}, {250,159,255}, {0,0,0}, {141,255,233}, {0,0,0}, {0,0,0}, {250,159,255}, {0,0,0}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {146,224,255}, {0,205,155}, {0,205,155}, {0,183,238}, {31,255,255}, {85,203,158} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_S))));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_DELETE))));
    }
    break;

    case UD_DE_CIRC:
    if (record->event.pressed) {
      register_code16(DE_CIRC);
      unregister_code16(DE_CIRC);
      register_code16(KC_SPACE);
      unregister_code16(KC_SPACE);
    }
    break;
    case UD_DE_GRAVE:
    if (record->event.pressed) {
      register_code16(DE_GRV);
      unregister_code16(DE_GRV);
      register_code16(KC_SPACE);
      unregister_code16(KC_SPACE);
    }

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_1);
        } else {
          unregister_code16(KC_1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_1));
        } else {
          unregister_code16(LCTL(KC_1));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_2));
        } else {
          unregister_code16(LCTL(KC_2));
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_3);
        } else {
          unregister_code16(KC_3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_3));
        } else {
          unregister_code16(LCTL(KC_3));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_4));
        } else {
          unregister_code16(LCTL(KC_4));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_5);
        } else {
          unregister_code16(KC_5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_5));
        } else {
          unregister_code16(LCTL(KC_5));
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_X);
        } else {
          unregister_code16(KC_X);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_X));
        } else {
          unregister_code16(LCTL(KC_X));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_V);
        } else {
          unregister_code16(KC_V);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_V));
        } else {
          unregister_code16(LCTL(KC_V));
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_C);
        } else {
          unregister_code16(KC_C);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_C));
        } else {
          unregister_code16(LCTL(KC_C));
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_6));
        } else {
          unregister_code16(LCTL(KC_6));
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_7);
        } else {
          unregister_code16(KC_7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_7));
        } else {
          unregister_code16(LCTL(KC_7));
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_8);
        } else {
          unregister_code16(KC_8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_8));
        } else {
          unregister_code16(LCTL(KC_8));
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_9);
        } else {
          unregister_code16(KC_9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_9));
        } else {
          unregister_code16(LCTL(KC_9));
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_0);
        } else {
          unregister_code16(KC_0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_0));
        } else {
          unregister_code16(LCTL(KC_0));
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_BSLS);
        } else {
          unregister_code16(DE_BSLS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_SLSH);
        } else {
          unregister_code16(DE_SLSH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_LCBR);
        } else {
          unregister_code16(DE_LCBR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_RCBR);
        } else {
          unregister_code16(DE_RCBR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_17:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_LPRN);
        } else {
          unregister_code16(DE_LPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_18:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_RPRN);
        } else {
          unregister_code16(DE_RPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_19:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_COLN);
        } else {
          unregister_code16(DE_COLN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_0_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,0,255);
        }
        return false;
    case HSV_172_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(172,255,255);
        }
        return false;
    case HSV_122_255_128:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(122,255,128);
        }
        return false;
    case HSV_27_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(27,255,255);
        }
        return false;
    case HSV_215_255_128:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(215,255,128);
        }
        return false;
    case HSV_0_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,255,255);
        }
        return false;
    case HSV_129_186_206:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(129,186,206);
        }
        return false;
    case HSV_112_251_220:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(112,251,220);
        }
        return false;
    case HSV_52_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(52,255,255);
        }
        return false;
    case HSV_220_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(220,255,255);
        }
        return false;
  }
  return true;
}



