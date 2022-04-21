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

