/*
 * LED_CONFIG.h
 *
 * Created: 25/03/2021 15:22:45
 *  Author: Saeed Ahmed
 */ 
#include "CPU_CONFIG.h"

#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_



#define LED0_PORT             DIO_PORTC
#define LED1_PORT             DIO_PORTC
#define LED2_PORT             DIO_PORTD

#define LED0_PIN              DIO_PIN2
#define LED1_PIN              DIO_PIN7
#define LED2_PIN              DIO_PIN3

#define LED_OUTPUT            DIO_PIN_OUTPUT

#define LED_LOW               DIO_PIN_LOW
#define LED_HIGH              DIO_PIN_HIGH




#endif /* LED_CONFIG_H_ */