/**
 *  This program solves Uebung 1.11 (p. 95).
 **/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Offset der '0' in ASCII-Format.
const int ASCII_TO_DIGIT = 48;

long int zahl{0};

int main(int argc, char** argv){
  string zahlInput {""};
  int quersumme{0}; // Berechnet aus "zahlInput"
  int quersumme2{0}; // Berechnet aus zahl
  // Lese eine Zahl ein
  cout << "Zahl eingeben: ";
  cin >> zahlInput;
  cout << endl;
  
  // Umwandeln in long
  {
    int p = 0;
    for(int i = zahlInput.length()-1; i >= 0; i--){
      cout << zahlInput[i] << endl;
      zahl += int(zahlInput[i]-ASCII_TO_DIGIT)*pow(10, p);
      p++;
    }
  }
  
  int q = 0;
  // Quersumme berechnen
  while(q < zahlInput.length()){
    quersumme += int(zahlInput[q]-ASCII_TO_DIGIT);
    q++;
  }
  
  // Quersumme aus Zahl berechnen
  {
    long int zahl = ::zahl;
    while(zahl > 0){
      quersumme2 += zahl % 10;
      zahl /= 10;
    }
  }
  
  cout << "\n Die Zahl lautet: " << zahl << endl;
  cout << "Die Quersumme lautet: " << quersumme << endl;
  cout << "Die Quersumme (aus Zahl) lautet: " << quersumme2 << endl;
  system("pause");
  return 0;
}