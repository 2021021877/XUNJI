#ifndef __SERVO_H__
#define __SERVO_H__
#include "stm32f1xx_hal.h"
#include "tim.h"
#include "stm32f1xx_hal_tim.h"
#include "stm32f1xx_hal_gpio.h"
/********************************************
 @名称；循迹传感器
 @功能：循迹
 @参数：无
 @返回：无
 @作者：董策
*********************************************/
#define Read_hw_xunji_1 HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_12)
#define Read_hw_xunji_2 HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_13)
#define Read_hw_xunji_3 HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_14)
#define Read_hw_xunji_4 HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_15)

void start_state(void);
void Red_catch(void);
void Blue_catch(void);
void Line_Tracing(void) ;
void AutoCatch(void);
void keep_straight_with_pid(void)   ;










#endif // __SERVO_H__
