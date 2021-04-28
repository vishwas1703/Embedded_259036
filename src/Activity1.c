#include<avr/io.h>
#include"Activity1.h"
void activity_1(void)
{
    
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
}
