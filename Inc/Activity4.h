#ifndef AC4_HEADER
#define AC4_HEADER
/**
 * @file Activity4.h
 * @author Vishwas.H()
 * @brief functions of Activity4
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @brief assigns baudrate value
 * 
 */
void USARTInit(uint16_t);
/**
 * @brief function to write message into serial port
 * 
 */
void USARTWrite(char);

#endif