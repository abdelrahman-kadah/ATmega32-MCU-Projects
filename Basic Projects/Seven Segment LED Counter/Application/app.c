/* File: app.c
 * Description: The application implementation
 * Created: 1/26/2023 3:07:06 PM
 * Author: Abd El-Rahman Anwer Kadah
 */ 

#include "app.h"

void APP_init(void)
{
	SEGMENT_init(SEGMENT_1_PORT);
}

//Contains the application logic
void APP_start(void)
{
	while(1)
	{
		for(uint8_t counter = 0; counter < 10; counter++)
		{
			SEGMENT_write(SEGMENT_1_PORT, counter);
			_delay_ms(500);
		}
	}
}