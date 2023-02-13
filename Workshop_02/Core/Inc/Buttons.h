/*
 * Buttons.h
 *
 *  Created on: Feb 12, 2023
 *      Author: aleks
 */

#ifndef INC_BUTTONS_H_
#define INC_BUTTONS_H_



#endif /* INC_BUTTONS_H_ */

#include "main.h"
void SlowerBlink(void);
void FasterBlink(void);
void BlinkLED(void);
void ModeBlink(void);
void ModeNext(void);
void ModePrev(void);
void StartStop(void);

extern uint16_t Time;
extern uint16_t StartStopFlag;
extern uint16_t ModeFlag;
