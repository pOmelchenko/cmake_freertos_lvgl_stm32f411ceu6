#include "main.h"
#include "cmsis_os.h"

#include "common.h"

void StartLedTask(void const * argument)
{
    /* USER CODE BEGIN StartLedTask */
    /* Infinite loop */
    for(;;)
    {
        xQueueReceive((QueueHandle_t) argument, &value, 0);
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        osDelay(value);
    }
    /* USER CODE END StartLedTask */
}
