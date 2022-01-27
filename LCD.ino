#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0X27,16,2);
void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Welcome to");
  lcd.setCursor(1,1);
  lcd.print("Makereal Lab");
  delay(2000);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Are You Sleepy?");

  delay(1000);
  lcd.clear();
  for (int i=0; i<16;i++)
  {
    lcd.setCursor(i,1);
    lcd.print("bruh");
    delay(400);
    lcd.clear();
  }
  delay(1000);





}
