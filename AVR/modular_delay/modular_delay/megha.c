/*
 * megha.c
 *
 * Created: 26-09-2025 20:32:52
 *  Author: LENOVO
 */ 
#include <avr/io.h>
void timer0_init(void){
	TCCR0A|=(1<<WGM01);		//CTc mode
	OCR0A=249;			//setpoint equal to 250
	TCNT0=0;		//initial value of timer is 0
	TCCR0B|=(1<<CS00);
	TCCR0B|=(1<<CS01);		//presclr 64
	TIFR0|=(1<<OCF0A);		//writing to 1 ocf0a bit of tifr0 reg to reset it 	
}

void megha(uint16_t ms){		//defined megha
	
	timer0_init();
	while(ms--)		//creates delay for "ms" milliseconds
	{
		while(!(TIFR0&(1<<OCF0A))){
			
		}
		TIFR0|=(1<<OCF0A);		//writing to 1 ocf0a bit of tifr0 reg to reset it	
	}
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


