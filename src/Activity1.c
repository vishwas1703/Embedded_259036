#include<avr/io.h>
void activity_1(void)
{
    /**
     * @brief Construct a new initialise ports object
     * @note which initialise all ports required for this project
     * 
     */
    initialise_ports();
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
