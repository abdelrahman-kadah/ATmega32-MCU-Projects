/*
 * File: segment.h
 * Brief: The sevent-segment LED driver interface
 * Created: 2/1/2023 6:13:00 PM
 * Author: Abd El-Rahman Anwer Kadah
 * E-mail: a.an.kadah@gmail.com
 */ 


#ifndef SEGMENT_H_
#define SEGMENT_H_

#include "../../MCAL/DIO/dio.h"

#define COMMON_CATHODE 0
#define COMMON_ANODE 1
#define SEGMENT_1_PORT PORT_C
#define SEGMENT_TYPE COMMON_CATHODE

void SEGMENT_init(uint8_t segmentPort);
void SEGMENT_write(uint8_t segmentPort, uint8_t segmentValue);





#endif /* SEGMENT_H_ */