/*
 * Blink.c
 *
 * Created: 3/11/2020 1:33:39 PM
 *  Author: Nishan Chettri
 */ 


#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRA|=1<<PINA0;
    while(1)
    {
        PORTA|=(1<<PINA0);
		_delay_ms(1000);
		PORTA&=~(1<<PINA0);
		_delay_ms(1000);
    }
}