#ifndef LED_H_INCLUDED
#define LED_H_INCLUDED

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