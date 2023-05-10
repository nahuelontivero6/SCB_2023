//Controlar el sentido de giro del eje del motor CC desde una PC

const int pin_I = 8;
const int pin_D = 9;
char sentido;

void setup() {
  Serial.begin(9600);
  Serial.print("Controle la direccion de giro presionando A o D" );
  pinMode(pin_I, OUTPUT);
  pinMode(pin_D, OUTPUT);
}

void loop() {
  if (Serial.available()>0)
  {
    sentido = Serial.read();
    if(sentido == 'd')
    {
      digitalWrite(pin_I, LOW);
      digitalWrite(pin_D, HIGH);
    }
    if (sentido == 'a')
    {
      digitalWrite(pin_I, HIGH);
      digitalWrite(pin_D, LOW);
    }
  }
  delay(100);
}