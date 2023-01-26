/*
 * File: led.c
 * Description: the LED driver implementation
 * Created: 1/17/2023 10:12:10 AM
 *  Author: abdel
 */ 

#include "led.h"

void LED_init(uint8_t ledPort, uint8_t ledPin)
{
	DIO_initPin(ledPort, ledPin, OUT);
}

void LED_on(uint8_t ledPort, uint8_t ledPin)
{
	DIO_writePin(ledPort, ledPin, HIGH);
}

void LED_off(uint8_t ledPort, uint8_t ledPin)
{
	DIO_writePin(ledPort, ledPin, LOW);
}