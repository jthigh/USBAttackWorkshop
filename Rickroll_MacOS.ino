#include "DigiKeyboard.h"
void setup() {}
void loop() {  
  DigiKeyboard.delay(2000); 
  DigiKeyboard.sendKeyStroke(0); 
  DigiKeyboard.delay(200); 
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT); 
  DigiKeyboard.delay(500); 
  DigiKeyboard.print("terminal");
  DigiKeyboard.delay(200); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(5000);  
  DigiKeyboard.print("open \"https://www.youtube.com/watch?v=oHg5SJYRHA0\""); 
  DigiKeyboard.delay(500); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);  
  DigiKeyboard.delay(500); 
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_CONTROL_LEFT);  
for(;;){ /*empty*/ }} 
