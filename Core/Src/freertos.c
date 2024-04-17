/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
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

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
typedef StaticTask_t osStaticThreadDef_t;
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
/* Definitions for defaultTask */
osThreadId_t defaultTaskHandle;
const osThreadAttr_t defaultTask_attributes = {
  .name = "defaultTask",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};
/* Definitions for fan_task */
osThreadId_t fan_taskHandle;
uint32_t fan_task_buffer[ 256 ];
osStaticThreadDef_t fan_task_control_block;
const osThreadAttr_t fan_task_attributes = {
  .name = "fan_task",
  .cb_mem = &fan_task_control_block,
  .cb_size = sizeof(fan_task_control_block),
  .stack_mem = &fan_task_buffer[0],
  .stack_size = sizeof(fan_task_buffer),
  .priority = (osPriority_t) osPriorityNormal,
};
/* Definitions for gear_task */
osThreadId_t gear_taskHandle;
uint32_t gear_task_buffer[ 256 ];
osStaticThreadDef_t gear_task_control_block;
const osThreadAttr_t gear_task_attributes = {
  .name = "gear_task",
  .cb_mem = &gear_task_control_block,
  .cb_size = sizeof(gear_task_control_block),
  .stack_mem = &gear_task_buffer[0],
  .stack_size = sizeof(gear_task_buffer),
  .priority = (osPriority_t) osPriorityNormal,
};
/* Definitions for lora_task */
osThreadId_t lora_taskHandle;
uint32_t lora_task_buffer[ 512 ];
osStaticThreadDef_t lora_task_control_block;
const osThreadAttr_t lora_task_attributes = {
  .name = "lora_task",
  .cb_mem = &lora_task_control_block,
  .cb_size = sizeof(lora_task_control_block),
  .stack_mem = &lora_task_buffer[0],
  .stack_size = sizeof(lora_task_buffer),
  .priority = (osPriority_t) osPriorityNormal,
};
/* Definitions for gear_conl_task */
osThreadId_t gear_conl_taskHandle;
uint32_t gear_conl_task_buffer[ 256 ];
osStaticThreadDef_t gear_conl_task_control_block;
const osThreadAttr_t gear_conl_task_attributes = {
  .name = "gear_conl_task",
  .cb_mem = &gear_conl_task_control_block,
  .cb_size = sizeof(gear_conl_task_control_block),
  .stack_mem = &gear_conl_task_buffer[0],
  .stack_size = sizeof(gear_conl_task_buffer),
  .priority = (osPriority_t) osPriorityNormal,
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void StartDefaultTask(void *argument);
void fan_task_entry(void *argument);
void gear_task_entry(void *argument);
void lora_task_entry(void *argument);
void gear_conl_task_entry(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of defaultTask */
  defaultTaskHandle = osThreadNew(StartDefaultTask, NULL, &defaultTask_attributes);

  /* creation of fan_task */
  fan_taskHandle = osThreadNew(fan_task_entry, NULL, &fan_task_attributes);

  /* creation of gear_task */
  gear_taskHandle = osThreadNew(gear_task_entry, NULL, &gear_task_attributes);

  /* creation of lora_task */
  lora_taskHandle = osThreadNew(lora_task_entry, NULL, &lora_task_attributes);

  /* creation of gear_conl_task */
  gear_conl_taskHandle = osThreadNew(gear_conl_task_entry, NULL, &gear_conl_task_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void *argument)
{
  /* USER CODE BEGIN StartDefaultTask */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END StartDefaultTask */
}

/* USER CODE BEGIN Header_fan_task_entry */
/**
* @brief Function implementing the fan_task thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_fan_task_entry */
__weak void fan_task_entry(void *argument)
{
  /* USER CODE BEGIN fan_task_entry */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END fan_task_entry */
}

/* USER CODE BEGIN Header_gear_task_entry */
/**
* @brief Function implementing the gear_task thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_gear_task_entry */
__weak void gear_task_entry(void *argument)
{
  /* USER CODE BEGIN gear_task_entry */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END gear_task_entry */
}

/* USER CODE BEGIN Header_lora_task_entry */
/**
* @brief Function implementing the lora_task thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_lora_task_entry */
__weak void lora_task_entry(void *argument)
{
  /* USER CODE BEGIN lora_task_entry */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END lora_task_entry */
}

/* USER CODE BEGIN Header_gear_conl_task_entry */
/**
* @brief Function implementing the gear_conl_task thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_gear_conl_task_entry */
__weak void gear_conl_task_entry(void *argument)
{
  /* USER CODE BEGIN gear_conl_task_entry */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END gear_conl_task_entry */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

