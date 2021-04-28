#ifndef LED_H_INCLUDED
#define LED_H_INCLUDED

/** \brief LED connected to PORT B0 will glow
 *
 *
 */
void LED_PORTB0_HIGH(void);

/** \brief LED connected to PORT B0 will turn low
 *
 *
 */

void LED_PORTB0_LOW(void);
/**
 * @brief Initialise of input output ports
 * 
 */
void initialise_ports_a1(void);

#endif // LED_H_INCLUDED