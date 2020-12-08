#include <LiquidCrystal.h>
LiquidCrystal lcd (13,12,11,10,9,8);

void setup() {
 lcd.begin (20,4);
 Serial.begin (9600);
 lcd.setCursor (0,0);
 lcd.print ("Wireless Serial");
 lcd.setCursor (0,1);
 lcd.print ("Communication via 2.4 GHz");
 lcd.setCursor (0,2);
 lcd.print ("MODEM at TELKOM 3b PNJ"); 

}

void loop() {
  int nilai_sensor = Serial.read ();

  lcd.setCursor (0,3);
  lcd.print ("Temp. in 0C :");
  lcd.setCursor (13,3);
  lcd.print (nilai_sensor);
  delay (150);
  Serial.print ("TEMP_VAL :");
  Serial.println (nilai_sensor);
  delay (150);

}
