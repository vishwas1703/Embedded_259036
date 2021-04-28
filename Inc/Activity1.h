#ifndef LED_H_INCLUDED
#define LED_H_INCLUDED
#include<avr/io.h>
/** \brief input and output ports are declared
 *
 *
 *
 *
 */

void initialise_ports(void)
{
    DDRB|=(1<<PB0);                                         //PB0 as output port
    DDRD&=~(1<<PD0);                                        //PD0 as input port
    PORTD|=(1<<PD0);                                        //PD0 set as internal pull up
    DDRD&=~(1<<PD2);                                        //PD2 as input port
    PORTD|=(1<<PD2);                                        //PD2 set as internal pull up
}
/** \brief LED connected to PORT B0 will glow
 *
 *
 */

void LED_PORTB0_HIGH(void)
{
    return PORTB |=(1<<PB0);
}
/** \brief LED connected to PORT B0 will turn low
 *
 *
 */

void LED_PORTB0_LOW(void)
{
     return PORTB&=~(1<<PB0);

}
#endif // LED_H_INCLUDED