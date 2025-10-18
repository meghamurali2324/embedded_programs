/*
 * USART.c
 *
 * Created: 18-10-2025 16:36:43
 * Author : LENOVO
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void USART_init( ){
	UBRR0H = 0;
	UBRR0L =103;
	
	UCSR0B = (1<<TXEN0);
	
	UCSR0C = (1<<UCSZ01) |(1<<UCSZ00);
	
}
void USART_transmit(unsigned data){
	while (!(UCSR0A & (1<<UDRE0)));
	UDR0=data;
}



int main(void)
{ 
	USART_init();
    while (1) 
    {
		USART_transmit('A');
		_delay_ms(1000);
    }
}


