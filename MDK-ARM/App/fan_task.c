/*
* Change Logs:
* Date            Author          Notes
* 2024-4-12      ChenSihan     first version
* 2024-4-17     ChenSihan      bug update
*/

#include "fan_task.h"

/* USER CODE BEGIN Header_fan_task_entry */
/**
* @brief Function implementing the fan_task thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_fan_task_entry */
void fan_task_entry(void *argument)
{
  /* USER CODE BEGIN fan_task_entry */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END fan_task_entry */
}