/**
 * @file main.c
 * @author Vishwas.H ()
 * @brief project to control LED by two switches
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include "Activity1.h"
/**
 * @brief Initialise of input output ports
 * 
 */
void initialise_ports(void)
{
     /*configure LED pin*/
    DDRB|=(1<<PB0); 
    /*PD0 as input port*/                                        
    DDRD&=~(1<<PD0);  
    /*PD0 internal pull up*/                                      
    PORTD|=(1<<PD0);                                        
   /*PD2 as input port*/   
    DDRD&=~(1<<PD2);                                        
     /*PD2 internal pull up*/  
    PORTD|=(1<<PD2);                                        
}
/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when both switch closed the LED will turn ON
 * @note PORTB0 is in sink config. i.e when any of switch is open the LED will turn OFF
 */
int main()
{
    /**
     * @brief Construct a new activity 1 object
     *
     */
    activity_1();
 return 0;
}
