# LED Dice
In this project 7 LEDs are connected to PORTC of a ATmega32 microcontroller and the
microcontroller is operated from an 8 MHz crystal. The LEDs are organized as the faces
of a real dice. When a push-button switch connected to RB0 is pressed a dice pattern is
displayed on the LEDs. The display remains in this state for 500 ms and after this period
the LEDs all turn OFF to indicate that the system is ready for the button to be pressed again

## Project Hardware
<img src="design.PNG" alt="LED Dice Circuit">

## Static Architecture
The project consists of 4 layers:
1. Micrcontroller Layer which represents the ATmega32 microcontroller
2. Microcontroller Abstraction Layer (MCAL) which consists of one driver/module: the DIO driver
3. Electronic Control Unit Abstraction Layer which consits of two drivers/modules The BUTTON and DICE drivers
4. Application Layer which contains the application logic
<img src="static-architecture.png" style="width: 500px; height: auto">

## Usage
There are two options to use the project:
1. Downlaod and install [Microship Studio](https://www.microchip.com/en-us/tools-resources/develop/microchip-studio), adding the project, then build to get the hex file so that you can use it on the simulation or the real target.
2. Download and install [AVR Build Toolchain](https://tinusaur.com/guides/avr-gcc-toolchain/) and build the project using the avr-gcc compiler or using makefile

## License
[MIT](https://choosealicense.com/licenses/mit/)
