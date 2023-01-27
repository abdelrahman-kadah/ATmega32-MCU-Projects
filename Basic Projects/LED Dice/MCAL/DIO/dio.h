/* File: dio.h
 * Description: The interface of DIO driver
 * Created: 1/17/2023 9:56:35 AM
 *  Author: Abd El-Rahman Kadah
 */ 


#ifndef DIO_H_
#define DIO_H_

#define F_CPU 8000000UL
#include <util/delay.h>

#include <stdint.h>

#include "../../Utilities/registers.h"
#include "../../Utilities/bit_manipulations.h"

//MCU Ports 
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

//MCU Pins for each Port
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

//Pins and Ports directions
#define IN 0
#define OUT 1

//Pins states
#define LOW 0
#define HIGH 1

void DIO_initPort(uint8_t portNumber, uint8_t portDirection);
void DIO_writePort(uint8_t portNumber, uint8_t value);
void DIO_readPort(uint8_t portNumber, uint8_t* value);
void DIO_initPin(uint8_t portNumber, uint8_t pinNumber, uint8_t pinDirection);
void DIO_writePin(uint8_t portNumber, uint8_t pinNumber, uint8_t value);
void DIO_readPin(uint8_t portNumber, uint8_t pinNumber, uint8_t* value);
void DIO_togglePin(uint8_t portNumber, uint8_t pinNumber);


#endif /* DIO_H_ */