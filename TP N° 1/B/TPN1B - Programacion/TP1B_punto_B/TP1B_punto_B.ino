// Lograr que el servo gire su eje en sentido anti horario (extremo a extremo) y luego de 1
// 𝑠𝑒𝑔𝑢𝑛𝑑𝑜 este gire en sentido horario (extremo a extremo). El proceso lo deberá realizar
// continuamente (secuencia automática)

#include <Servo.h>
Servo motorServo;

int pos;

void setup() {
  motorServo.attach(9);
}

void loop() {
  //Sentido antihorario
  for(pos = 180; pos >= 0; pos -= 1){
    motorServo.write(pos);
    delay(10);
  }
  delay(1000);

  // Sentido horario
  for(pos = 0; pos <= 180; pos += 1){
    motorServo.write(pos);
    delay(10);
  }
}

