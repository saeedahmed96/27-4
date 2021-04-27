#include "UART.h"
#include "ADC.h"
#include "LED.h"
#include "SPI.h"
#include "LCD.h"
#include "InOut.h"
#include "ADC.h"
Uint8t state_machine =0;
Uint8t uart_rev =0 ;
Uint8t butt_data = 0;
Uint16t spi_data =0;
int main(void)
{
	LCD_Init();
	while (1)
	{
		switch(state_machine)
		{
			case 0:
			LCD_Clear();
			LCD_Write_String((Uint8t*)"State");
			LCD_Write_Number(state_machine);
			LCD_Write_Command(0xC0);
			LCD_Write_String((Uint8t*)"Starting");
			state_machine =1;
			_delay_ms(2000);
			break;
			case 1:
			LCD_Clear();
			LCD_Write_String((Uint8t*)"State")
			;LCD_Write_Number(state_machine);
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
			LCD_Write_String((Uint8t*)"USART_Inialization");
			UART_Init();
			sei();
			state_machine = 3;
			_delay_ms(500);
			break;
			
			case 3:
			LCD_Clear();
			LCD_Write_String((Uint8t*)"State");
			LCD_Write_Number(state_machine);
			LCD_Write_Command(0xC0);
			LCD_Write_String((Uint8t*)"Button_Inialization");
			BUTTON0_Initialize();
			state_machine = 4;
			_delay_ms(500);
			break;
			
			case 4:
			LCD_Clear();
			LCD_Write_String((Uint8t*)"State");
			LCD_Write_Number(state_machine);
			LCD_Write_Command(0xC0);
			LCD_Write_String((Uint8t*)"button waiting");
			if(BUTTON0_Read()==1)
			{
				while(BUTTON0_Read()==1);
				state_machine = 5;
				butt_data = 1;
			}
			else if(uart_rev!=0){
				state_machine =5;
			}
			else if(spi_data!=0){
				state_machine =5;
			}
			_delay_ms(50);
			
			break;
			case 5:
			LCD_Clear();
			LCD_Write_String((Uint8t*)"State");
			LCD_Write_Number(state_machine);
			LCD_Write_Command(0xC0);
			LCD_Write_String((Uint8t*)"Recieve data");
			if(uart_rev!=0||butt_data!=0||spi_data!=0)
			state_machine = 6;
			break;
			
			case 6:
			LCD_Clear();
			LCD_Write_String((Uint8t*)"State");
			LCD_Write_Number(state_machine);
			LCD_Write_Command(0xC0);
			LCD_Write_String((Uint8t*)"Spi_intialize");
			SPI_Init();
			state_machine = 7;
			break;

			case 7:
			LCD_Clear();
			LCD_Write_String((Uint8t*)"State");
			LCD_Write_Number(state_machine);
			LCD_Write_Command(0xC0);
			LCD_Write_String((Uint8t*)"Spi_transmit");
			if(uart_rev!=0)
			{
				SPI_Transmit(uart_rev);
			}
			else if(butt_data!=0)
			{
				SPI_Transmit(butt_data);
			}
			
			state_machine = 8;
			
			break;
			case 8:
			LCD_Clear();
			LCD_Write_String((Uint8t*)"State");
			LCD_Write_Number(state_machine);
			LCD_Write_Command(0xC0);
			LCD_Write_String((Uint8t*)"New_Start");
			_delay_ms(500);
			uart_rev =0;
			butt_data =0;
			spi_data =0;
			state_machine = 4;
			break;
		}
	}
	
}
ISR(USART_RXC_vect)
{
	uart_rev = UDR;
}
