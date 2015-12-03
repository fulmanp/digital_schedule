void clearTFT() {
  TFTscreen.background(bgB, bgG, bgR);
}

void clearTFT(int odY, int doY){
  TFTscreen.stroke(0, 0, 0);
  TFTscreen.fill(0, 0, 0);// 
  TFTscreen.rect(0, odY, szerokosc, doY);
}

void clearTFT(int R, int G, int B) {
  TFTscreen.background(B, G, R);
}

void Clicked1(){
   //Czynnosc wykonywana przy naciśnięci guzika 1
   wskaznik = 2;
   delay(100);
}

void Clicked2(){
  //Czynnosc wykonywana przy naciśnięci guzika 2
  wskaznik = 1;
  delay(100);
}

void Clicked3(){
  //Czynnosc wykonywana przy naciśnięci guzika 3
    if (menu == 0) {
      if (wskaznik == 1) {
        menu = 1;
        TFTscreen.stroke(0, 0, 0);
        TFTscreen.fill(0, 0, 0);// kolor paletki
        TFTscreen.rect(0, 33, szerokosc, wysokosc);
        delay(100);
      }
      else if (wskaznik == 2) {
        menu = 2;
        TFTscreen.stroke(0, 0, 0);
        TFTscreen.fill(0, 0, 0);// kolor paletki
        TFTscreen.rect(0, 33, szerokosc, wysokosc);
        delay(100);
      }
    }
    else {
      menu = 0;
      clearTFT(33,wysokosc);
      delay(100);
    }
}

void Rysuj(){
    TFTscreen.setTextSize(1);
    TFTscreen.stroke(255, 255, 255);
    TFTscreen.text("Katedra Analizy\nMatematycznej i Teorii\nSterowania", 0, 0);
    //Sprawdzamy czy jesteśmy w głównym menu oraz czy wskaźnik jest na pozycji 1
    if (menu == 0 and wskaznik == 1) {
      TFTscreen.setTextSize(1);
      TFTscreen.stroke(255, 255, 255);
      TFTscreen.text("> Piotr Fulmanski", 0, 33);
      TFTscreen.text("  dr, adiunkt", 0, 42);

      TFTscreen.stroke(0, 0, 0);
      TFTscreen.fill(0, 0, 0);// 
      TFTscreen.rect(0, 72, 5, 10);
      TFTscreen.stroke(255, 255, 255);
      TFTscreen.setTextSize(1);
      TFTscreen.text("  Alicja Miniak", 0, 72);
      TFTscreen.setTextSize(1);
      TFTscreen.text("  mgr, doktorant", 0, 81);
    }
    //Sprawdzamy czy jesteśmy w głównym menu oraz czy wskaźnik jest na pozycji 1
    else if (menu == 0 and wskaznik==2) {
      TFTscreen.setTextSize(1);
      TFTscreen.stroke(255, 255, 255);
      TFTscreen.text("  Piotr Fulmanski", 0, 33);
      TFTscreen.setTextSize(1);
      TFTscreen.text("  dr, adiunkt", 0, 42);
      TFTscreen.stroke(0, 0, 0);
      TFTscreen.fill(0, 0, 0);// kolor paletki
      TFTscreen.rect(0, 33, 5, 10);

      TFTscreen.stroke(255, 255, 255);
      TFTscreen.text("> Alicja Miniak", 0, 72);
      TFTscreen.setTextSize(1);
      TFTscreen.text("  mgr, doktorant", 0, 81);
    }
    else if (menu == 1) {
      TFTscreen.setTextSize(1);
      TFTscreen.stroke(255, 255, 255);
      TFTscreen.text(" Piotr Fulmanski", 0, 33);
      TFTscreen.setTextSize(1);
      TFTscreen.text(" dr, adiunkt", 0, 42);

      TFTscreen.text(" Dyzur: czw. 9-10", 0, 52);
      TFTscreen.setTextSize(1);
    }
    else if (menu == 2) {
      TFTscreen.setTextSize(1);
      TFTscreen.stroke(255, 255, 255);
      TFTscreen.text(" Alicja Miniak", 0, 33);
      TFTscreen.setTextSize(1);
      TFTscreen.text(" mgr, doktorant", 0, 42);

      TFTscreen.text(" Dyzur: BRAK DANYCH", 0, 52);
      TFTscreen.setTextSize(1);
  }
}
