void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int value = analogRead(A0);

  //int mappedValue = map(value, 0, 1023, 255, 0);
    // analogWrite(3, mappedValue);
  
  if (value > 350) {
    digitalWrite(3, LOW);
  } else {
    digitalWrite(3, HIGH);
  }
  Serial.println(value);
}
