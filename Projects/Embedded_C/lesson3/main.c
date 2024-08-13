/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdint.h>
typedef volatile unsigned int vuint32_t ;

#define RCC_BASE			0x40021000
#define GPIO_PORTA_BASE		0x40010800
#define RCC_APB2ENR			*(volatile uint32_t *) (RCC_BASE   + 0x18)
#define GPIOA_CRH			*(volatile uint32_t *) (GPIO_PORTA_BASE + 0x04)
#define GPIOA_ODR			*(volatile uint32_t *) (GPIO_PORTA_BASE + 0x0C)

#define RCC_IOPAEN			(1<<2)
#define GPIOA13				(1UL<<13)
typedef union {
		vuint32_t all_fields;
		struct{
		vuint32_t reserved:13;
		vuint32_t P_13:1;
		}Pin;
}R_ODR_t;

/*typedef union {
		vuint32_t all_fields;
		struct{
		vuint32_t reserved:20;
		vuint32_t P_13:4;
		}Pin;
}R_CRH_t;*/

volatile R_ODR_t * R_ODR =  (volatile R_ODR_t * )(GPIO_PORTA_BASE + 0x0C) ;
//volatile R_CRH_t * R_CRH =  (volatile R_CRH_t * )(GPIO_PORTA_BASE + 0x04) ;
unsigned char g_varaibles[3] = {1,2,3}; 
unsigned char const const_variables[3] = {1,2,3};
 
 extern void H_fault_Handler(void){

 }
int main(void)
{
	int i,j;
	RCC_APB2ENR |= RCC_IOPAEN;
	GPIOA_CRH   &= 0xFF0FFFFF;
	GPIOA_CRH   |= 0x00200000;
	while(1)
	{
		R_ODR->Pin.P_13 = 1;
		for(i=0;i<8000;i++);
		R_ODR->Pin.P_13 = 0;
		for(j=0;j<8000;j++);
	}
}
