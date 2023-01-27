/* File: led.h
 * Description: the interface of LED driver
 * Created: 1/17/2023 10:11:36 AM
 *  Author: Abd El-Rahman Anwer Kadah
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO/dio.h"


//LED Ports and Pins
#define LED_1_PORT PORT_C
#define LED_1_PIN PIN0

//Initialize the LED pin to be output
void LED_init(uint8_t ledPort, uint8_t ledPin);
void LED_on(uint8_t ledPort, uint8_t ledPin);
void LED_off(uint8_t ledPort, uint8_t ledPin);
void LED_toggle(uint8_t ledPort, uint8_t ledPin);




#endif /* LED_H_ */