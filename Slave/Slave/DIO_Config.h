/*
 * DIO_Config.h
 *
 * Created: 24/03/2021 17:11:43
 *  Author: Saeed Ahmed
 */ 

#include "CPU_CONFIG.h"

#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_

#include "CPU_Config.h"

/*Renaming for ports*/
#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3
/*Renaming for pins*/
#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7
/*Renaming Pin Direction*/
#define DIO_PIN_INPUT  0
#define DIO_PIN_OUTPUT 1
/*Renaming Pin State*/
#define DIO_PIN_LOW  0
#define DIO_PIN_HIGH 1
/*Renaming Port Direction*/
#define DIO_PORT_INPUT  0
#define DIO_PORT_OUTPUT 1
/*Renaming Port state*/
#define DIO_PORT_LOW  0
#define DIO_PORT_HIGH 1



#endif /* DIO_CONFIG_H_ */