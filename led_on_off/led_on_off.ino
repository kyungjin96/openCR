void setup() {
  // put your setup code here, to run once:
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
//  pinMode(22, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(22,0);
  digitalWrite(23,0);
  digitalWrite(24,0);
  digitalWrite(25,0);
  delay(1000);

    
  digitalWrite(22,1);
  delay(500);
  digitalWrite(23,1);
  delay(500);
  digitalWrite(24,1);
  delay(500);
  digitalWrite(25,1);
  delay(500);
  

}
