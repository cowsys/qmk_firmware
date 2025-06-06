/* Copyright 2021 Shulin Huang <mumu@x-bows.com>
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
 #include "quantum.h"
 #ifdef RGB_MATRIX_ENABLE
 const is31fl3731_led_t PROGMEM g_is31fl3731_leds[IS31FL3731_LED_COUNT] = {

  {0, C1_3, C2_3, C3_3},   // L01
  {0, C1_4, C2_4, C3_4},   // L02
  {0, C1_5, C2_5, C3_5},   // L03
  {0, C1_6, C2_6, C3_6},   // L04
  {0, C1_7, C2_7, C3_7},   // L05
  {0, C1_8, C2_8, C3_8},   // L06
  {1, C1_3, C2_3, C3_3},   // L07
  {1, C1_4, C2_4, C3_4},   // L08
  {1, C1_5, C2_5, C3_5},   // L09
  {1, C1_6, C2_6, C3_6},   // L10
  {1, C1_7, C2_7, C3_7},   // L11
  {1, C1_8, C2_8, C3_8},   // L12
  {2, C1_3, C2_3, C3_3},   // L13
  {2, C1_4, C2_4, C3_4},   // L14
  {2, C1_5, C2_5, C3_5},   // L15

  {0, C6_1, C5_1, C4_1},   // L16
  {0, C6_2, C5_2, C4_2},   // L17
  {0, C6_3, C5_3, C4_3},   // L18
  {0, C6_6, C5_6, C4_6},   // L19
  {0, C6_7, C5_7, C4_7},   // L20
  {0, C6_8, C5_8, C4_8},   // L21
  {1, C6_2, C5_2, C4_2},   // L22
  {1, C6_3, C5_3, C4_3},   // L23
  {1, C6_6, C5_6, C4_6},   // L24
  {1, C6_7, C5_7, C4_7},   // L25
  {1, C6_8, C5_8, C4_8},   // L26
  {2, C6_1, C5_1, C4_1},   // L27
  {2, C6_2, C5_2, C4_2},   // L28
  {2, C6_3, C5_3, C4_3},   // L29

  {0, C9_1, C8_1, C7_1},   // L30
  {0, C9_2, C8_2, C7_2},   // L31
  {0, C9_3, C8_3, C7_3},   // L32
  {0, C9_4, C8_4, C7_4},   // L33
  {0, C9_5, C8_5, C7_5},   // L34
  {0, C9_6, C8_6, C7_6},   // L35
  {1, C9_1, C8_1, C7_1},   // L36
  {1, C9_2, C8_2, C7_2},   // L37
  {1, C9_3, C8_3, C7_3},   // L38
  {1, C9_4, C8_4, C7_4},   // L39
  {1, C9_5, C8_5, C7_5},   // L40
  {1, C9_6, C8_6, C7_6},   // L41
  {2, C6_6, C5_6, C4_6},   // L42
  {2, C6_7, C5_7, C4_7},   // L43
  {2, C6_8, C5_8, C4_8},   // L44


  {0, C1_11, C2_11, C3_11},   // L45
  {0, C1_12, C2_12, C3_12},   // L46
  {0, C1_13, C2_13, C3_13},   // L47
  {0, C1_14, C2_14, C3_14},   // L48
  {0, C1_15, C2_15, C3_15},   // L49
  {0, C1_16, C2_16, C3_16},   // L50
  {1, C9_9, C8_9, C7_9},      // L51
  {1, C1_11, C2_11, C3_11},   // L52
  {1, C1_12, C2_12, C3_12},   // L53
  {1, C1_13, C2_13, C3_13},   // L54
  {1, C1_14, C2_14, C3_14},   // L55
  {1, C1_15, C2_15, C3_15},   // L56
  {1, C1_16, C2_16, C3_16},   // L57
  {2, C9_4, C8_4, C7_4},      // L58
  {2, C9_5, C8_5, C7_5},      // L59

  {0, C6_9, C5_9, C4_9},      // L60
  {0, C6_10, C5_10, C4_10},   // L61
  {0, C6_11, C5_11, C4_11},   // L62
  {0, C6_14, C5_14, C4_14},   // L63
  {0, C6_15, C5_15, C4_15},   // L64
  {0, C6_16, C5_16, C4_16},   // L65
  {1, C9_10, C8_10, C7_10},   // L66
  {1, C6_9, C5_9, C4_9},      // L67
  {1, C6_10, C5_10, C4_10},   // L68
  {1, C6_11, C5_11, C4_11},   // L69
  {1, C6_14, C5_14, C4_14},   // L70
  {1, C6_15, C5_15, C4_15},   // L71
  {1, C6_16, C5_16, C4_16},   // L72
  {2, C9_6, C8_6, C7_6},      // L73

  {0, C9_9, C8_9, C7_9},      // L74
  {0, C9_10, C8_10, C7_10},   // L75
  {0, C9_11, C8_11, C7_11},   // L76
  {0, C9_12, C8_12, C7_12},   // L77
  {0, C9_13, C8_13, C7_13},   // L78
  {0, C9_14, C8_14, C7_14},   // L79
  {1, C9_11, C8_11, C7_11},   // L80
  {1, C9_12, C8_12, C7_12},   // L81
  {1, C9_13, C8_13, C7_13},   // L82
  {1, C9_14, C8_14, C7_14},   // L83
  {2, C1_6, C2_6, C3_6},      // L84
  {2, C1_7, C2_7, C3_7},      // L85
  {2, C1_8, C2_8, C3_8},      // L86
 };

 led_config_t g_led_config = { {
     {  0,      1,      2,      3,      4,      5,      6,      7,      8,      9,      10,     11,     12,     13,     14     },
     {  15,     16,     17,     18,     19,     20,     NO_LED, 21,     22,     23,     24,     25,     26,     27,     28     },
     {  29,     30,     31,     32,     33,     34,     35,     36,     37,     38,     39,     40,     41,     42,     43     },
     {  44,     45,     46,     47,     48,     49,     50,     51,     52,     53,     54,     55,     56,     57,     58     },
     {  59,     60,     61,     62,     63,     64,     65,     66,     67,     68,     69,     70,     71,     72,     NO_LED },
     {  73,     74,     75,     NO_LED, 76,     77,     78,     79,     NO_LED, 80,     81,     82,     83,     84,     85     }
 }, {
 		{0,0},  {16,0},  {30,0},  {43,0},  {56,0},  {72,0},  {85,0},   {99,0},   {112,0},  {128,0},  {141,0},  {154,0},  {167,0},  {190,0},  {216,0},
 		{0,13}, {16,13}, {32,12}, {49,14}, {66,16}, {82,20},           {102,20}, {118,16}, {134,14}, {150,12}, {167,13}, {184,13}, {197,13}, {216,13},
 		{0,26}, {15,26}, {31,23}, {47,24}, {63,28}, {78,30}, {105,30}, {120,28}, {136,24}, {152,23}, {168,26}, {184,26}, {197,26}, {210,26}, {224,26},
 		{0,37}, {15,37}, {30,33}, {45,35}, {60,37}, {75,40}, {92,43},  {108,40}, {124,37}, {138,35}, {153,33}, {168,37}, {184,37}, {203,37}, {224,37},
 		{0,48}, {14,48}, {29,44}, {43,46}, {57,48}, {72,50}, {92,53},  {112,50}, {126,48}, {141,46}, {155,44}, {169,48}, {184,48}, {210,48},
 		{0,58}, {14,58}, {34,58},          {61,61}, {83,64}, {100,64}, {122,61},           {149,58}, {170,58}, {184,58}, {197,58}, {210,58}, {224,58}
 }, {
     4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4,    4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,
     4, 4, 4,    4, 4, 4, 4,    4, 4, 4, 1, 1, 1
 } };


bool rgb_matrix_indicators_kb(void) {
    if (!rgb_matrix_indicators_user()) {
        return false;
    }
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(44, 0xFF, 0xFF, 0xFF);
    }
    else if (layer_state_is(1)) {
        rgb_matrix_set_color(0, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(1, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(2, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(3, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(4, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(5, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(6, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(7, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(8, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(9, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(10, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(11, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(12, 0x00, 0xFF, 0x00);

        rgb_matrix_set_color(15, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(16, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(17, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(18, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(19, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(20, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(21, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(22, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(23, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(24, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(25, 0x00, 0xFF, 0x00);

        rgb_matrix_set_color(50, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(65, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(77, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(78, 0x00, 0xFF, 0x00);

        rgb_matrix_set_color(73, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(74, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(75, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(76, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(79, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(80, 0x00, 0xFF, 0x00);
        rgb_matrix_set_color(81, 0x00, 0xFF, 0x00);

    }
    else if (layer_state_is(2)) {
        rgb_matrix_set_color(6,  0x00, 0x00, 0xFF);
        rgb_matrix_set_color(7,  0x00, 0x00, 0xFF);

        rgb_matrix_set_color(50, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(65, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(77, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(78, 0x00, 0x00, 0xFF);
    }
    else if (layer_state_is(3)) {
        rgb_matrix_set_color(58, 0xFF, 0xFF, 0xFF);

        rgb_matrix_set_color(50, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(65, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(77, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(78, 0xFF, 0xFF, 0xFF);
    }
    else if (layer_state_is(4)) {
        rgb_matrix_set_color(50, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(65, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(77, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(78, 0xFF, 0xFF, 0xFF);
    }
    else if (layer_state_is(5)) {
        rgb_matrix_set_color(41, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(42, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(43, 0xFF, 0xFF, 0xFF);

        rgb_matrix_set_color(57, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(58, 0xFF, 0x00, 0x00);

        rgb_matrix_set_color(50, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(65, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(77, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(78, 0xFF, 0xFF, 0xFF);
    }
    else if (layer_state_is(6)) {
        rgb_matrix_set_color(50, 0xFF, 0x00, 0x00);
        rgb_matrix_set_color(65, 0xFF, 0x00, 0x00);
        rgb_matrix_set_color(77, 0xFF, 0x00, 0x00);
        rgb_matrix_set_color(78, 0xFF, 0x00, 0x00);
    }
    else if (layer_state_is(7)) {
        rgb_matrix_set_color(57, 0xFF, 0xFF, 0xFF);

        rgb_matrix_set_color(50, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(65, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(77, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(78, 0xFF, 0xFF, 0xFF);
    }
    else if (layer_state_is(8)) {
        rgb_matrix_set_color(45, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(55, 0x00, 0x00, 0xFF);

        rgb_matrix_set_color(50, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(65, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(77, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(78, 0x00, 0x00, 0xFF);
    }
    else if (layer_state_is(9)) {
        rgb_matrix_set_color(74, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(75, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(76, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(77, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(78, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(79, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(80, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(81, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(82, 0x00, 0x00, 0xFF);
    }
    return true;
}

#endif
