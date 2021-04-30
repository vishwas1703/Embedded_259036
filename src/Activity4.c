#include<avr/io.h>
#include<avr/interrupt.h>
#include "Activity4.h"

void USARTInit(uint16_t ubrr_value)
{

    UBRR0L=ubrr_value;
    UBRR0H=(ubrr_value>>8) & 0xFF;
    UCSR0C=(1<<UCSZ00)|(1<<UCSZ01);
    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}

void USARTWrite(char data)
{

    while(!(UCSR0A & (1<<UDRE0)))
    {


    }
    UDR0=data;
}