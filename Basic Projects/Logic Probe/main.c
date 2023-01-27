/*
 * File: logciProbe.cW
 * Brief: 
         This is a logic probe project. In this project 2 colored LEDs are connected to PORTC pins
         RC6 (RED) and RC7 (GREEN). In addion, RC0 is used as the probe input.
         If the logic probe is at logic 0 then the RED LED is turned ON. Otherwise, the GREEN LED is
         turned ON.
 * Created: 12/20/2022 4:29:44 PM
 * Author : abdel
 */ 

#include "Application/app.h"


int main(void)
{
	APP_init();
	APP_start();
}

