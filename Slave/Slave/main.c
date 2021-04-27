/*
 * Slave.c
 *
 * Created: 4/27/2021 3:18:50 AM
 * Author : uniqu
 */ 

#include "LED.h"
#include "SPI.h"
#include "MOTOR.h"
#include "LCD.h"
Uint8t state_machine =0;
int main(void)
{
	LCD_Init();
	LCD_Clear();
	while (1)
	{
		switch (state_machine)
		{
			case  0:
			LCD_Clear();
			LCD_Write_String((Uint8t*)"State");
			LCD_Write_Number(state_machine);
			LCD_Write_Command(0xC0);
			LCD_Write_String((Uint8t*)"el 3'ally");
			state_machine =1;
			_delay_ms(2000);
			break;
			
			case 1:
			LCD_Clear();
			LCD_Write_String((Uint8t*)"State");
			LCD_Write_Number(state_machine);
			LCD_Write_Command(0xC0);
			LCD_Write_String((Uint8t*)"LED0_Initializ");
			LED0_Initialize();
			state_machine = 2;
			_delay_ms(500);
			break;
			case 2:
			LCD_Clear();
			LCD_Write_String((Uint8t*)"State");
			LCD_Write_Number(state_machine);
			LCD_Write_Command(0xC0);
			LCD_Write_String((Uint8t*)"Motor_Initializ");
			Motor_Init(1);
			state_machine = 3;
			_delay_ms(500);
			break;

			case 3:
			LCD_Clear();
			LCD_Write_String((Uint8t*)"State");
			LCD_Write_Number(state_machine);
			LCD_Write_Command(0xC0);
			LCD_Write_String((Uint8t*)"Spi_intialize");
			SPI_Init();
			_delay_ms(500);
			state_machine = 4;
			break;

			case  4:
			LCD_Clear();
			LCD_Write_String((Uint8t*)"State");
			LCD_Write_Number(state_machine);
			LCD_Write_Command(0xC0);
			LCD_Write_String((Uint8t*)"Spi_resive");
			Uint8t spi_rec =0;
			Uint8t direc =0;
			while (1)
			{
				spi_rec = SPI_Receive();
				switch (spi_rec)
				{
					case 1 :
					if(direc==0){
						Motor1_Enable();
						Motor1_Direction(0);
						direc = 1;
					}
					else if(direc==1) {
						Motor1_Enable();
						Motor1_Direction(1);
						direc = 0;
					}
					break;
					
					case 'a':
					LED0_TGL();
					break;
				}
			}
		}
	}
}


