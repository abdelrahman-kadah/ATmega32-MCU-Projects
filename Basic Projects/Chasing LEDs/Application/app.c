/* File: app.c
 * Description: The application implementation
 * Created: 1/26/2023 3:07:06 PM
 * Author: Abd El-Rahman Anwer Kadah
 */ 

#include "app.h"

//Initialize the LED ports and pins
void APP_init(void)
{
	LED_init(LED_1_PORT, LED_1_PIN);
	LED_init(LED_2_PORT, LED_2_PIN);
	LED_init(LED_3_PORT, LED_3_PIN);
	LED_init(LED_4_PORT, LED_4_PIN);
	LED_init(LED_5_PORT, LED_5_PIN);
	LED_init(LED_6_PORT, LED_6_PIN);
	LED_init(LED_7_PORT, LED_7_PIN);
	LED_init(LED_8_PORT, LED_8_PIN);
}

//Contains the application logic
void APP_start(void)
{
	uint8_t ledPorts[NUMBER_OF_LEDS] = {LED_1_PORT, LED_2_PORT, LED_3_PORT, LED_4_PORT, LED_5_PORT, LED_6_PORT, LED_7_PORT, LED_8_PORT};
	uint8_t ledPins[NUMBER_OF_LEDS] = {LED_1_PIN, LED_2_PIN, LED_3_PIN, LED_4_PIN, LED_5_PIN, LED_6_PIN, LED_7_PIN, LED_8_PIN};
	while(1)
	{
		for(uint8_t i = 0; i < NUMBER_OF_LEDS; i++)
		{
			LED_on(ledPorts[i], ledPins[i]);
			_delay_ms(500);
			LED_off(ledPorts[i], ledPins[i]);
		}
	}
}