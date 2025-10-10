/*
 * blinkbitwase.c
 *
 * Created: 10-09-2025 20:21:55
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

		
		PORTB|=~(1<<PORTB5);
		PORTB&=~(1<<PORTB4);
		_delay_ms(3000);
		
		PORTB&=~(1<<PORTB5);
		PORTB|=(1<<PORTB4);
		_delay_ms(3000);
		
		
    }
}
