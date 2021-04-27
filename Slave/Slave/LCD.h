/*
 * LCD.h
 *
 * Created: 29/03/2021 22:00:59
 *  Author: Saeed Ahmed
 */ 

#ifndef LCD_H_
#define LCD_H_



#include "LCD_CONFIG.h"

void LCD_Init(void);
void LCD_Clear(void);
void LCD_Write_Command(Uint8t command);
void LCD_Write_Character(Uint8t character);
void LCD_Write_String(Uint8t* str);
void LCD_Write_Number(Uint32t number);
void LCD_Write_Float(Fint32t Fnumber);
void LCD_Write_Arabic(Uint8t* arabic);
void LCD_SAVE_CGRAM(void);


#endif /* LCD_H_ */