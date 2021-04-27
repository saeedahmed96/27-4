/*
 * Motor_Config.h
 *
 * Created: 4/24/2021 1:27:42 AM
 *  Author: uniqu
 */ 


#ifndef MOTOR_CONFIG_H_
#define MOTOR_CONFIG_H_

#include "CPU_CONFIG.h"

/*Define Motor Types*/
typedef enum
{
	Motor1 = 0,
	Motor2 = 1
}Motor_Channel;
/*Define Motor Direction*/
typedef enum
{
	Forward = 0,
	Backward = 1,
	Stop = 3
}Motor_Direction;
/*Define Motor Status*/
typedef enum
{
	Motor_NOK = 0,
	Motor_OK = 1
}Motor_Status;


#endif /* MOTOR_CONFIG_H_ */