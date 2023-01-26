/* File: led.h
 * Description: the interface of LED driver
 * Created: 1/17/2023 10:11:36 AM
 *  Author: Abd El-Rahman Anwer Kadah
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO/dio.h"

//Number or LEDs
#define NUMBER_OF_LEDS 8

//LED Ports and Pins
#define LED_1_PORT PORT_C
#define LED_1_PIN PIN0
#define LED_2_PORT PORT_C
#define LED_2_PIN PIN1
#define LED_3_PORT PORT_C
#define LED_3_PIN PIN2
#define LED_4_PORT PORT_C
#define LED_4_PIN PIN3
#define LED_5_PORT PORT_C
#define LED_5_PIN PIN4
#define LED_6_PORT PORT_C
#define LED_6_PIN PIN5
#define LED_7_PORT PORT_C
#define LED_7_PIN PIN6
#define LED_8_PORT PORT_C
#define LED_8_PIN PIN7

//Initialize the LED pin to be output
void LED_init(uint8_t ledPort, uint8_t ledPin);
void LED_on(uint8_t ledPort, uint8_t ledPin);
void LED_off(uint8_t ledPort, uint8_t ledPin);
void LED_toggle(uint8_t ledPort, uint8_t ledPin);




#endif /* LED_H_ */