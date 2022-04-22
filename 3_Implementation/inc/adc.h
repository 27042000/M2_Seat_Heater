/*
 * adc.h
 *
 * Created: 18-04-2022 21:59:08
 *  Author: Mukesh Pasi
 */ 

<<<<<<< HEAD
#ifndef __AVR_ATmega328__,
    #define __AVR_ATmega328__
#endif


#ifndef ADC_H_INCLUDED
#define ADC_H_INCLUDED

#include<avr/io.h>
=======
#ifndef ADC_H_INCLUDED
#define ADC_H_INCLUDED

#include <avr/io.h>
>>>>>>> 6c37bd9f22eeb96ba0ec320fc579e3d847d955c1
#include<util/delay.h>

void initAdc(void);
uint16_t readAdc(uint16_t channel);

#endif /* ADC_H_INCLUDED*/