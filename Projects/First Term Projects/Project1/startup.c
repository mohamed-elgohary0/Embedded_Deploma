//Startup.c
//Eng:Mohamed elgohary

#include <stdint.h>

void Reset_Handler();
void Default_Handler(){
	Reset_Handler();
}
extern unsigned int _stack_top();
extern int main(void);
void NMI_Handler()__attribute__((weak,alias ("Default_Handler")));;
void H_fault_Handler()__attribute__((weak,alias ("Default_Handler")));;
void MM_fault_Handler()__attribute__((weak,alias ("Default_Handler")));;
void Bus_fault()__attribute__((weak,alias ("Default_Handler")));;
void Usage_fault_Handler()__attribute__((weak,alias ("Default_Handler")));;

uint32_t vectors[]__attribute__((section(".vectors")))={
	(uint32_t)	&_stack_top,
	(uint32_t)	&Reset_Handler,
	(uint32_t)	&NMI_Handler,
	(uint32_t)	&H_fault_Handler,
	(uint32_t)	&MM_fault_Handler,
	(uint32_t)	&Bus_fault,
	(uint32_t)	&Usage_fault_Handler
};

extern unsigned int _E_text;
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_bss;
extern unsigned int _E_bss;
void Reset_Handler(){
	int i,j;
	unsigned int DATA_Size = (unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA;
	unsigned char* p_src = (unsigned char*)&_E_text;
	unsigned char* p_dst = (unsigned char*)&_S_DATA;
	for(i=0; i<DATA_Size; i++){
		*((unsigned char*)p_dst++) = *((unsigned char*)p_src++);
	}
	unsigned int bss_Size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
	p_dst = (unsigned char*)&_S_bss;
	for(j=0; j<bss_Size; j++){
		*((unsigned char*)p_dst++) = (unsigned char) 0;
	}
	main();
}