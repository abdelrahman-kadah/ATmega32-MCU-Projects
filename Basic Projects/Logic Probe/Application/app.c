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
	LED_init(LED_2_PORT, LED_2_PIN);
	PROBE_init(PROBE_1_PORT, PROBE_1_PIN);
}

//Contains the application logic
void APP_start(void)
{
	uint8_t value = 0;
	while(1)
	{
		PROBE_read(PROBE_1_PORT, PROBE_1_PIN, &value);
		if(value == HIGH)
		{
			LED_off(LED_1_PORT, LED_1_PIN);
			LED_on(LED_2_PORT, LED_2_PIN);
		}	
		else
		{
			LED_off(LED_2_PORT, LED_2_PIN);
			LED_on(LED_1_PORT, LED_1_PIN);
		}	
	}
}