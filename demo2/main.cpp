#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D2, D3, D4, D5, D6, D7); // RS, E, DB4-DB7

int main()
{
  int x=;
  lcd.printf("107000212\n");
  while(x>=0)  
   {
     lcd.locate(2,1);
     lcd.printf("%u",x);
     ThisThread::sleep_for(500ms);
     --x;
   }
}