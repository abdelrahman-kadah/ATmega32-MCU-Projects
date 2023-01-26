/*
 * dio.h
 *
 * Created: 1/17/2023 9:56:43 AM
 *  Author: Abd El-Rahman Kadah
 */ 


#include "dio.h"


void DIO_initPort(uint8_t portNumber, uint8_t portDirection)
{
	switch(portNumber)
	{
		case 'A':
			if(portDirection == IN)
			{
				DDRA = 0x00;
			}
			else
			{
				DDRA = 0xFF;
			}
			break;
		case 'B':
			if(portDirection == IN)
			{
				DDRB = 0x00;
			}
			else
			{
				DDRB = 0xFF;
			}
			break;
		case 'C':
			if(portDirection == IN)
			{
				DDRC = 0x00;
			}
			else
			{
				DDRC = 0xFF;
			}
			break;
		case 'D':
			if(portDirection == IN)
			{
				DDRD = 0x00;
			}
			else
			{
				DDRD = 0xFF;
			}
			break;
	}
}

void DIO_writePort(uint8_t portNumber, uint8_t value)
{
	switch(portNumber)
	{
		case 'A':
			PORTA = value;
			break;
		case 'B':
			PORTB = value;
			break;
		case 'C':
			PORTC = value;
			break;
		case 'D':
			PORTD = value;
			break;
	}
}

void DIO_readPort(uint8_t portNumber, uint8_t* value)
{
	switch(portNumber)
	{
		case 'A':
			(*value) = PINA;
			break;
		case 'B':
			(*value) = PINB;
			break;
		case 'C':
			(*value) = PINC;
			break;
		case 'D':
			(*value) = PIND;
			break;
	}
}

void DIO_initPin(uint8_t portNumber, uint8_t pinNumber, uint8_t pinDirection)
{
	switch(portNumber)
	{
		case 'A':
			if(pinDirection == IN)
			{
				CLEAR_BIT(DDRA,pinNumber);
			}
			else
			{
				SET_BIT(DDRA, pinNumber);
			}
			break;
		case 'B':
			if(pinDirection == IN)
			{
				CLEAR_BIT(DDRB,pinNumber);
			}
			else
			{
				SET_BIT(DDRB, pinNumber);
			}
			break;
		case 'C':
			if(pinDirection == IN)
			{
				CLEAR_BIT(DDRC,pinNumber);
			}
			else
			{
				SET_BIT(DDRC, pinNumber);
			}
			break;
		case 'D':
			if(pinDirection == IN)
			{
				CLEAR_BIT(DDRD,pinNumber);
			}
			else
			{
				SET_BIT(DDRD, pinNumber);
			}
			break;
	}
}

void DIO_writePin(uint8_t portNumber, uint8_t pinNumber, uint8_t value)
{
	switch(portNumber)
	{
		case 'A':
			if(value == HIGH)
			{
				SET_BIT(PORTA,pinNumber);
			}
			else
			{
				CLEAR_BIT(PORTA,pinNumber);
			}
			break;
		case 'B':
			if(value == HIGH)
			{
				SET_BIT(PORTB,pinNumber);
			}
			else
			{
				CLEAR_BIT(PORTB,pinNumber);
			}
			break;
		case 'C':
			if(value == HIGH)
			{
				SET_BIT(PORTC,pinNumber);
			}
			else
			{
				CLEAR_BIT(PORTC,pinNumber);
			}
			break;
		case 'D':
			if(value == HIGH)
			{
				SET_BIT(PORTD,pinNumber);
			}
			else
			{
				CLEAR_BIT(PORTD,pinNumber);
			}
			break;
	}
}

void DIO_readPin(uint8_t portNumber, uint8_t pinNumber, uint8_t* value)
{
	switch(portNumber)
	{
		case 'A':
			(*value) = READ_BIT(PINA,pinNumber);
			break;
		case 'B':
			(*value) = READ_BIT(PINB,pinNumber);
			break;
		case 'C':
			(*value) = READ_BIT(PINC,pinNumber);
			break;
		case 'D':
			(*value) = READ_BIT(PIND,pinNumber);
			break;
	}
}