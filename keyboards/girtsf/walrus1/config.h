// Copyright 2024 girtsf (@girtsf)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 300U

#define SERIAL_DEBUG

#define DEBUG_MATRIX_SCAN_RATE

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

// Handedness is flashed to the bootloader
// #define EE_HANDS

// Handedness is set by USB connection
#define MASTER_LEFT

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
