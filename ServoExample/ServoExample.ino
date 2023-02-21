#include "Servo.h"
Servo myServo;
int PosInicial = 0;
int PosActual = 0;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(6);
  myServo.write(PosInicial);
  Serial.begin(9600);
  Serial.print("ESTAMOS PROBANDO MOTOR");
}

void loop() {
  // put your main code here, to run repeatedly:
  
  PosActual = Mover45grados();
  MoverPosicionInicio(PosActual);
  PosActual = Mover90grados();
  MoverPosicionInicio(PosActual);
  PosActual = Mover135grados();
  MoverPosicionInicio(PosActual);
  PosActual = Mover180grados();
  MoverPosicionInicio(PosActual);

}

void MoverPosicionInicio(int actual){
  for(int i = actual; i>0; i--){
    myServo.write(i);
    delay(20);
    Serial.print("POS: ");
    Serial.print(i);
    Serial.println();
  }
}

int Mover45grados(){
  for(int i=0; i <= 45; i++){
    myServo.write(i);
    delay(20);
    Serial.print("POS: ");
    Serial.print(i);
    Serial.println(); 
  }
  return 45;
}


int Mover90grados(){
  for(int i=0; i <= 90; i++){
    myServo.write(i);
    delay(20);
    Serial.print("POS: ");
    Serial.print(i);
    Serial.println(); 
  }
  return 90;
}


int Mover135grados(){
  for(int i=0; i <= 135; i++){
    myServo.write(i);
    delay(20);
    Serial.print("POS: ");
    Serial.print(i);
    Serial.println(); 
  }
  return 135;
}


int Mover180grados(){
  for(int i=0; i <= 180; i++){
    myServo.write(i);
    delay(20);
    Serial.print("POS: ");
    Serial.print(i);
    Serial.println(); 
  }
  return 180;
}
