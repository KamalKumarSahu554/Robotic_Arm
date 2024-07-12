
#define button 8
#define led 13

void setup() {
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
 int bState = digitalRead(button);
 if (bState == LOW){
 digitalWrite(led,HIGH);
 Serial.write('A');
 delay(20);
 } 
 else {
 digitalWrite(led,LOW);
 Serial.write('B');
 delay(20);
 }
}
