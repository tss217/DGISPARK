#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.delay(2000);  // Aguarda 2 segundos antes de iniciar a simulação
  DigiKeyboard.sendKeyStroke(0);  // Libera todas as teclas (caso estejam pressionadas)
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_ALT_LEFT);



  DigiKeyboard.delay(2000);
  DigiKeyboard.println("firefox");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(43, MOD_ALT_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_T,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("https://www.youtube.com/watch?v=lZHsdH21jeA");
    
  
  
}
