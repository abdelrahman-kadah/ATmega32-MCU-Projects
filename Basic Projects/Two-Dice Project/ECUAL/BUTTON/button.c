/*
 * button.c
 *
 * Created: 1/18/2023 9:13:53 AM
 *  Author: abdel
 */ 

#include "button.h"


void BUTTON_init(uint8_t buttonPort, uint8_t buttonPin)
{
	DIO_initPin(buttonPort, buttonPin, IN);
}

void BUTTON_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t* value)
{
	DIO_readPin(buttonPort, buttonPin, value);	
}