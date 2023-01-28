/*
 * File: dice.c
 * Brief: The dice driver implementation
 * Created: 1/27/2023 4:20:31 PM
 *  Author: Abd El-Rahman Anwer Kadah
 */ 

#include "dice.h"

void DICE_init(uint8_t dicePort, uint8_t diceNibble)
{
	if(diceNibble == LOW_NIBBLE)
	{
		DIO_initPin(dicePort, PIN0, OUT);
		DIO_initPin(dicePort, PIN1, OUT);
		DIO_initPin(dicePort, PIN2, OUT);
		DIO_initPin(dicePort, PIN3, OUT);		
	}
	else
	{
		DIO_initPin(dicePort, PIN4, OUT);
		DIO_initPin(dicePort, PIN5, OUT);
		DIO_initPin(dicePort, PIN6, OUT);
		DIO_initPin(dicePort, PIN7, OUT);
	}
}
void DICE_write(uint8_t dicePort, uint8_t diceNibble, uint8_t diceValue)
{
	// Array of LED patterns for each dice value (0, 1, 2, 3, 4, 5, 6)
	static uint8_t numbers[7] = {0x00, 0x04, 0x02, 0x06, 0x09, 0x0D, 0x0B};
	uint8_t value;
	DIO_readPort(dicePort, &value);
	
	if(diceNibble == LOW_NIBBLE)
	{
		value &= 0xF0; //Getting the high nibble
		DIO_writePort(dicePort, (numbers[diceValue] | value));
	}
	else
	{
		value &= 0x0F; //Getting the low nibble
		DIO_writePort(dicePort, ((numbers[diceValue] << 4) | value));
	}
	
}