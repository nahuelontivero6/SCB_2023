// Posicionar el eje de un servomotor digital de recorrido de 0° a 180° en 65° con respecto a la horizontal (sentido anti horario).

#include <Servo.h>
Servo motorServo;

int pos = 80; //Con este valor de pos obtengo un angulo aproximado a 65° en el Proteus

void setup() {
  motorServo.attach(9);
}

void loop() {
  motorServo.write(pos);
}
