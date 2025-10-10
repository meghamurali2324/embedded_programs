/*
 * INT0.c
 *
 * Created: 03-10-2025 21:42:18
 * Author : LENOVO
 */ 
#define F_CPU  16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

ISR (INT0_vect){
	PORTB^=(1<<PORTB5);
	_delay_ms(10000);
}
int main(void)
{
	DDRB|=(1<<DDB5);		//SET OUTPUT
	DDRB|=(1<<DDB4);
	DDRD&=~(1<<DDD2);		//SET INPUT
	PORTD|=(1<<PORTD2);		//SET PULL UUP RESISTOR
	
	EIMSK|=(1<<INT0);		//ENABLE INT0
	EICRA|=(1<<ISC01);		//ENABLE FALLING EDGE
	sei();		//enable interrupt
	    while (1) 
    {
		PORTB^=(1<<PORTB4);
		_delay_ms(2000);    
		}
}

