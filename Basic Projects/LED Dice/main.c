/*
 * File: ledDice.c
 * Brief: This is a simple dice project based on LEDs, a push-button switch, and a ATmega32-type
		   microcontroller operating with an 8-MHz crystal. 
		   As shown in the circuit diagram, the LEDs are organized such that when they turn ON, they
		   indicate the numbers as in a real dice. Operation of the project is as follows: Normally, the
		   LEDs are all OFF to indicate that the system is ready to generate a new dice number.
		   Pressing the switch generates a random dice number between 1 and 6 and displays on the
		   LEDs for 500 ms. After 500 ms, the LEDs turn OFF again.
 * Created: 12/20/2022 6:08:09 PM
 * Author : Abd El-Rahman Anwer Kadah
 */ 

#include "Application/app.h"

int main(void)
{
	APP_init();
	APP_start();

}

