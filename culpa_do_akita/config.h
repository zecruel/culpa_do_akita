// Copyright 2022 zecruel (@zecruel)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

// Matrix Assignments
#define MATRIX_ROWS 10 //Rows are doubled-up
#define MATRIX_COLS 5

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define SPLIT_HAND_PIN B11

#define MATRIX_COL_PINS { B3, B4, B7, B5, B6 }
#define MATRIX_ROW_PINS { B8, B15, A8, A15, B9}

#define MATRIX_ROW_PINS_RIGHT { B3, A15, B14, A8, B15}
#define MATRIX_COL_PINS_RIGHT { B12, B4, B5, B6, B13}


// COL2ROW, ROW2COL
#define DIODE_DIRECTION ROW2COL
//#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN A9     // USART TX pin
#define SERIAL_USART_RX_PIN A10     // USART RX pin

