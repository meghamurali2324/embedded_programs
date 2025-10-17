/*
 * Timer0_overflow_intrerrupt.c
 *
 * Created: 29-09-2025 20:48:11
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>
uint16_t count=0;
ISR(TIMER0_OVF_vect)		//interrupt service routine TIMER0_OVF_vect= IVT or ADDRESS
{
	if(count>=977)
	{
		PORTB^=(1<<PORTB5);
		count=0;
	}
	count++;
	
	}

int main(void)
{
	DDRB|=(1<<DDB5);
	TCCR0A=0;		//NORMAL MODE
	TCCR0B|=(1<<CS00)|(1<<CS01);	//64 PRESCALER
	TIMSK0|=(1<<TOIE0);	//ENABLING TIMER OVERFLOW INTERRUPT in normal mode
	sei();		//enabled interrupt 

    while (1) 
    {
    }
}

