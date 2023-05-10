// Lograr que el servo varíe la velocidad de giro de su eje de extremo a extremo (secuencia automática).

#include <Servo.h>
Servo motorServo;

int pos;
int velocidad = 5;

void setup() {
  motorServo.attach(9);
}

void loop() {
  //Sentido antihorario
  for(pos = 180; pos >= 0; pos -= 1){
    motorServo.write(pos);
    delay(velocidad);
  }

  // Sentido horario
  for(pos = 0; pos <= 180; pos += 1){
    motorServo.write(pos);
    delay(velocidad);
  }
  velocidad = velocidad + 5; //Cada 2 giros de extremo a extremo disminuye la velocidad de giro
}