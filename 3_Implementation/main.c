/*
 * Seat Heater.c
 *
 * Created: 18-04-2022 21:30:01
 * Author : Mukesh Pasi
 */ 
#include "adc.h"
#include "disp.h"
#include "led.h"
#include "pwm.h"
#include <avr/io.h>


int main(void)
{
	peripheral_init();  /* initialise every peripherals */
	initAdc();          /* initialise the ADC to get PWM */
	initTimer0();       /* initialise 8 bit timer for interrupts */
	initTimer1();       /* initialise 16 bit timer to generate PWM wave */
	USARTinit(103);     /* calling UART funtion with UBRR value as 103 */

	uint16_t temp = 0;
	
	while(1)
	{
		if(ledSwitch())                 /* Function to Check whether both switches are ON or not */
		{
			ledState(LED_ON);           /* Turning ON LED */
			temp = readAdc(8);          /* Reading Potentiometer value through channel 8 of ADC */
			_delay_ms(100);
			pwmGen(temp);               /* Generating PWM wave with respect to ADC value */
			displayTemp(temp);          /* Displaying Temperature*/
		}
		else{
			ledState(LED_OFF);          /* Turning OFF LED */
			_delay_ms(100);
		}
	}

	return 0;           /* return 0 if programs ends successfully */
}

