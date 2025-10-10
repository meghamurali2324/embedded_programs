/*
 * DCmotor_pass_delay.c
 *
 * Created: 12-09-2025 11:54:21
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>

// #define MOTOR_PORT PORTB
// #define MOTOR_DDR  DDRB
// #define MOTOR_PIN1 PORTB4
// #define MOTOR_PIN2 PORTB5
DDRB|=(1<<DDB4);
DDRB|=(1<<DDB5);

void cw(int delay_ms){
	PORTB|=(1<<PORTB4);
	PORTB&=~(1<<PORTB5);
	_delay_ms(delay_ms);
}

void stp(int delay_ms){
	PORTB&=~(1<<PORTB4);
	PORTB&=~(1<<PORTB5);
	_delay_ms(delay_ms);
}

void ccw(int delay_ms){
	PORTB&=~(1<<PORTB5);
	PORTB=(1<<PORTB4);
	_delay_ms(delay_ms);
}

int main(void)
{	DDRB|=(1<<PORTB4)|(1<<PORTB5);
    /* Replace with your application code */
    while (1) 
    {
		cw(3000);
		stp(3000);
		ccw(3000);
		stp(5000);
    }
}

