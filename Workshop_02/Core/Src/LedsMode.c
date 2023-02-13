/*
 * LedsMode.c
 *
 *  Created on: Feb 13, 2023
 *      Author: aleks
 */
#include "LedsMode.h"

void Mode_0(void)
{
	HAL_GPIO_WritePin(GPIOD, Green_Pin, SET);
	HAL_Delay(Time);
	HAL_GPIO_WritePin(GPIOD, Green_Pin, RESET);
	HAL_GPIO_WritePin(GPIOD, Orange_Pin, SET);
	HAL_Delay(Time);
	HAL_GPIO_WritePin(GPIOD, Orange_Pin, RESET);
	HAL_GPIO_WritePin(GPIOD, Red_Pin, SET);
	HAL_Delay(Time);
	HAL_GPIO_WritePin(GPIOD, Red_Pin, RESET);
	HAL_GPIO_WritePin(GPIOD, Blue_Pin, SET);
	HAL_Delay(Time);
	HAL_GPIO_WritePin(GPIOD, Blue_Pin, RESET);
}

void Mode_1(void)
{
	HAL_GPIO_WritePin(GPIOD, Blue_Pin, SET);
	HAL_Delay(Time);
	HAL_GPIO_WritePin(GPIOD, Blue_Pin, RESET);
	HAL_GPIO_WritePin(GPIOD, Red_Pin, SET);
	HAL_Delay(Time);
	HAL_GPIO_WritePin(GPIOD, Red_Pin, RESET);
	HAL_GPIO_WritePin(GPIOD, Orange_Pin, SET);
	HAL_Delay(Time);
	HAL_GPIO_WritePin(GPIOD, Orange_Pin, RESET);
	HAL_GPIO_WritePin(GPIOD, Green_Pin, SET);
	HAL_Delay(Time);
	HAL_GPIO_WritePin(GPIOD, Green_Pin, RESET);
}

void Mode_2(void)
{
	HAL_GPIO_TogglePin(GPIOD, Green_Pin);
	HAL_Delay(Time);
	HAL_GPIO_TogglePin(GPIOD, Orange_Pin);
	HAL_Delay(Time);
	HAL_GPIO_TogglePin(GPIOD, Red_Pin);
	HAL_Delay(Time);
	HAL_GPIO_TogglePin(GPIOD, Blue_Pin);
	HAL_Delay(Time);

}

void ModeStop(void)
{
	HAL_GPIO_WritePin(GPIOD, Green_Pin, SET);
	HAL_GPIO_WritePin(GPIOD, Orange_Pin, SET);
	HAL_GPIO_WritePin(GPIOD, Red_Pin, SET);
	HAL_GPIO_WritePin(GPIOD, Blue_Pin, SET);
}
