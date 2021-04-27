
/*
 * Motor.h
 *
 * Created: 4/24/2021 1:28:04 AM
 *  Author: uniqu
 */ 


#ifndef MOTOR_H_
#define MOTOR_H_

#include "Motor_Config.h"

/*Motor Initialization*/
Motor_Status Motor_Init(Motor_Channel channel);
/*Motor1 Enable*/
Motor_Status Motor1_Enable(void);
/*Motor1 Disable*/
Motor_Status Motor1_Disable(void);
/*Motor1 Direction*/
Motor_Status Motor1_Direction(Motor_Direction direction);
/*Motor1 Enable*/
Motor_Status Motor2_Enable(void);
/*Motor1 Disable*/
Motor_Status Motor2_Disable(void);
/*Motor1 Direction*/
Motor_Status Motor2_Direction(Motor_Direction direction);



#endif /* MOTOR_H_ */