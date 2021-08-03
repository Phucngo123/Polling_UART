/*
 * main.c
 *
 *  Created on: Jul 24, 2021
 *      Author: phucngo6996
 */



#include <stdio.h>
#include <stdint.h>
#include <util/delay.h>
#include <avr/io.h>
#include <avr/Serial.h>

int main(){
  //Initialize for USART
  USART_init();
  while(1){
    //Send Char one by one with singel quote
    USART_send('P',0);
    USART_send('H',0);
    USART_send('U',0);
    USART_send('C',0);
    USART_send(' ',0);
    USART_send('D',0);
    USART_send('E',0);
    USART_send('P',0);
    USART_send(' ',0);
    USART_send('T',0);
    USART_send('R',0);
    USART_send('A',0);
    USART_send('I',0);
    USART_send('\n',0);
    //Send String with double quotes

    USART_putstring("Vodichvutru\n",0);
    //Delay for 1s
    _delay_ms(1000);
	}
}
