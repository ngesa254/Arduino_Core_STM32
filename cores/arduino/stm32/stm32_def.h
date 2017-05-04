/*
 * <Description>
 *
 * Copyright (C) 2017, STMicroelectronics - All Rights Reserved
 * Author: YOUR NAME <> for STMicroelectronics.
 *
 * License type: GPLv2
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */
#ifndef _STM32_DEF_
#define _STM32_DEF_

#define USE_HAL_DRIVER
#ifdef STM32F0xx
#include "stm32f0xx.h"
#elif defined(STM32F1xx)
#include "stm32f1xx.h"
#elif defined(STM32F2xx)
#include "stm32f2xx.h"
#elif defined(STM32F3xx)
#include "stm32f3xx.h"
#elif defined(STM32F4xx)
#include "stm32f4xx.h"
#elif defined(STM32F7xx)
#include "stm32f7xx.h"
#elif defined(STM32L0xx)
#include "stm32l0xx.h"
#elif defined(STM32L1xx)
#include "stm32l1xx.h"
#elif defined(STM32L4xx)
#include "stm32l4xx.h"
#else
#error "STM32YYxx chip series is not defined in boards.txt."
#endif
#endif //_STM32_DEF_