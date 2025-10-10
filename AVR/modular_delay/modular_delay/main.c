/*
 * modular_delay.c
 *
 * Created: 26-09-2025 20:20:39
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include "megha.h"
#include <stdint.h>


int main(void)
{
	DDRB|=(1<<DDB5);

    while (1) 
    {
		PORTB^=(1<<PORTB5);
		megha(1000);	// i need to get 1000ms delay
    }
}

