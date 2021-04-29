/**
 * @file Activity2.c
 * @author vishwas.H ()
 * @brief functions of activity2
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @brief initialise MUX and ADC converter
 * 
 */
void InitADC()
{

    ADMUX=(1<<REFS0);                       //set vcc to Vref
    ADCSRA=(1<<ADEN)|(7<<ADPS0);            //enable converter and fix prescaler

}

/**
 * @brief start ADC conversion read ADC value and stop ADC conversion
 * 
 * @param ch to select channel
 * @return uint16_t ADC value
 */
uint16_t ReadADC(uint8_t ch)
{

    ADMUX&=0XF8;
    ch=ch & 0b00000111;                     //select the channel
    ADMUX|=ch;
    ADCSRA|=(1<<ADSC);                      //start conversion
    while(!(ADCSRA & (1<<ADIF)));           //continue process till conversion completes
    ADCSRA|=(1<<ADIF);                      //stop conversion
    return(ADC);                            //return 16 bit ADCH and ADCL
}

/**
 * @brief initialise  portB1 as output port
 * 
 */
void initialise_ports_a2(void)
{
     /*configure LED pin*/
    DDRB|=(1<<PB1);
}

/** \brief LED connected to PORT B1 will turn low
 *
 *
 */

void LED_PORTB1_LOW(void)
{
      PORTB&=~(1<<PB1);

}

/** \brief LED connected to PORT B1 will turn high
 *
 *
 */

void LED_PORTB1_HIGH(void)
{
    PORTB |=(1<<PB1);
}