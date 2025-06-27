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

#include "hw_tlord_lcm.h"

void hw_init(void) {

    gpio_config_t gpconf = {0};

	gpio_set_level(LED1, 0);
    gpio_set_level(LED2, 0);
    gpio_set_level(LED3, 0);
    gpio_set_level(LED4, 0);

    gpconf.pin_bit_mask = BIT(LED1) | BIT(LED2) | BIT(LED3)
		| BIT(LED4);
	gpconf.mode         = GPIO_MODE_OUTPUT;
	gpconf.pull_down_en = GPIO_PULLDOWN_DISABLE;
	gpconf.pull_up_en   = GPIO_PULLUP_DISABLE;
	gpio_config(&gpconf);
}
