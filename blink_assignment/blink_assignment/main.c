/*
 * blink_assignment.c
 *
 * Created: 10-09-2025 17:31:50
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>


int main(void)
{
	DDRD=0b00001000;
    /* Replace with your application code */
    while (1) 
    {
		PORTD=0b00001000;
		_delay_ms(1000);
		PORTD=0b00000000;
		_delay_ms(1000);
    }
}

