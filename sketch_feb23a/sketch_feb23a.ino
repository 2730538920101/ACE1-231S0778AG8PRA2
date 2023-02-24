#include <LiquidCrystal.h>
#include "Servo.h"

LiquidCrystal lcd(0, 1, 2, 3, 4, 5); //(rs,enable,d4,d5,d6,d7)


#define SELECT 6
#define ABAJO 7
#define ARRIBA 8

Servo myServo;
int PosInicial = 0;
int PosActual = 0;

int xpunt = 0;
int ypunt = 0;

bool menu = false;
bool enproceso = false;

void setup() {
  myServo.attach(6);
  myServo.write(PosInicial);

  pinMode(SELECT, INPUT);
  pinMode(ABAJO, INPUT);
  pinMode(ARRIBA, INPUT);

  lcd.begin(16, 2); //iniciamos la interfaz de lcd
  lcd.clear(); //limpiamos la pantalla
  lcd.setCursor(0, 0); //Colocamos el cursor en la columna 0 fila 0
  lcd.print("GRP 08 A ACE1"); //imprimir texto
  lcd.setCursor(0, 1); //Colocamos el cursor en la columna 0 fila 1
  lcd.print("> start"); //imprimir texto

  Serial.begin(9600);

}



void loop() {
  if (digitalRead(SELECT) == HIGH) {
    enproceso = true;
    lcd.clear();
  }

  if (enproceso == true) {

  } else if (enproceso == true && digitalRead(SELECT) == HIGH ) {

  }

}


void MoverPosicionInicio(int actual) {
  for (int i = actual; i > 0; i--) {
    myServo.write(i);
    delay(20);
    Serial.print("POS: ");
    Serial.print(i);
    Serial.println();
  }
}

int Mover45grados() {
  for (int i = 0; i <= 45; i++) {
    myServo.write(i);
    delay(20);
    Serial.print("POS: ");
    Serial.print(i);
    Serial.println();
  }
  return 45;
}


int Mover90grados() {
  for (int i = 0; i <= 90; i++) {
    myServo.write(i);
    delay(20);
    Serial.print("POS: ");
    Serial.print(i);
    Serial.println();
  }
  return 90;
}


int Mover135grados() {
  for (int i = 0; i <= 135; i++) {
    myServo.write(i);
    delay(20);
    Serial.print("POS: ");
    Serial.print(i);
    Serial.println();
  }
  return 135;
}


int Mover180grados() {
  for (int i = 0; i <= 180; i++) {
    myServo.write(i);
    delay(20);
    Serial.print("POS: ");
    Serial.print(i);
    Serial.println();
  }
  return 180;
}
