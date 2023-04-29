/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#define KEY_LEFT_Pin GPIO_PIN_0
#define KEY_LEFT_GPIO_Port GPIOA
#define KEY_UP_Pin GPIO_PIN_1
#define KEY_UP_GPIO_Port GPIOA
#define KEY_RIGHT_Pin GPIO_PIN_2
#define KEY_RIGHT_GPIO_Port GPIOA
#define KEY_DOWN_Pin GPIO_PIN_3
#define KEY_DOWN_GPIO_Port GPIOA
#define AD_THRUST_Pin GPIO_PIN_4
#define AD_THRUST_GPIO_Port GPIOA
#define AD_DIRECTION_Pin GPIO_PIN_5
#define AD_DIRECTION_GPIO_Port GPIOA
#define AD_BATV_Pin GPIO_PIN_5
#define AD_BATV_GPIO_Port GPIOC
#define AD_ELEV_Pin GPIO_PIN_0
#define AD_ELEV_GPIO_Port GPIOB
#define AD_AILE_Pin GPIO_PIN_1
#define AD_AILE_GPIO_Port GPIOB
#define NRF_IRQ_Pin GPIO_PIN_12
#define NRF_IRQ_GPIO_Port GPIOB
#define NRF_CSN_Pin GPIO_PIN_6
#define NRF_CSN_GPIO_Port GPIOC
#define NRF_CE_Pin GPIO_PIN_7
#define NRF_CE_GPIO_Port GPIOC
#define KEY_OK_Pin GPIO_PIN_8
#define KEY_OK_GPIO_Port GPIOC
#define KEY_CANCEL_Pin GPIO_PIN_9
#define KEY_CANCEL_GPIO_Port GPIOC
#define OLED_DC_Pin GPIO_PIN_12
#define OLED_DC_GPIO_Port GPIOC
#define OLED_RES_Pin GPIO_PIN_2
#define OLED_RES_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
