/*
* Change Logs:
* Date            Author          Notes
* 2024-4-12      ChenSihan     first version
* 2024-4-17     ChenSihan      bug update
*/

#include "gear_conl_task.h"

/* USER CODE BEGIN Header_gear_conl_task_entry */
/**
* @brief Function implementing the gear_conl_task thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_gear_conl_task_entry */
void gear_conl_task_entry(void *argument)
{
  /* USER CODE BEGIN gear_conl_task_entry */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END gear_conl_task_entry */
}