/*
 * File: Chasing LEDs.c
 * Description: In this project, eight LEDs are connected to PORTC of a ATmega32-type
				 microcontroller, and the microcontroller is operated from an 8-MHz crystal. When the
				power is applied to the microcontroller (or when the microcontroller is reset), the LEDs
				turn ON alternately in an anticlockwise manner where only one LED is ON at any time.
				 A 500-ms delay is used between each output so that the LEDs can be seen turning ON
				and OFF.
 * Created: 1/26/2023 1:57:47 PM
 * Author : Abd El-Rahman Anwer Kadah
 */ 

#include "Application/app.h"

int main(void)
{
	APP_init();
	APP_start();
}

