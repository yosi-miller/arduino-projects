int pin4 = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int codeMorse[] = { 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0 };
  int arraySize = sizeof(codeMorse) / sizeof(codeMorse[0]);
  
  for (int i = 0; i < arraySize; i++) {
    digitalWrite(pin4, HIGH);
    delay(4000 * codeMorse[i]);
    digitalWrite(pin4, LOW);
    delay(4000 * codeMorse[i]);
  }
}
// void morse(int pulls[], int pin) {
//   for (int i = 0; (i < (sizeof(pulls) - 1)); i++) {
//     digitalWrite(pin, HIGH);
//     delay(1000 * pulls[i]);
//     digitalWrite(pin, LOW);
//     delay(1000 * pulls[i]);
//   }
// }