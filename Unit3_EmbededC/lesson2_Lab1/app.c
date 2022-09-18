#include <uart.h> 

unsigned char sentence[100] = "Welcome to first Lab";

void main(void) {
	UART_RECIEVE(sentence);
}