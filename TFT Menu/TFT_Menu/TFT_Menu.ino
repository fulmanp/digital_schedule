#include <TFT.h>  // Arduino LCD library
#include <SPI.h>

// pin definition for the Uno
#define cs   10 //CS na płytce (CS = SS (Slave Select))
#define dc   9 //A0 na płytce - (DC - Command /Data Mode) -DC/RS na płytce lub A0 tak jak tutaj)
#define rst  8 //Reset
// SDA/MOSI - MOSI (Master Out Slave In) - The Master line for sending data to the peripherals,
//W Arduino UNO to pin 11 lub ICSP-4
//W Leonardo to tylko ICSP-4
//Więcej informacji https://www.arduino.cc/en/Reference/SPI
//Podłączamy kolejno od we/wy 8: czerwony,biały(od zielonego do 9),zółty,niebieski,pomarancz,biały

TFT TFTscreen = TFT(cs, dc, rst);



//Menu zmienne
int wybor_przed = 0;
int wybor_po = 0;
int menu = 0;
int wskaznik = 1;

//Ustawienie Kolor Tła
int bgB = 0;
int bgG = 0;
int bgR = 0;

//Dane o wymiarach ekranu
int szerokosc = TFTscreen.width();
int wysokosc = TFTscreen.height();


void setup() {
  TFTscreen.begin();
  Serial.begin(9600);
  clearTFT();
  Rysuj();
}

void loop() {
  //dla rozmiaru czcionki 2 maksymanlna ilosc znakow to 13
  //Sprawdzamy, który przycisk został naciśnięty i
  //zmienna wybor_po zostaje odpowiednio ustawiona
  if (analogRead(A1) > 500) {
    Clicked1();
    Rysuj();
  }
  else if (analogRead(A2) > 500) {
    Clicked2();
    Rysuj();
  }
  else if (analogRead(A3) > 500 ) {
      Clicked3();
      Rysuj();
  }
  else if (analogRead(A4) > 500) {
  }
}

