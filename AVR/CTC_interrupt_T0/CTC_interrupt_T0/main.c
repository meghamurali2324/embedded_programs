/*
 * CTC_interrupt_T0.c
 *
 * Created: 01-10-2025 17:07:06
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>
uint16_t count=0;
ISR (TIMER0_COMPA_vect){
	count ++;
	if (count>=1250){
		PORTB^=(1<<PORTB5);
		count=0;
		
	}
}

int main(void)
{
	DDRB|=(1<<DDB5);
	TCCR0A|=(1<<WGM01);
	OCR0A=200;
	TCCR0B|=(1<<CS00)|(1<<CS01);
	TIMSK0|=(1<<OCIE0A);
	sei();
    while (1) 
    {
    }
}

