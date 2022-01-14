/*
  Melody

 Plays a melody

 circuit:
 * 8-ohm speaker on digital pin 8

 created 21 Jan 2010
 modified 30 Aug 2011
 by Tom Igoe

This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Tone

 */
#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};


void setup() {
  // put your setup code here, to run once:
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(13, OUTPUT);
//  pinMode(22, OUTPUT);
Serial.begin(9600);
  

}

  // put your main code here, to run repeatedly:
void loop(){
 if (Serial.available()) {
 char c = Serial.read();
 if(c == 'a'){
 digitalWrite(13, 1);
 digitalWrite(22, 0);
 digitalWrite(23, 0);
 digitalWrite(24, 0);
 digitalWrite(25, 0);
  tone(BDPIN_BUZZER, NOTE_C5, 500);
  delay(500);
 
 
 }
 if(c == 'b'){
 digitalWrite(13, 0);
 }
 if(c == 'c'){
  digitalWrite(22, 1);
  digitalWrite(24, 1);
  
 }
 if(c == 'd'){
  digitalWrite(23, 1);
  digitalWrite(25, 1);
  
 }
 }
 
 }
