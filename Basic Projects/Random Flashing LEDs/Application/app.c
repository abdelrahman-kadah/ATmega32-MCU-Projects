/* File: app.c
 * Description: The application implementation
 * Created: 1/26/2023 3:07:06 PM
 * Author: Abd El-Rahman Anwer Kadah
 */ 

#include "app.h"

void APP_init(void)
{
	DIO_initPort(PORT_C, OUT);
}

//Contains the application logic
void APP_start(void)
{
	while(1)
	{
		DIO_writePort(PORT_C, (1 + (rand() % 255))); // Generate 1 - 255 number
		_delay_ms(250);
	}
}