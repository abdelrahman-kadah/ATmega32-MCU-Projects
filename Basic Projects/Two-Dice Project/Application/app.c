/* File: app.c
 * Description: The application implementation
 * Created: 1/26/2023 3:07:06 PM
 * Author: Abd El-Rahman Anwer Kadah
 */ 

#include "app.h"

//Initialize the DICE and the Button
void APP_init(void)
{
	DICE_init(DICE_1_PORT);
	DICE_init(DICE_2_PORT);
	BUTTON_init(BUTTON_1_PORT, BUTTON_1_PIN);
}

//Contains the application logic
void APP_start(void)
{
	uint8_t buttonValue;
	while(1)
	{
		BUTTON_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonValue);
		if(buttonValue == HIGH)
		{
			DICE_write(DICE_1_PORT, (1 + rand() % 6));
			DICE_write(DICE_2_PORT, (1 + rand() % 6));
			_delay_ms(500);
			DICE_write(DICE_1_PORT, 0); //Don't display anything on the dice
			DICE_write(DICE_2_PORT, 0); 
		}
	}
}