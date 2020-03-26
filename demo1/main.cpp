#include "mbed.h"

#include "TextLCD.h"


TextLCD lcd(D2, D3, D4, D5, D6, D7);


int main()

{

      int x=0;

      lcd.printf("107061139\n");

      x = 30;

      while(x >= 0)

      {
            lcd.locate(5,1);

            lcd.printf("%5i",x);    //conuter display

            wait(1);

            x--;

      }

}