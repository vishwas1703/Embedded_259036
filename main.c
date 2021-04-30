/**
 * @file main.c
 * @author Vishwas.H ()
 * @brief project to control LED by two switches
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */


 /**
  * @brief contain macros and headers
  * 
  */
#include<avr/io.h>
#include<avr/interrupt.h>
#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"
/**
 * @brief Main function where the code execution starts
 * 
 * @return  Return 0 if the program completes successfully
 */

int main(void)
{
    initialise_ports_a1();
    initialise_ports_a2();
    initialise_ports_a3();
    InitADC();
    USARTInit(103);
    uint16_t temp;
    int a=0;int b=0;int c=0;int d=0;int e=0;
    while(1)
    {
        if(!(PIND &(1<<PIND2)))
        {
            LED_PORTC2_HIGH();
            if(!(PIND &(1<<PIND3)))

            {
                    temp=ReadADC(0);
                    if(temp<895)
                    {
                        LED_PORTC3_HIGH();
                        if(temp>0  && temp<250)
                            {
                                OCR1A=950;
                                unsigned char data_value[]="TEMPERATURE IS BETWEEN -10 AND 0 DEG \n";
                                int i=0;
                                if(a==0)
                                {
                                while(data_value[i]!=0)
                              {

                               USARTWrite(data_value[i]);
                                i++;
                                a++;
                                b=0;c=0;d=0;e=0;
                            }
                                }
                            }
                            else if(temp>=250 && temp<500)
                            {
                                OCR1A=700;
                                 unsigned char data_value[]="TEMPERATURE IS BETWEEN 0 AND 10 DEG \n";
                                int i=0;

                                if(b==0)
                                {


                                    while(data_value[i]!=0)
                              {

                               USARTWrite(data_value[i]);
                                i++;
                                b++;a=0;c=0;d=0;e=0;
                            }
                            }
                            }
                            else if(temp>=500 && temp<750)
                            {
                                OCR1A=400;
                                 unsigned char data_value[]="TEMPERATURE IS BETWEEN 10 AND 20 DEG \n";
                                int i=0;
                               if(c==0)
                               {
                                   while(data_value[i]!=0)
                              {

                               USARTWrite(data_value[i]);
                                i++;
                                c++;a=0;b=0;d=0;e=0;
                            }
                            }
                            }
                            else if(temp>=750 && temp<894)
                            {
                                OCR1A=100;
                                 unsigned char data_value[]="TEMPERATURE IS BETWEEN 20 AND 25 DEG \n";
                                int i=0;
                                if(d==0)
                                {
                                while(data_value[i]!=0)
                              {

                               USARTWrite(data_value[i]);
                                i++;
                                d++;a=0;b=0;c=0;e=0;
                            }
                            }
                    }
                    }
                    else
                        {
                        LED_PORTC3_LOW();
                         OCR1A=50;
                                 unsigned char data_value[]="TEMPERATURE IS ABOVE 25 DEG \n";
                                int i=0;
                                if(e==0)
                                {
                                while(data_value[i]!=0)
                              {

                               USARTWrite(data_value[i]);
                                i++;
                                e++;a=0;b=0;c=0;d=0;
                            }
                            }

                        }
            }


                else
                    {
                    LED_PORTC3_LOW();
                    }
        }

        else
        {
            LED_PORTC2_LOW();
            LED_PORTC3_LOW();
        }
    }


 return 0;
}
