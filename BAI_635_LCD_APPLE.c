#DEFINE BOARD D501
#include<tv_boards.c>
#include<tv_lcd.c>
unsigned int8 n,i;
void main()
{
   system_init();
   lcd_setup();
   lcd_command(0x40);
   for(n=0;n<32;n++) lcd_data(LCD_MA_TRAITAO[n]);
   lcd_goto(0,0);
   lcd_data("BIEU TUONG APPLE");
   lcd_goto(0,1);
   lcd_data(0);
   lcd_data(1);
   lcd_goto(0,2);
      lcd_data(2);
      lcd_data(3);
   while(true)
   {
      
   }
}
