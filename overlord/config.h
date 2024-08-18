// Copyright 2024 
// ProtieusKeebs
// SPDX-License-Identifier: GPL-2.0+

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.

#ifdef COMBO_ENABLE
#    define COMBO_COUNT 3
#    define COMBO_TERM 200
#endif


#    define SPLIT_USB_DETECT
#    define USE_SERIAL
#    define SERIAL_USART_FULL_DUPLEX
#    define SERIAL_USART_TX_PIN GP28
#    define SERIAL_USART_RX_PIN GP29
#    define SERIAL_USART_PIN_SWAP
#    define MASTER_LEFT

// SPI
#    define SPI_DRIVER SPID1
#    define SPLIT_POINTING_ENABLE
#    define POINTING_DEVICE_RIGHT
#    define POINTING_DEVICE_CS_PIN GP9
#    define SPI_SCK_PIN GP10
#    define SPI_MISO_PIN GP12
#    define SPI_MOSI_PIN GP11

// PMW3360 settings
//#    define PMW3360_CPI 12000
//#    define PMW3360_CS_DIVISOR 8
//#    define POINTING_DEVICE_TASK_THROTTLE_MS 10
//#    define POINTING_DEVICE_ROTATION_180_RIGHT
//#    define POINTING_DEVICE_INVERT_X_RIGHT
#      define POINTING_DEVICE_INVERT_X
#      define POINTING_DEVICE_INVERT_Y
#      define POINTING_DEVICE_COMBINED
#      define POINTING_DEVICE_ROTATION_180
//#    define ROTATIONAL_TRANSFORM_ANGLE 97
//#    define MOUSE_EXTENDED_REPORT


// Mouse key speed and acceleration.
#    undef MOUSEKEY_DELAY
#    define MOUSEKEY_DELAY          0
#    undef MOUSEKEY_INTERVAL
#    define MOUSEKEY_INTERVAL       16
#    undef MOUSEKEY_WHEEL_DELAY
#    define MOUSEKEY_WHEEL_DELAY    0
#    undef MOUSEKEY_MAX_SPEED
#    define MOUSEKEY_MAX_SPEED      6
#    undef MOUSEKEY_TIME_TO_MAX
#    define MOUSEKEY_TIME_TO_MAX    64