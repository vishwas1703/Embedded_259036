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


#include"Activity1.h"
#include<avr/io.h>
#include<avr/interrupt.h>


void LED_PORTC2_HIGH(void)
{
   PORTC |=(1<<PC2);
}

/** \brief LED connected to PORT B0 will turn low
 *
 *
 */

void LED_PORTC2_LOW(void)
{
      PORTC&=~(1<<PC2);

}



/**
 * @brief Initialise of input output ports
 * 
 */
void initialise_ports_a1(void)
{
     /*configure LED pin*/
    DDRC|=(1<<PC2); 
    /*PD2 as input port*/                                        
    DDRD&=~(1<<PD2);  
    /*PD2 internal pull up*/                                      
    PORTD|=(1<<PD2);                                        
   /*PD3 as input port*/   
    DDRD&=~(1<<PD3);                                        
     /*PD3 internal pull up*/  
    PORTD|=(1<<PD3);                                        
}