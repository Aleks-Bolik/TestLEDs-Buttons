/*
 * Buttons.c
 *
 *  Created on: Feb 12, 2023
 *      Author: aleks
 */
#include "Buttons.h"
#include "LedsMode.h"

void SlowerBlink(void)
{
	Time = Time + 20;
}
void FasterBlink(void)
{
	Time = Time - 20;
}

void BlinkLED(void)
{
	if(StartStopFlag == 1)
	{

	switch (ModeFlag)
		{
			case 0:
				Mode_0();
				break;
			case 1:
				Mode_1();
				break;
			case 2:
				Mode_2();
				break;
			default:
				break;
		}
	}
	else
	{
		ModeStop();
	}

/*

	if(StartStopFlag == 1)
	{

		if(ModeFlag == 0)
		{
			Mode_0();
		}
		else if(ModeFlag == 1)
		{
			Mode_1();
		}

	}
	else
	{
		StartStop();
	}*/
}

void ModeNext(void)
{
	switch (ModeFlag)
	{
		case 0:
			ModeFlag = 1;
			break;
		case 1:
			ModeFlag = 2;
			break;
		case 2:
			ModeFlag = 0;
			break;
		default:
			break;
	}
}

void ModePrev(void)
{
	switch (ModeFlag)
	{
		case 0:
			ModeFlag = 2;
			break;
		case 1:
			ModeFlag = 0;
			break;
		case 2:
			ModeFlag = 1;
			break;
		default:
			break;
		}
}

void StartStop(void)
{
	if(StartStopFlag == 0)
	{
		StartStopFlag = 1;
	}
	else
	{
		StartStopFlag = 0;
	}
}

