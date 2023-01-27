/*
 * File: complexFlashingLED.c
 * Brief: In this project an LEDs is connected to port pin RC0 of a PIC18F45K22 micro-controller and the
 *        micro-controller is operated from an 8 MHz crystal.
 *        The program flashes the LED continuously with the following pattern:
 *                               3 flashes with 200 ms delay between each flash
 *                               1 s delay
 * Created: 12/19/2022 7:44:20 PM
 * Author : abdel
 */ 

#include "Application/app.h"

int main(void)
{
	APP_init();
	APP_start();
}

