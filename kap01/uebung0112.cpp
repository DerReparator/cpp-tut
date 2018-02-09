/**
 *  This program solves Uebung 1.12 (p. 95).
 **/
 
#include <iostream>
#include <cmath>

#define TAUSENDERSTELLE 3
#define HUNDERTERSTELLE 2
#define ZEHNERSTELLE 1
#define EINERSTELLE 0

using namespace std;

const string ZEICHEN_VORRAT = {"IVXLCDM"};
size_t z;

int main(void){  
  string zahl {""};
  string rom_zahl {""};
  
  // Zahl einlesen
  cout << "Geben Sie eine natuerliche Zahl ein: ";
  cin >> z;
  cout << endl;
  /* DEBUG cout << static_cast<int>('0'); */
  
  // Eingabe in String umwandeln.
  {
    size_t z = ::z;
    int i {0};
    while(z > 0){
      zahl += (z % 10) + static_cast<int>('0');
      z /= 10;
      i++;
    }
  }
  
  // Als römische Zahl ausgeben
  {
    // M ausgeben
    for(int m = zahl.length(); m >= TAUSENDERSTELLE; m--){
      for(int r = (zahl[m] - static_cast<int>('0'))*pow(10,m-3); r > 0; r--){
        rom_zahl += 'M';
      }
    }
    
    // Hunderter ausgeben
    
    for(int c = zahl[HUNDERTERSTELLE] - static_cast<int>('0'); c > 0; c--){
      if(c == 9){
        rom_zahl += "CM";
        c -= 9; // break
      } else if (c >= 5) {
        rom_zahl += 'D';
        c -= 4;
      } else if (c == 4){
        rom_zahl += "CD";
        c -= 4; // break
      } else {
        rom_zahl += 'C';
      }
    }
    
    // Zehner ausgeben
    
    for(int x = zahl[ZEHNERSTELLE] - static_cast<int>('0'); x > 0; x--){
      if(x == 9){
        rom_zahl += "XC";
        x -= 9; // break
      } else if (x >= 5) {
        rom_zahl += 'L';
        x -= 4;
      } else if (x == 4){
        rom_zahl += "XL";
        x -= 4; // break
      } else {
        rom_zahl += 'X';
      }
    }
    
    // Einer ausgeben
    
    for(int i = zahl[EINERSTELLE] - static_cast<int>('0'); i > 0; i--){
      if(i == 9){
        rom_zahl += "IX";
        i -= 9; // break
      } else if (i >= 5) {
        rom_zahl += 'V';
        i -= 4;
      } else if (i == 4){
        rom_zahl += "IV";
        i -= 4; // break
      } else {
        rom_zahl += 'I';
      }
    }
  }
  cout << "\n\"" << zahl << "\"" << endl;
  cout << "= " << rom_zahl << endl;
  system("pause");
  return 0;
}