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
 if(c == '1'){
 digitalWrite(13, 1);
 digitalWrite(22, 0);
 digitalWrite(23, 0);
 digitalWrite(24, 0);
 digitalWrite(25, 0);
 
 
 }
 if(c == '2'){
 digitalWrite(13, 0);
 }
 if(c == '3'){
  digitalWrite(22, 1);
  digitalWrite(24, 1);
  
 }
 if(c == '4'){
  digitalWrite(23, 1);
  digitalWrite(25, 1);
  
 }
 }
 
 }
