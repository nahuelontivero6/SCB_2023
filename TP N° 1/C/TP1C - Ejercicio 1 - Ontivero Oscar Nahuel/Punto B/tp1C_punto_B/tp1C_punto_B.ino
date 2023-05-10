//Girar en sentido anti horario durante 5 segundos y luego
//deberá girar en sentido horario durante 7 segundos

const int pin_I = 8;
const int pin_D = 9;

void setup() {
  pinMode(pin_I, OUTPUT);
  pinMode(pin_D, OUTPUT);
}

void loop() {
  digitalWrite(pin_I, HIGH);
  digitalWrite(pin_D, LOW);
  delay(5000);
  digitalWrite(pin_I, LOW);
  digitalWrite(pin_D, HIGH);
  delay(7000);
}