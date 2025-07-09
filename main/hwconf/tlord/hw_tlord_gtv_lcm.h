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

#ifndef MAIN_HWCONF_TLORD_HW_GTV_LCM_H_
#define MAIN_HWCONF_TLORD_HW_GTV_LCM_H_

#include "driver/gpio.h"

#define HW_NAME						"TL GTV LCM"
#define HW_DEFAULT_ID				5

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

// NO UART
#define HW_NO_UART

#define LED_STATUS					20
#define LED_FRONT					6
#define LED_REAR					10
#define LED_BUTTON					7


// Functions
void hw_init(void);

#endif /* MAIN_HWCONF_TLORD_HW_GTV_LCM_H_ */
