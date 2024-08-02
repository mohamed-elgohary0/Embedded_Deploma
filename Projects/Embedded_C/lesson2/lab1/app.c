#include "Uart.h"

unsigned char string_name[100] = "Mohamed Ayman Elgohary";
int main(){
	Uart_Send_String(string_name);
	return 0; 
}