/*
 * Copyright (C) 2014 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser General
 * Public License v2.1. See the file LICENSE in the top level directory for more
 * details.
 */

/**
 * @ingroup     boards_avsextrem
 * @{
 *
 * @file
 * @brief       Peripheral configuration for the avsextrem
 *
 * @author      Hauke Petersen <hauke.petersen@fu-berlin.de>
 */

#ifndef PERIPH_CONF_H
#define PERIPH_CONF_H

#include "lpc2387.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   Clock configuration
 * @{
 */
#define CLOCK_CORECLOCK     (72000000U)         /* this board runs with 72MHz */

#define CLOCK_PCLK          (CLOCK_CORECLOCK)
/** @} */

/**
 * @brief   Timer configuration, select a number from 1 to 4
 * @{
 */
#define TIMER_NUMOF         (1U)
/** @} */

/**
 * @brief Real Time Clock configuration
 */
#define RTC_NUMOF           (1)

/**
 * @brief uart configuration
 */
#define UART_NUMOF          (1)
#define UART_0_EN           (1)

/**
 * @brief SPI configuration
 */
#define SPI_NUMOF           (1)
#define SPI_0_EN            (1)

#ifdef __cplusplus
}
#endif

#endif /* PERIPH_CONF_H */
/** @} */
