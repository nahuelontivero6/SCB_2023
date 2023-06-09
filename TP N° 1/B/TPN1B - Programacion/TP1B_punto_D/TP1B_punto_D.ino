//  Controlar la posición del eje del servomotor mediante un potenciómetro.

#include <Servo.h>
Servo motorServo;

int pos, z;
int velocidad = 15;

void setup() {
  motorServo.attach(9);
}

void loop() {
  pos = analogRead(A0);
  z = map(pos, 1, 1023, 1, 180);
  motorServo.write(z);
  delay(15);
}