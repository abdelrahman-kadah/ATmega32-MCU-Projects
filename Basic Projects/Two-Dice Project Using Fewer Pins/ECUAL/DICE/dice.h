/*
 * File: dice.h
 * Brief: The dice driver interface
 * Created: 1/27/2023 4:20:21 PM
 *  Author: Abd El-Rahman Anwer Kadah
 */ 


#ifndef DICE_H_
#define DICE_H_

#include "../../MCAL/DIO/dio.h"

#define DICE_1_PORT PORT_C
#define DICE_1_NIBBLE LOW_NIBBLE
#define DICE_2_PORT PORT_C
#define DICE_2_NIBBLE HIGH_NIBBLE

void DICE_init(uint8_t dicePort, uint8_t diceNibble);
void DICE_write(uint8_t dicePort, uint8_t diceNibble,uint8_t diceValue);



#endif /* DICE_H_ */