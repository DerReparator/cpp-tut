/**
 *  This program solves Uebung 1.17 (p. 108).
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(void){
  string pfad;
  char input;
  unsigned long zeichenzahl = 0, wortzahl = 0, zeilenzahl = 0;
  
  cout << "Bitte Name einer Textdatei eingeben: ";
  getline(cin, pfad);
  
  ifstream quelle(pfad, ios::binary);
  if(!quelle.good()){
    cout << "Fehler beim einlesen";
    exit(-1);
  } else {
  
    char c = '\n';  // wegen der Abfrage in Zeile 38, falls die Datei
                  // leer ist
    bool istWort = false;

    while (quelle.get(c)) {
      if (c == '\n') {
        ++zeilenzahl;
      } else {
        ++zeichenzahl;
      }
      // Anpassung auf Umlaute fehlt!
      if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        istWort = true;  // Wortanfang, oder \tt{c} ist in einem Wort
      } else {
        if (istWort) {
          ++wortzahl;  // Wortende überschritten
        }
        istWort = false;
      }
    }
    if (c != '\n') {  // Die letzte Zeile enthält kein abschließendes \n.
      ++zeilenzahl;   // trotzdem mitzählen
    }
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
      // das letzte Zeichen ist in einem Wort, das noch nicht
      // mitgezählt wurde
      ++wortzahl;
    }
  }
  cout << "\nAnzahl der Zeichen = " << zeichenzahl << " Anzahl der Worte = " << wortzahl << " Anzahl der Zeilen = " << zeilenzahl << endl;
  getline(cin, pfad);
  return 0;
}