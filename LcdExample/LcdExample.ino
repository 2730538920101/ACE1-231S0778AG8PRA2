// incluye la biblioteca :
#include <LiquidCrystal.h>

// inicializa la bublioteca con los numeros de pines de la interfz
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
  // establece el número de LEDs de columnas y filas:
  lcd.begin(16, 2);
  // Imprime un mensaje en la LCD.
  lcd.print("Hola, mundo!");
}

void loop() {
  // Desplaza 13 posiciones (longitud de cadena) a la izquierda 
  // moviendo el texto hacia fuera de la pantalla a la izquierda:
  for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // desplaza una posicion a la izquierda:
    lcd.scrollDisplayLeft();
    // espera un poco tiempo:
    delay(150);
  }

  // Desplaza 29 posiciones (longitud de cadena) a la derechs 
  // moviendo el texto hacia fuera de la pantalla a la derecha:
  for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    // desplaza una posicion a la derecha:
    lcd.scrollDisplayRight();
    // espera un poco tiempo:
    delay(150);
  }

  // desplaza 16 posiciones (longitud de la pantalla + longitud de la cadena) a la izquierda
  // devolviendo el texto al centro:
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    // desplaza una posicion a la izquierda:
    lcd.scrollDisplayLeft();
    // espera un poco tiempo:
    delay(150);
  }

  // temporiza al final del bucle completo:
  delay(1000);

}
