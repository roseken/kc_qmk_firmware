/* Copyright 2020 QMK
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

#pragma once

#include_next <mcuconf.h>

#undef STM32_HSECLK
#define STM32_HSECLK 16000000U

#undef STM32_PLLM_VALUE
#define STM32_PLLM_VALUE 8
#undef STM32_PLLN_VALUE
#define STM32_PLLN_VALUE 168
#undef STM32_PLLP_VALUE
#define STM32_PLLP_VALUE 4
#undef STM32_PLLQ_VALUE
#define STM32_PLLQ_VALUE 7

/*
#undef WB32_PLLDIV_VALUE
#define WB32_PLLDIV_VALUE 2

#undef WB32_PLLMUL_VALUE
#define WB32_PLLMUL_VALUE 16

#undef WB32_USBPRE
#define WB32_USBPRE WB32_USBPRE_DIV2
*/
#undef WB32_I2C_USE_I2C1
#define WB32_I2C_USE_I2C1 TRUE
