#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F,16,2);
int mesure;

void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.print("     Lucas");
  delay(2000);
  lcd.setCursor(1,1);
  lcd.print("    D.I.Y");
  pinMode(2, OUTPUT); // Buzzer
  pinMode(5, OUTPUT); // Red LED
  pinMode(6, OUTPUT); // Yellow LED
  pinMode(7, OUTPUT); // Green LED
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(2000);
  lcd.clear();
}

void loop() {
  mesure = analogRead(A0);
  Serial.print ("measured value :");
  Serial.println(mesure);
  lcd.setCursor(7,1);
  lcd.print(mesure);
  lcd.setCursor(0,0);
  if (mesure < 380 ) {
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(2, LOW);
  lcd.print("  CORRECT AIR");
}
else
{
if (mesure < 390 ) {
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
digitalWrite(5, LOW);
digitalWrite(2, LOW);
lcd.print("  UNHEALTHY AIR");
}
else
{
digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, HIGH);
digitalWrite(2, HIGH);
lcd.print("POLLUTION ALERT");
}
}

delay(1000);
lcd.clear();
}
