/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

 /**
  * 2017 Victor Perez Marlin for stm32f1 test
  * 2018 Modified by Pablo Crespo for Morpheus Board (https://github.com/pscrespo/Morpheus-STM32)
  * 2019 Modified by Roberto Mariani for JGAurora A5S A1 Board.
  */

/**
 * JGAurora A5S A1 Board pin assignments
 */

#ifndef __STM32F1__
  #error "Oops! Select an STM32F1 board in 'Tools > Board.'"
#endif

#define BOARD_NAME "JGAurora A5S A1 board"

// MACHINE_MODEL
#define A1                 0x01
#define A5S                0x02

// I2C EEPROM with 64K of space - AT24C64
#define I2C_EEPROM
#define E2END 0xFFFF

//
// Limit Switches
//
#if MACHINE_MODEL == A1
  // A1 use X_MAX_PIN to detect homing
  #define X_MIN_PIN        -1
  #define X_MAX_PIN        PC6
#else
  #define X_MIN_PIN        PC6
  #define X_MAX_PIN        -1
#endif
#define Y_MIN_PIN          PG8
#define Y_MAX_PIN          -1
#define Z_MIN_PIN          PG7
#define Z_MAX_PIN          -1

//
// Steppers
//
#define X_STEP_PIN         PD6
#define X_DIR_PIN          PD3
#define X_ENABLE_PIN       PG9

#define Y_STEP_PIN         PG12
#define Y_DIR_PIN          PG11
#define Y_ENABLE_PIN       PG13

#define Z_STEP_PIN         PG15
#define Z_DIR_PIN          PG14
#define Z_ENABLE_PIN       PB8

#define E0_STEP_PIN        PE2
#define E0_DIR_PIN         PB9
#define E0_ENABLE_PIN      PE3

#define E1_STEP_PIN        PE5
#define E1_DIR_PIN         PE4
#define E1_ENABLE_PIN      PE6

//
// Temperature Sensors
//
#define TEMP_0_PIN         PC2
#define TEMP_BED_PIN       PC1

//
// Heaters / Fans
//
#define HEATER_0_PIN       PA2
#define HEATER_BED_PIN     PA3

#define FAN_PIN            PA1

#define PS_ON_PIN          PA0
#define FIL_RUNOUT_PIN     PC7

//
// Connect the voice board module (myiic.h) - ATMLH712
//
//#define I2C_SCL            PB10    // is the correct constant to use?
//#define I2C_SDA            PB11    // is the correct constant to use?

//
// LCD
//
#define LCD_BACKLIGHT_PIN  PF11
#define FSMC_CS_PIN        PD7   // NE1
#define FSMC_RS_PIN        PF0   // A0

//
// Touch (ADS7846)
//
#define SPI1_NSS_PIN       PA4
#define SPI1_SCK_PIN       PA5
#define SPI1_MISO_PIN      PA6
#define SPI1_MOSI_PIN      PA7

//
// Winbond Flash (W28Q128)
//
#define SPI2_NSS_PIN       PB12
#define SPI2_SCK_PIN       PB13
#define SPI2_MISO_PIN      PB14
#define SPI2_MOSI_PIN      PB15

//
// SD Card
//
#define SDIO_D0            PC8
#define SDIO_D1            PC9
#define SDIO_D2            PC10
#define SDIO_D3            PC11
#define SDIO_CLK           PC12
#define SDIO_CMD           PD2
#define SD_DETECT_PIN      PF10

//
// Misc.
//
#define BEEPER_PIN         PC3
#define LED_PIN            PC13
#define SDSS               -1
