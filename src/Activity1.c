/**
 * @file Activity1.c
 * @author vishwas.H ()
 * @brief functions of activity1
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<avr/io.h>

#include"Activity1.h"


void LED_PORTB0_HIGH(void)
{
   PORTB |=(1<<PB0);
}

/** \brief LED connected to PORT B0 will turn low
 *
 *
 */

void LED_PORTB0_LOW(void)
{
      PORTB&=~(1<<PB0);

}



/**
 * @brief Initialise of input output ports
 * 
 */
void initialise_ports_a1(void)
{
     /*configure LED pin*/
    DDRB|=(1<<PB0); 
    /*PD0 as input port*/                                        
    DDRD&=~(1<<PD2);  
    /*PD0 internal pull up*/                                      
    PORTD|=(1<<PD2);                                        
   /*PD2 as input port*/   
    DDRD&=~(1<<PD3);                                        
     /*PD2 internal pull up*/  
    PORTD|=(1<<PD3);                                        
}