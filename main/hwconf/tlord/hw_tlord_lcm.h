/*
	Copyright 2022 Benjamin Vedder	benjamin@vedder.se

	This file is part of the VESC firmware.

	The VESC firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The VESC firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef MAIN_HWCONF_TLORD_HW_LCM_H_
#define MAIN_HWCONF_TLORD_HW_LCM_H_

#include "driver/gpio.h"

#define HW_NAME						"Twilight Lord LCM"
#define HW_DEFAULT_ID				55


#define HW_INIT_HOOK()				hw_init()

// Bluetooth Mode
#define CONF_BLE_MODE 1

// Name
#define CONF_BLE_NAME "TL LCM"

// NO LEDs
#define LED_RED_ON()
#define LED_RED_OFF()				
#define LED_BLUE_ON()
#define LED_BLUE_OFF()

// CAN
#define CAN_TX_GPIO_NUM				1
#define CAN_RX_GPIO_NUM				0

// SD-card
#define SD_PIN_MOSI					4
#define SD_PIN_MISO					6
#define SD_PIN_SCK					5
#define SD_PIN_CS					7

// NO UART
#define HW_NO_UART

#define LED1					    20
#define LED2					    21
#define LED3					    2
#define LED4					    3

//I2C temp/humidity sensor
#define I2C_SDA						10
#define I2C_SCL						8

// Functions
void hw_init(void);

#endif /* MAIN_HWCONF_TLORD_HW_LCM_H_ */
