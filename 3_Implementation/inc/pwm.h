/*
 * pwm.h
 *
 * Created: 18-04-2022 22:06:27
 *  Author: Mukesh Pasi
 */ 


#ifndef PWM_H_INCLUDED
#define PWM_H_INCULDED


#include<avr/io.h>
#include<util/delay.h>

void initTimer1(void);
void pwmGen(uint16_t value);


#endif /* PWM_H_INCLUDED */