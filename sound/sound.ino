#include "pitches.h"


void setup() {
  // put your setup code here, to run once:
//  tone(BDPIN_BUZZER, NOTE_C4, 500);
//  delay(500);
//  tone(BDPIN_BUZZER, NOTE_A3, 500);
//  delay(500);

  

}

void loop() {
  // put your main code here, to run repeatedly:
   tone(BDPIN_BUZZER, NOTE_C4, 500);
  delay(500);
  noTone(BDPIN_BUZZER);
  tone(BDPIN_BUZZER, NOTE_A3, 500);
  delay(500);
  noTone(BDPIN_BUZZER);
  tone(BDPIN_BUZZER, NOTE_B3, 500);
  delay(500);
  noTone(BDPIN_BUZZER);
  tone(BDPIN_BUZZER, NOTE_G3, 500);
  delay(500);
  noTone(BDPIN_BUZZER);


}
