#include<LiquidCrystal.h> LiquidCrystal lcd(12,11,6,5,4,3); float value=0; float rev=0; int
rpm; int oldtime=0; int time;
void isr() //interrupt service routine
{ rev++;
}
void setup()
{ lcd.begin(16,2); //initialize LCD attachInterrupt(0,isr,RISING); //attaching the
interrupt
}
