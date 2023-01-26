/*
 * registers.h
 * Created: 1/17/2023 9:47:06 AM
 *  Author: Abd El-Rahman Kadah
 */ 

/************************************************************************/
/*	                     DIO Registers                                  */
/************************************************************************/

#ifndef REGISTERS_H_
#define REGISTERS_H_

#include "types.h"

//Port A Registers
#define PINA (*(volatile uint8_t*) 0x39)
#define DDRA (*(volatile uint8_t*) 0x3A)
#define PORTA (*(volatile uint8_t*) 0x3B)

//Port B Registers
#define PINB (*(volatile uint8_t*) 0x36)
#define DDRB (*(volatile uint8_t*) 0x37)
#define PORTB (*(volatile uint8_t*) 0x38)

//Port C Registers
#define PINC (*(volatile uint8_t*) 0x33)
#define DDRC (*(volatile uint8_t*) 0x34)
#define PORTC (*(volatile uint8_t*) 0x35)

//Port D Registers
#define PIND (*(volatile uint8_t*) 0x30)
#define DDRD (*(volatile uint8_t*) 0x31)
#define PORTD (*(volatile uint8_t*) 0x32)

//SPI Registers
#define SPCR (*(volatile uint8_t*) 0x2D)
#define SPSR (*(volatile uint8_t*) 0x2E)
#define SPDR (*(volatile uint8_t*) 0x2F)

//Timer 0 Registers
#define TCNT0 (*(volatile uint8_t*) 0x52)
#define TCCR0 (*(volatile uint8_t*) 0x53)

//Timer Interrupt Control Registers
#define TIFR (*(volatile uint8_t*) 0x58)
#define TIMSK (*(volatile uint8_t*) 0x59)




#endif /* REGISTERS_H_ */