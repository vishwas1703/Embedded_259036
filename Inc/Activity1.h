#ifndef LED_H_INCLUDED
#define LED_H_INCLUDED
#define read_D PIND

/**
 * @file Activity1.h
 * @author Vishwas.H ()
 * @brief contains io header to daclare ports and registers
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

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

void LED_PORTC2_HIGH(void);

void LED_PORTC2_LOW(void);

#endif // LED_H_INCLUDED