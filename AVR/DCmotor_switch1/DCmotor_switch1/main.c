/*
 * DCmotor_switch1.c
 *
 * Created: 15-09-2025 22:12:49
 * Author : LENOVO
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{	DDRB|=(1<<DDB5);
	DDRB|=(1<<DDB4);
	DDRD&=~(1<<DDD2);
	/* Replace with your application code */
	while (1)
	{
		PORTD|=(1<<PORTD2);
		if(!(PIND &(1<<PIND2))){
			
			PORTB|=(1<<PORTB5);
			PORTB&=~(1<<PORTB4);
			_delay_ms(3000);//cw
			
			PORTB&=~(1<<PORTB5);
			PORTB&=~(1<<PORTB4);
			_delay_ms(5000);//stp
			
			PORTB&=~(1<<PORTB5);
			PORTB|=(1<<PORTB4);
			_delay_ms(3000);///ccw
			
			
			PORTB&=~(1<<PORTB5);
			PORTB&=~(1<<PORTB4);
			_delay_ms(5000);
		}
		else{
			
			PORTB&=~(1<<PORTB5);
			PORTB&=~(1<<PORTB4);//stop
			
			
		}
		
	}
}
