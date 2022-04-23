# INTRODUCTION 
The heat control system is basically used to control the temperature of the car seat. When a user or the driver of the car sits on the car, the button sensor is activated. After that, the user gets to turn on the heater. The temperature sensor continues to monitor the temperature and sends analog values to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs the temperature value via serial communication. All the activities of the control system are done on a microcontroller called Atmega328.

## Research
 The temperature sensor continues to monitor the temperature and sends analog values to the microcontroller. Seat Heating is the device which control the heat of the seat by monitoring tempreature. As the quality of life improves, people have higher and higher requirements for comfort,the car heating pad have rapid heating, good control and adaptability, which can greatly improve the comfort of driver and passenger. At present, the temperature control of automobile heating pad is mostly realized through the construction of analog circuit or the control of single-chip computer, through the switch to control heating.
 
 ### Objective
 *  To detect person sitting in car with help of button sensors
 *  To get values from potentiometer
 *  To generate PWM signals based on the potentiometer value
 *  To display the temperature set by user
 ### Features
* The passenger's seating status and the Heater switch is shown using 2 switches.To indicate the success of this condition and to show Heater is ON, LED glows.
 *The sensing of the temperature is depicted with the help of a potentiometer.
* The analaog value from pot is converted to digital depending on the given limits with respect to voltage in terms of temperature.
* The output from this ADC in terms of PWM is shown in the oscilloscope.
* The data in terms of temperature is transmitted with the help of USART and shown in the Serial Monitor
* LED conected at the potentiometer terminal indicate change in resistance
## Swot Analysis 
#### Advanatge
* Help in monitoring the temperature 
* User friendly to use 
* Driver can Identify the temperature of seat
#### Disadvantage 
* Need time to time update 
* Potentiometer can show sometimes the error
* 
## HARDWARE

*	Atmega 328
*	Variable Resistor 1 kOhm
* Pair of 100 ohm Resistors	* Pair Of Switch
* CRO( To Show Temprature in Graph)
* Serial Monitor (Actual Temprature Value)
* LED(2)
* 5v DC Supply	Pair of Probe (Measure Terminal Voltage)
* GROUNDING

 ## DESCRIPTION 
### ATMEGA328
Microchip's ATmega328 is an 8-bit, 28-pin AVR Microcontroller that uses RISC architecture and includes a 32KB flash-type programme memory.
The Atmega328 microcontroller is found in the Arduino UNO, Arduino Pro Mini, and Arduino Nano boards.
It can function at voltages ranging from 3.3 to 5.5 volts, but we usually choose 5 volts as a standard.
Cost-effectiveness, low power consumption, programming lock for security, and true timer counter with independent oscillator are only a few of its outstanding qualities.
It's most commonly found in Embedded Systems. Take a look at these Real-Life Embedded System Examples; we can design all of them with this Microcontroller.
### LED - LIGHT EMITTING DIODE
LED stands for light emitting diode. LED lighting products produce light up to 90% more efficiently than incandescent light bulbs. How do they work. An electrical current passes through a microchip, which illuminates the tiny light sources we call LEDs and the result is visible light.

The high efficiency and directional nature of LEDs makes them ideal for many industrial uses. LEDs are increasingly common in street lights, parking garage lighting, walkway and other outdoor area lighting, refrigerated case lighting, modular lighting, and task lighting.

### FIXED VOLT
A fixed voltage regulator produces a fixed DC output voltage, which is either positive or negative. In other words, some fixed voltage regulators produce positive fixed DC voltage values, while others produce negative fixed DC voltage values.
 
### 4'W and 1'H
##### What 
Automatic Car  seat Heating.
##### Where
It can be used at car seat so that heat can be if present.
##### When
Mostly in the summer season.
##### How
It is used just work with one click on the sensor

# Circuit Design
![ckt design](https://user-images.githubusercontent.com/101061728/164390766-32f64462-ff8a-40a9-9688-3c644ea6f91e.PNG)
# Test Plan
### Table no: High Level test plan
| Test ID | Description |  I/P|  O/P|
| --- | --- | --- | ---- | 
| H_01 |  When both the Switches are open |Switch close|  Led Blink |
| H_02| (USART) communication transfer the data| 22  | 22 |
| H_03 | Potentiometer is at mid volt|3.3v   |29|
| H_04|Change in Potentiometer|5v| 33 degree| 


### Table no : Low Level test plan
| Test ID | Description | I/P|  O/P|
| --- | --- | --- | ---- |
| L_01 |  When only one switch is closer |1 switch is only closed| Led not blink|
| L_02| When Potentiometer is set at 0|0v |0 degree|
