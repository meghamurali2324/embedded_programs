/*
 * ADC.c
 *
 * Created: 13-10-2025 20:44:48
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"



void ADC_init(void){
	ADMUX|=(1<<REFS0);		// AVCC (5V), INPUT=ADC0
	ADCSRA|=(1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);		//ENABLE ADC
}

uint16_t ADC_read(uint8_t channel){
	
	channel &= 0x07;			//		limit 0-7
	ADMUX=(ADMUX & 0xF8)|channel;		//select channel
	ADCSRA |= (1<<ADSC);		//start conversion
	while(ADCSRA & (1<<ADSC));		//wait for conversion complete
	return(ADCL | (ADCH << 8));			//combine result
}




int main(void)
{
	uint16_t adc_value;
	void lcd_init(void);  					
	ADC_init();		//Call adc initialisation 
	
	    while (1) 
    {
		float temp;
		lcd_clear();
		lcd_set_cursor(0,0);
		lcd_print("Temperature:");
		adc_value=ADC_read(0);				///read from analog channel 0(A0 pin into aurduino)
		temp=adc_value*0.488;				//converting adc value into temperature
		lcd_set_cursor(1,0);
		lcd_print_float(temp);		//printing temperature
		lcd_data(0xDF);				//to print degree symbol (came from datasheet)
		lcd_print("C");
		_delay_ms(500);
    }
}

