#include<avr/io.h>
void activity_1(void)
{
    initialise_ports();
    while(1)
    {
        if(!((PIND &(1<<PIND0)) | (PIND &(1<<PIND2)) ))         //if both switches are closed LED will glow, similar to AND gate
        {
           LED_PORTB0_HIGH();
        }
        else
        {
            LED_PORTB0_LOW();
        }
    }
}
