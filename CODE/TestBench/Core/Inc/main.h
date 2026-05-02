/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32wbaxx_hal.h"
#include "app_conf.h"
#include "app_entry.h"
#include "app_common.h"
#include "app_debug.h"

#include "stm32wbaxx_ll_icache.h"
#include "stm32wbaxx_ll_tim.h"
#include "stm32wbaxx_ll_bus.h"
#include "stm32wbaxx_ll_cortex.h"
#include "stm32wbaxx_ll_rcc.h"
#include "stm32wbaxx_ll_system.h"
#include "stm32wbaxx_ll_utils.h"
#include "stm32wbaxx_ll_pwr.h"
#include "stm32wbaxx_ll_gpio.h"
#include "stm32wbaxx_ll_dma.h"

#include "stm32wbaxx_ll_exti.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);
void MX_ICACHE_Init(void);
void MX_RTC_Init(void);
void MX_RAMCFG_Init(void);
void MX_RNG_Init(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define usart1_tx_Pin GPIO_PIN_12
#define usart1_tx_GPIO_Port GPIOB
#define adc_clk_Pin GPIO_PIN_8
#define adc_clk_GPIO_Port GPIOA
#define gpio_in_Pin GPIO_PIN_7
#define gpio_in_GPIO_Port GPIOA
#define usart1_rx_Pin GPIO_PIN_6
#define usart1_rx_GPIO_Port GPIOA
#define gpio_out_Pin GPIO_PIN_5
#define gpio_out_GPIO_Port GPIOA
#define adc_drdy_Pin GPIO_PIN_1
#define adc_drdy_GPIO_Port GPIOA
#define spi3_sck_Pin GPIO_PIN_0
#define spi3_sck_GPIO_Port GPIOA
#define spi3_miso_Pin GPIO_PIN_9
#define spi3_miso_GPIO_Port GPIOB
#define spi3_mosi_Pin GPIO_PIN_8
#define spi3_mosi_GPIO_Port GPIOB
#define spi_cs2_Pin GPIO_PIN_15
#define spi_cs2_GPIO_Port GPIOC
#define spi_cs1_Pin GPIO_PIN_13
#define spi_cs1_GPIO_Port GPIOC
#define LED_Pin GPIO_PIN_7
#define LED_GPIO_Port GPIOB
#define swd_traces_Pin GPIO_PIN_3
#define swd_traces_GPIO_Port GPIOB
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define ant_logic_1_Pin GPIO_PIN_12
#define ant_logic_1_GPIO_Port GPIOA
#define ant_logic_2_Pin GPIO_PIN_11
#define ant_logic_2_GPIO_Port GPIOA
#define adc_start_Pin GPIO_PIN_9
#define adc_start_GPIO_Port GPIOA
#define adc_reset_Pin GPIO_PIN_14
#define adc_reset_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
