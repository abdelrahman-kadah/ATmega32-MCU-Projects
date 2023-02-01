/*
 * File: segment.c
 * Brief: The seven segment LED driver implementaion
 * Created: 2/1/2023 6:13:09 PM
 * Author: Abd El-Rahman Anwer Kadah
 * E-mail: a.an.kadah@gmail.com
 */ 

#include "segment.h"

void SEGMENT_init(uint8_t segmentPort)
{
	DIO_initPort(segmentPort, OUT);
}

void SEGMENT_write(uint8_t segmentPort, uint8_t segmentValue)
{
	static uint8_t numbers[10] = {0x3F, 0x30, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x67};
	if(SEGMENT_TYPE == COMMON_CATHODE)
	{
		DIO_writePort(segmentPort, numbers[segmentValue]);
	}
	else
	{
		DIO_writePort(segmentPort, ~numbers[segmentValue]);
	}
}