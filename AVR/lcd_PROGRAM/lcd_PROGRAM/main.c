/*
 * lcd_PROGRAM.c
 *
 * Created: 11-10-2025 18:00:02
 * Author : LENOVO
 */ 

	#define F_CPU 16000000UL
	#include <avr/io.h>
	#include <util/delay.h>
	#include "lcd.h"

	int main(void)
	{
		lcd_init();
		lcd_set_cursor(0, 0);
		lcd_print("Hello LCD");

		lcd_set_cursor(1, 0);
		lcd_print("It works! ");

		// small demo: print a number
		lcd_print_uint16(1234);
		lcd_print_float(123.4)
	

    /* Replace with your application code */
    while (1) 
    {
		lcd_clear();
		_delay_ms(1000);
		lcd_set_cursor(0,0);
		lcd_print_uint16(1234);
		_delay_ms(1000);	
    }
	 {
		 lcd_clear();
		 _delay_ms(1000);
		 lcd_set_cursor(1,0);
		 lcd_print_float(123.4);
		 _delay_ms(1000);
	 }
 }
}

