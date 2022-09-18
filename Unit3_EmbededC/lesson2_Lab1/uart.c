#define UART0DR *((volatile unsigned int*)((unsigned int*)0x101f1000)) 

void UART_RECIEVE(volatile unsigned char* P_RECIEVE) {
	while(*P_RECIEVE != '\0') {
		UART0DR = (unsigned int)*P_RECIEVE;
		*P_RECIEVE++;
	}
}
