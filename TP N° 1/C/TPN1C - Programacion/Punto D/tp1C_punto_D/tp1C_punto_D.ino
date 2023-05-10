// Controlar la velocidad de giro del eje del motor CC desde una PC

const int pin_I = 8;
const int pin_D = 9;
char control;
int velocidad = 0;

void setup() {
    Serial.begin(9600);
    pinMode(pin_I,OUTPUT);
    pinMode(pin_D,OUTPUT);
    Serial.println("Presione repetidas veces A o D para aumentar o disminuir la velocidad de giro (Giro sentido horario)");
}

void loop(){
    if(Serial.available()){ 
        control = Serial.read();
        if(velocidad >= 0 and velocidad <= 255)
        {
            if(control == 'd')
            {
              velocidad = velocidad + 25;
              digitalWrite(pin_I, LOW);
              analogWrite(pin_D, velocidad);
            }
            if (control == 'a')
            {
              velocidad = velocidad - 25;
              digitalWrite(pin_I, LOW);
              analogWrite(pin_D, velocidad);
            }
        }
        if(velocidad > 255){
          analogWrite(pin_D, 255);
          if (control == 'a') velocidad = velocidad - 25;
        }
        if(velocidad < 0){
          analogWrite(pin_D, velocidad);
          if (control == 'd') velocidad = velocidad + 25;
        } 
        delay(10);
    }
}