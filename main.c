#include <avr/io.h>
#include <avr/interrupt.h>

ISR(INT0_vect) {
	if(PIND & 0b00000100) {
		PORTD &= ~(1 << 7); // Runs if button is NOT pressed
	} else {
		PORTD |= (1 << 7); // Runs if button IS pressed
	}
}

int main(void) {
	
	cli();
	DDRD |= (1 << 7); // Set Pin#7 as OUTPUT
	PORTD |= (1 << 2); // Enable Pullup resistor on INT0/Pin#2

	EICRA |= (1 << 0); // 0b00000001 = any logical change on INT0
	EIMSK |= (1 << 0); // 0b00000001 = enable INT0
	sei(); // Enable global interrupts

	while(1) {
	// .. looping code here
	}
}
