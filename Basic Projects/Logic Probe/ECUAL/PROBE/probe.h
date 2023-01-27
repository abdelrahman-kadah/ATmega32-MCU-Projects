/*
 * File: probe.h
 * Brief: PROBE Driver Interface
 * Created: 1/27/2023 1:49:36 PM
 *  Author: Abd El-Rahman Anwer Kadah
 */ 


#ifndef PROBE_H_
#define PROBE_H_

#define PROBE_1_PORT PORT_B
#define PROBE_1_PIN PIN0

#include "../../MCAL/DIO/dio.h"

void PROBE_init(uint8_t probePort, uint8_t probePin);
void PROBE_read(uint8_t probePort, uint8_t probePin, uint8_t* probeValue);



#endif /* PROBE_H_ */