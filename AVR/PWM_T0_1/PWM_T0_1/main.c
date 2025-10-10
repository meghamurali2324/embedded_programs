/*
 * PWM_T0_1.c
 *
 * Created: 24-09-2025 22:05:40
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD|=(1<<DDD6);
	TCCR0A|=(1<<WGM00);
	TCCR0A|=(1<<WGM01);
	TCCR0A|=(1<<COM0A1);
	TCCR0B|=(1<<CS00);
	TCCR0B|=(1<<CS01);
	
	
    while (1) 
    {
		for(uint8_t duty=0;duty<255;duty++){
		OCR0A=duty;
		_delay_ms(10);
	}
	for(uint8_t duty=255;duty>0;duty--){
		OCR0A=duty;
		_delay_ms(10);
	}
	
		
		
			
    }
}

