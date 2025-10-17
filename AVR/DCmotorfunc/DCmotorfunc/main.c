/*
 * DCmotorfunc.c
 *
 * Created: 11-09-2025 22:30:44
 * Author : LENOVO
 */ 


#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

#define MOTOR_PORT PORTB
#define MOTOR_DDR DDRB
#define MOTOR_PIN1 PB4
#define MOTOR_PIN2 PB5



void cw(){
	MOTOR_PORT|=(1<<MOTOR_PIN1);
	MOTOR_PORT&=~(1<<MOTOR_PIN2);
}
void stp(){
	MOTOR_PORT&=~(1<<MOTOR_PIN1);
	MOTOR_PORT&=~(1<<MOTOR_PIN2);
}
void ccw(){
	MOTOR_PORT&=~(1<<MOTOR_PIN1);
	MOTOR_PORT|=(1<<MOTOR_PIN2);
}

int main(void)
{
	MOTOR_DDR|=(1<<MOTOR_PIN1)|(1<<MOTOR_PIN2);

	/* Replace with your application code */
	
	while (1)
	{
		cw();
		_delay_ms(3000);
		
		stp();
		_delay_ms(3000);
		
		ccw();
		_delay_ms(3000);
		
		stp();
		_delay_ms(5000);
	}
}

