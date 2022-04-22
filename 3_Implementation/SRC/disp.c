/*
 * disp.c
 *
 * Created: 18-04-2022 22:12:06
 *  Author: Mukesh Pasi
 */ 

#include "disp.h"

void USARTinit(uint16_t ubrr)
{

    UBRR0L = ubrr;
    UBRR0H = (ubrr>>8)&0x00ff;
    UCSR0C = (1<<UMSEL00) | (1<<UCSZ01) | (1<<UCSZ00);
    UCSR0B = (1<<RXEN0) | (1<<TXEN0) | (1<<RXCIE0) | (1<<TXCIE0);
}
void USARTwriteChar(char data)
{
    while(!(UCSR0A & (1<<UDRE0)))
    {
        //DO nothing
    }
    UDR0 = data;
}
void displayTemp(uint16_t value)
{
    if(value>0 && value<=200)
        {
            USARTwriteChar(20);                     // 20 degrees celsius 
            _delay_ms(100);
        }
        else if(value>=210 && value<=500)
        {           
            USARTwriteChar(25);                     // 25 degrees celsius 
            _delay_ms(100);
        }
        else if(value>=510 && value<=700)
        {
            USARTwriteChar(29);                     // 29 degrees celsius 
            _delay_ms(100);
        }
        else if(value>=710 && value<=1024)
        {
            USARTwriteChar(33);                     // 33 degrees celsius 
            _delay_ms(100);
        }
}

