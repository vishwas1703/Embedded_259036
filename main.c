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

/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when both switch closed the LED will turn ON
 * @note PORTB0 is in sink config. i.e when any of switch is open the LED will turn OFF
 */
#include "Activity1.h"
 /**
  * @brief .h function declares header files
  * 
  */
int main()
{
    initialise_ports_a1();
    /**
     * @brief Construct a new activity 1 object
     *
     */
    
    while(1)
    {
        /**
         * @brief conditional opearator 
         * @note if both switches are closed LED will glow, similar to AND gate
         */
        if(!((PIND &(1<<PIND0)) | (PIND &(1<<PIND2)) ))   
        {
           LED_PORTB0_HIGH();
        }
        else
        {
            LED_PORTB0_LOW();
        }
    }

 return 0;
}
