#ifndef AC2_HEADER
#define AC2_HEADER

/**
 * @brief Activity 2 header files
 * 
 */

/**
 * @brief Configures ADC register
 * 
 */
void InitADC();

/**
 * @brief ADC conversion initialise and returns ADC value
 * 
 */
uint16_t ReadADC(uint8_t);

/**
 * @brief LED to indicate heater is on or not
 * 
 */
void initialise_ports_a2(void);
void LED_PORTC3_HIGH(void);
void LED_PORTC3_LOW(void);
 #endif 