#ifndef LED_H_INCLUDED
#define LED_H_INCLUDED

/** \brief LED connected to PORT B0 will glow
 *
 *
 */
uint8_t LED_PORTB0_HIGH(void)
{
    return PORTB |=(1<<PB0);
}
/** \brief LED connected to PORT B0 will turn low
 *
 *
 */

uint8_t LED_PORTB0_LOW(void)
{
     return PORTB&=~(1<<PB0);

}
#endif // LED_H_INCLUDED