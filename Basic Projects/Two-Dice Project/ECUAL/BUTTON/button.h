/*
 * button.h
 * Created: 1/18/2023 9:14:08 AM
 *  Author: abdel
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO/dio.h"


#define BUTTON_1_PORT PORT_B
#define BUTTON_1_PIN PIN0

void BUTTON_init(uint8_t buttonPort, uint8_t buttonPin);
void BUTTON_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t* value);




#endif /* BUTTON_H_ */