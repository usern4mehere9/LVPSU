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
#define Temperature_Cell1_Pin GPIO_PIN_6
#define Temperature_Cell1_GPIO_Port GPIOF
#define Temperature_Cell2_Pin GPIO_PIN_7
#define Temperature_Cell2_GPIO_Port GPIOF
#define Temperature_Cell3_Pin GPIO_PIN_8
#define Temperature_Cell3_GPIO_Port GPIOF
#define Temperature_Cell4_Pin GPIO_PIN_9
#define Temperature_Cell4_GPIO_Port GPIOF
#define Temperature_Cell5_Pin GPIO_PIN_10
#define Temperature_Cell5_GPIO_Port GPIOF
#define Temperature_Cell6_Pin GPIO_PIN_0
#define Temperature_Cell6_GPIO_Port GPIOC
#define Temperature_Cell7_Pin GPIO_PIN_1
#define Temperature_Cell7_GPIO_Port GPIOC
#define Voltage_Cell1_Pin GPIO_PIN_2
#define Voltage_Cell1_GPIO_Port GPIOC
#define Voltage_Cell2_Pin GPIO_PIN_3
#define Voltage_Cell2_GPIO_Port GPIOC
#define Voltage_Cell3_Pin GPIO_PIN_0
#define Voltage_Cell3_GPIO_Port GPIOA
#define Voltage_Cell4_Pin GPIO_PIN_1
#define Voltage_Cell4_GPIO_Port GPIOA
#define Voltage_Cell5_Pin GPIO_PIN_2
#define Voltage_Cell5_GPIO_Port GPIOA
#define Voltage_Cell6_Pin GPIO_PIN_3
#define Voltage_Cell6_GPIO_Port GPIOA
#define Voltage_Cell7_Pin GPIO_PIN_4
#define Voltage_Cell7_GPIO_Port GPIOA
#define Current_Cell1_Pin GPIO_PIN_5
#define Current_Cell1_GPIO_Port GPIOA
#define Current_Cell2_Pin GPIO_PIN_6
#define Current_Cell2_GPIO_Port GPIOA
#define Current_Cell3_Pin GPIO_PIN_7
#define Current_Cell3_GPIO_Port GPIOA
#define Current_Cell4_Pin GPIO_PIN_4
#define Current_Cell4_GPIO_Port GPIOC
#define Current_Cell5_Pin GPIO_PIN_5
#define Current_Cell5_GPIO_Port GPIOC
#define Current_Cell6_Pin GPIO_PIN_0
#define Current_Cell6_GPIO_Port GPIOB
#define Current_Cell7_Pin GPIO_PIN_1
#define Current_Cell7_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
