/*
 * File: dice.c
 * Brief: The dice driver implementation
 * Created: 1/27/2023 4:20:31 PM
 *  Author: Abd El-Rahman Anwer Kadah
 */ 

#include "dice.h"

void DICE_init(uint8_t dicePort)
{
	DIO_initPort(dicePort, OUT);
}
void DICE_write(uint8_t dicePort, uint8_t diceValue)
{
	// Array of LED patterns for each dice value (0, 1, 2, 3, 4, 5, 6)
	static uint8_t numbers[7] = {0x00, 0x40, 0x24, 0x64, 0x1B, 0x5B, 0x3F};
	DIO_writePort(dicePort, numbers[diceValue]);
}