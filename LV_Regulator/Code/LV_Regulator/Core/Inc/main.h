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
#include "stm32f1xx_hal.h"

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

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define USART1_DIR_Pin GPIO_PIN_13
#define USART1_DIR_GPIO_Port GPIOC
#define DIAG_OK_Pin GPIO_PIN_2
#define DIAG_OK_GPIO_Port GPIOA
#define DIAG_ERR_Pin GPIO_PIN_3
#define DIAG_ERR_GPIO_Port GPIOA
#define RELEJ_Pin GPIO_PIN_0
#define RELEJ_GPIO_Port GPIOB
#define BOOT1_Pin GPIO_PIN_2
#define BOOT1_GPIO_Port GPIOB
#define INT_N_Pin GPIO_PIN_10
#define INT_N_GPIO_Port GPIOB
#define ADR1_Pin GPIO_PIN_11
#define ADR1_GPIO_Port GPIOB
#define ADR2_Pin GPIO_PIN_12
#define ADR2_GPIO_Port GPIOB
#define ADR3_Pin GPIO_PIN_13
#define ADR3_GPIO_Port GPIOB
#define ADR4_Pin GPIO_PIN_14
#define ADR4_GPIO_Port GPIOB
#define ADR5_Pin GPIO_PIN_15
#define ADR5_GPIO_Port GPIOB
#define DIAG_RUN_Pin GPIO_PIN_8
#define DIAG_RUN_GPIO_Port GPIOA
#define DIAG_TX_Pin GPIO_PIN_9
#define DIAG_TX_GPIO_Port GPIOA
#define DIAG_RX_Pin GPIO_PIN_10
#define DIAG_RX_GPIO_Port GPIOA
#define CE_N_Pin GPIO_PIN_15
#define CE_N_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
