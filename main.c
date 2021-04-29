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


 /**
  * @brief contain macros and headers
  * 
  */
 #include "Activity1.h"
 #include "Activity2.h"
/**
 * @brief Main function where the code execution starts
 * 
 * @return  Return 0 if the program completes successfully
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
