# Logic Probe
This project is a simple logic probe. A logic probe is used to indicate the logic status of an
unknown digital signal. In a typical application, a test lead (probe) is used to detect the
unknown signal, and two different color LEDs are used to indicate the logic status. If, for
example, the signal is logic 0, then the RED color LED is turned ON. If on the other hand
the signal is logic 1, then the GREEN LED is turned ON.

## Project Hardware
Port pin PB0 is used as the probe input. Port pins PC0 and PC1 are connected to RED LED and GREEN LED, respectively.
<img src="design.PNG" alt="Logic Probe Circuit">

## Static Architecture
The project consists of 4 layers:
1. Micrcontroller Layer which represents the ATmega32 microcontroller
2. Microcontroller Abstraction Layer (MCAL) which consists of one driver/module which is the DIO driver
3. Electronic Control Unit Abstraction Layer (ECUAL) which consists of two modules/drivers: LED and PROBE drivers
4. Application Layer which contains the application logic
<img src="static-architecture3.png" style="width: 500px; height: auto">

## Usage
There are two options to use the project:
1. Downlaod and install [Microship Studio](https://www.microchip.com/en-us/tools-resources/develop/microchip-studio), adding the project, then build to get the hex file so that you can use it on the simulation or the real target.
2. Download and install [AVR Build Toolchain](https://tinusaur.com/guides/avr-gcc-toolchain/) and build the project using the avr-gcc compiler or using makefile

## License
[MIT](https://choosealicense.com/licenses/mit/)
