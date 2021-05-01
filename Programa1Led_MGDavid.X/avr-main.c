/*
 * File:   avr-main.c
 * Author: David
 *
 * Created on 20 de abril de 2021, 09:23 PM
 */

#define F_CPU 10000000UL 
#include <xc.h>
#include <util/delay.h>

int main(void) {
    
    DDRB = 0x01;
    PORTB = 0b00000001;


    /* Replace with your application code */
    while (1) {
            PORTB = 0b00000001;
            _delay_ms(2000);
            PORTB = 0b00000000;
            _delay_ms(2000);
    }
}
