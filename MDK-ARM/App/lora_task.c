/*
* Change Logs:
* Date            Author          Notes
* 2024-4-12      ChenSihan     first version
* 2024-4-17     ChenSihan      bug update
*/
#include "lora_task.h"

/* USER CODE BEGIN Header_lora_task_entry */
/**
* @brief Function implementing the lora_task thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_lora_task_entry */
void lora_task_entry(void *argument)
{
  /* USER CODE BEGIN lora_task_entry */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END lora_task_entry */
}