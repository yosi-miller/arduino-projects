int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT); // מגדיר פין 2 לקבל קלט דיגטלי
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(2); // מחזיר 1 אם הכפתור נלחץ 0 אם לא

  if (buttonState) {
    digitalWrite(13, HIGH);
    Serial.println("H");
  } else {
    digitalWrite(13, LOW);
    Serial.println("L");
  }
}
