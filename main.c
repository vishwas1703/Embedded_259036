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
  * @brief contain macros and headers
  * 
  */
int main(void)
{
    initialise_ports_a1();
    initialise_ports_a2();
    InitADC();
    uint16_t temp;
    while(1)
    {
        if(!(read_D &(1<<PIND2)))
        {
            LED_PORTB0_HIGH();
            if(!(read_D &(1<<PIND3)))

            {
                    temp=ReadADC(0);
                    if(temp<0b0000001101111111)
                    {
                        LED_PORTB1_HIGH();
                    }
                    else
                        {
                        LED_PORTB1_LOW();
                    }
                }

                else{
                    LED_PORTB1_LOW();
                }
        }

        else
        {
            LED_PORTB0_LOW();
            LED_PORTB1_LOW();
        }
    }

 return 0;
}
