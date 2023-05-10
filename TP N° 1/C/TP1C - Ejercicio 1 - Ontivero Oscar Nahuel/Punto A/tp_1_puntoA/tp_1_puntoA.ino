 //Giro de motor en sendito antihorario
 
const int pin_1 = 8;
const int pin_2 = 9;
void setup() {
    pinMode(pin_1,OUTPUT); 
    pinMode(pin_2,OUTPUT);
}

void loop() {
    digitalWrite(pin_1,HIGH);
    digitalWrite(pin_2,LOW);    
}