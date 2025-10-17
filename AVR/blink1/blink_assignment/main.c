/*
 * blink_assignment.c
 *
 * Created: 10-09-2025 17:22:40
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>


int main(void)
{
	DDRD=0b00100000;
    /* Replace with your application code */
    while (1) 
    {
		DDRD=0b00100000;
		_delay_ms(1000);
		DDRD=0b00000000;
		_delay_ms(1000);
    }
}

