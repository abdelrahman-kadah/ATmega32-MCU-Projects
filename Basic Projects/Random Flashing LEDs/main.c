/*
 *File: randomFlashingLEDs.c
 * Brief: In this project, eight LEDs are connected to PORTC of an ATmega32-type
          microcontroller, and the microcontroller is operated from an 8-MHz crystal. An integer
          random number is generated between 1 and 255 every second, and the LEDs are turned
          ON to indicate this number in binary. The net result is that the LEDs flash in a random
          fashion, and it is interesting to watch them flashing.
 * Created: 12/19/2022 7:53:00 PM
 * Author : Abd El-Rahman Kadah
 */ 
#include "Application/app.h"

int main(void)
{
	APP_init();
	APP_start();
}

