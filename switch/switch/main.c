/*
 * switch.c
 *
 * Created: 10-09-2025 19:10:12
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>


int main(void)
{	DDRD=0b00001000;
	DDRC=0b00000000;
    /* Replace with your application code */
    while (1) 
    {
		if (PINC==0b00000001)
		{
			PORTD=0b00001000;
		}
		else{
			PORTD=0b00000000;
		}
    }
}

