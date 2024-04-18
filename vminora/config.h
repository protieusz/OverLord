/*
Copyright 2023 Sadek Baroudi <sadekbaroudi@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 10

// wiring of each half
#define MATRIX_ROW_PINS { GP11, GP10, GP9, GP8 }
#define MATRIX_COL_PINS { GP28, GP27, GP26, GP15, GP14 }

// VIK pin config
#define VIK_SPI_DRIVER    SPID0
#define VIK_SPI_SCK_PIN   GP6
#define VIK_SPI_MOSI_PIN  GP7
#define VIK_SPI_MISO_PIN  GP4
#define VIK_SPI_CS        GP5
#define VIK_I2C_DRIVER    I2CD1
#define VIK_I2C_SDA_PIN   GP2
#define VIK_I2C_SCL_PIN   GP3
#define VIK_GPIO_1        GP13
#define VIK_GPIO_2        GP29
#define VIK_WS2812_DI_PIN GP0

// Split config
#define SERIAL_PIO_USE_PIO1
#define SERIAL_USART_TX_PIN GP1     // USART TX pin

#define WS2812_DI_PIN GP0

#ifdef VIK_TRACKBALL_ENABLE
    #define POINTING_DEVICE_LEFT
#endif

//#include "keyboards/fingerpunch/src/config_post.h"