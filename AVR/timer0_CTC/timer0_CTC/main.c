
#define F_CPU 16000000UL
#include <avr/io.h>


int main(void)
{
	DDRB|=(1<<DDB5);
	TCCR0A|=(1<<WGM01);			//CTC MODE
	OCR0A=200;					//SET POINT EQUAL TO 200
	TCNT0=0;					//INITIAL VALUE
	TCCR0B|=(1<<CS00);			//NO prescaling
	TIFR0|=(1<<OCF0A);			//FLAG SET
    while (1) 
    {
		
    }
}

