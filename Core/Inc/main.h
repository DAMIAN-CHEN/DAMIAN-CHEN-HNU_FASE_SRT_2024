/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#define LED_1_Pin GPIO_PIN_5
#define LED_1_GPIO_Port GPIOE
#define GEAR_UP_Pin GPIO_PIN_0
#define GEAR_UP_GPIO_Port GPIOF
#define GEAR_DOWN_Pin GPIO_PIN_1
#define GEAR_DOWN_GPIO_Port GPIOF
#define FAN_PIN_Pin GPIO_PIN_5
#define FAN_PIN_GPIO_Port GPIOF
#define CAN_RX_PIN_Pin GPIO_PIN_11
#define CAN_RX_PIN_GPIO_Port GPIOA
#define CAN_TX_PIN_Pin GPIO_PIN_12
#define CAN_TX_PIN_GPIO_Port GPIOA
#define LED_0_Pin GPIO_PIN_5
#define LED_0_GPIO_Port GPIOB
#define GEAR_UP_TRIGGER_Pin GPIO_PIN_0
#define GEAR_UP_TRIGGER_GPIO_Port GPIOE
#define GEAR_UP_TRIGGER_EXTI_IRQn EXTI0_IRQn
#define GEAR_DOWN_TRIGGER_Pin GPIO_PIN_1
#define GEAR_DOWN_TRIGGER_GPIO_Port GPIOE
#define GEAR_DOWN_TRIGGER_EXTI_IRQn EXTI1_IRQn
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
