/*
 * File: probe.c
 * Brief: PROBE Driver Implementation
 * Created: 1/27/2023 1:49:51 PM
 *  Author: Abd El-Rahman Anwer Kadah
 */ 

#include "probe.h"

void PROBE_init(uint8_t probePort, uint8_t probePin)
{
	DIO_initPin(probePort, probePin, IN);
}
void PROBE_read(uint8_t probePort, uint8_t probePin, uint8_t* probeValue)
{
	DIO_readPin(probePort, probePin, probeValue);
}