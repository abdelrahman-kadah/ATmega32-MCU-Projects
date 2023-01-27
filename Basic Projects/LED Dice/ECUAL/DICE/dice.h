/*
 * File: dice.h
 * Brief: The dice driver interface
 * Created: 1/27/2023 4:20:21 PM
 *  Author: Abd El-Rahman Anwer Kadah
 */ 


#ifndef DICE_H_
#define DICE_H_

#include "../../MCAL/DIO/dio.h"

#define DICE_PORT PORT_C

void DICE_init(uint8_t dicePort);
void DICE_write(uint8_t dicePort, uint8_t diceValue);



#endif /* DICE_H_ */