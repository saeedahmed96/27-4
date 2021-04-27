/*
 * CPU_CONFIG.h
 *
 * Created: 25/03/2021 15:21:13
 *  Author: Saeed Ahmed
 */ 


#ifndef CPU_CONFIG_H_
#define CPU_CONFIG_H_

#undef F_CPU /*Remove previous definition*/
#define F_CPU 16000000/*16 MegaHz(16 Million)*/
#include <avr/io.h> /*All registers are Pre-Defined here*/
#include <util/delay.h>
#include <avr/interrupt.h>
#include "BITMATH.h"
#include "STD_Type.h"
#include "DIO.h"


#endif /* CPU_CONFIG_H_ */