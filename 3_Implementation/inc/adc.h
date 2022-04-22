/*
 * adc.h
 *
 * Created: 18-04-2022 21:59:08
 *  Author: Mukesh Pasi
 */ 

#ifndef __AVR_ATmega328__,
    #define __AVR_ATmega328__
#endif


#ifndef ADC_H_INCLUDED
#define ADC_H_INCLUDED

#include<avr/io.h>
#include<util/delay.h>

void initAdc(void);
uint16_t readAdc(uint16_t channel);

#endif /* ADC_H_INCLUDED*/