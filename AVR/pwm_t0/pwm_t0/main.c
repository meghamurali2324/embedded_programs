/*
 * pwm_t0.c
 *
 * Created: 24-09-2025 21:27:01
 * Author : LENOVO	
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD|=(1<<DDD6);
    /* Replace with your application code */
  
	
		TCCR0A|=(1<<WGM00);
		TCCR0A|=(1<<WGM01);
	
		TCCR0A|=(1<<COM0A1);
		TCCR0B|=(1<<CS01);
		TCCR0B|=(1<<CS00);
		OCR0A=100;
		while(1){}

}

