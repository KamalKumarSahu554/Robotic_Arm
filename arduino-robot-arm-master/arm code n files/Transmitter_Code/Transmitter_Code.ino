/*author: SHASWAT CHANDRA MISHRA*/
int x;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  x = analogRead(A0);
  if (x > 800) {
    Serial.write('a');
    delay(200);
  } else {
    Serial.write('b');
    delay(200);
  }
}
