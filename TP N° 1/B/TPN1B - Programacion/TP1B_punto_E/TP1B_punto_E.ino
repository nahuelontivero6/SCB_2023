// Realizar un programa que pueda controlar la posición angular del eje del servomotor
// desde el teclado de una computadora (utilizar puerto USB).

#include <Servo.h>
Servo motorServo;

char pos;
int ang = 90;
int velocidad = 15;

void setup() {
  Serial.begin(9600);
  Serial.print("Controle la posicion del servo con A (izquierda) y D (derecha)\n");
  motorServo.attach(9);
}

void loop() {
  if(Serial.available()){
    pos = Serial.read();
    switch (pos){
      case 'a':
        if(ang>0){ang = ang - 3;}
      break;
      case 'd':
        if(ang<180){ang = ang + 3;}
      break;
    }
    motorServo.write(ang);
    delay(15);
  } 
}