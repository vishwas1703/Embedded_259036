
/**
 * @file Activity3.c
 * @author Vishwas ()
 * @brief Timer and counter ports are initialised
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include<avr/interrupt.h>
#include"Activity3.h"

void initialise_ports_a3(void)
{
    TCCR1A |=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
    TCCR1B |=(1<<WGM12)|(1<<CS10)|(1<<CS11);
    DDRB|=(1<<PB1);
}