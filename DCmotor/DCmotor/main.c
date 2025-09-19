/*
 * DCmotor.c
 *
 * Created: 14-09-2025 10:16:07
 * Author : LENOVO
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{	DDRB|=(1<<DDB5);
	DDRB|=(1<<DDB4);
	/* Replace with your application code */
	while (1)
	{
		PORTB|=(1<<PORTB5);
		PORTB&=~(1<<PORTB4);
		_delay_ms(3000);
		
		PORTB&=~(1<<PORTB5);
		PORTB&=~(1<<PORTB4);
		_delay_ms(5000);
		
		PORTB&=~(1<<PORTB5);
		PORTB|=(1<<PORTB4);
		_delay_ms(3000);
		
		
		PORTB&=~(1<<PORTB5);
		PORTB&=~(1<<PORTB4);
		_delay_ms(5000);
		
		
	}
}
