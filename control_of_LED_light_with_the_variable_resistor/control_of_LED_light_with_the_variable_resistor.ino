void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(A0);

  // ממיר את הערך הנלוגי שמגיע בערכים בין 0-1023 לערכים שאפשר להמיר לערך דיגטלי בין 0-255 
  int mappedValue = map(potValue, 0, 1023, 0, 225);

  analogWrite(3, mappedValue);
  Serial.println("pot v: " + String(potValue) + " correct v: " + String(mappedValue));
}
