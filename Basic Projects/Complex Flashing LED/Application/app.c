/* File: app.c
 * Description: The application implementation
 * Created: 1/26/2023 3:07:06 PM
 * Author: Abd El-Rahman Anwer Kadah
 */ 

#include "app.h"

//Initialize the LED port and pin
void APP_init(void)
{
	LED_init(LED_1_PORT, LED_1_PIN);
}

//Contains the application logic
void APP_start(void)
{
	while(1)
	{
		for(uint8_t i = 0; i < NUMBER_OF_FLASHES; i++)
		{
			LED_on(LED_1_PORT, LED_1_PIN);
			_delay_ms(200);
			LED_off(LED_1_PORT, LED_1_PIN);
			_delay_ms(200);
		}
		_delay_ms(1000);
		
	}
}