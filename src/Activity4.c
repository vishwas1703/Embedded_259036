/**
 * @file Activity4.c
 * @author Vishwas.H ()
 * @brief serial communication ports are initilised
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include<avr/interrupt.h>
#include "Activity4.h"
/**
 * @brief Baudrate and configuring enable pins
 * 
 * @param ubrr_value vlaue to choose baudrate as 9600 bps
 */
void USARTInit(uint16_t ubrr_value)
{

    UBRR0L=ubrr_value;
    UBRR0H=(ubrr_value>>8) & 0xFF;
    UCSR0C=(1<<UCSZ00)|(1<<UCSZ01);
    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}
/**
 * @brief function to write data into serial port
 * 
 * @param data data supposed to transmit
 */
void USARTWrite(char data)
{

    while(!(UCSR0A & (1<<UDRE0)))
    {
            //do nothing

    }
    UDR0=data;
}