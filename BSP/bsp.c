/*
 * bsp.c
 *
 *  Created on: 2018��6��26��
 *      Author: Junfeng.Guo
 */

#include "bsp.h"
#include "Timer.h"
#include "led.h"
#include "Usart1.h"


void Bsp_Init(void){
    RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA | RCC_AHBPeriph_GPIOB | RCC_AHBPeriph_GPIOF, ENABLE);
	LED_Init();

    TIM16_PWM();
    TIM17_PWM();

	TIM3_Config();
	TIM3_NVIC_Config(0);

	TIM14_Config();
	TIM14_NVIC_Config(1);

	USART1_Init();
	USART1_NVIC_Config(2);
}
