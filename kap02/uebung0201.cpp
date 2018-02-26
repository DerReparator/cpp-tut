/**
 *	This program solves Uebung 2.1 (p. 116).
 */

#include <iostream>

using namespace std;

unsigned long int dauerInSekunden(int stunden, int minuten, int sekunden){
  return sekunden + 60 * minuten + 60 * 60 * stunden;
}

int main(void){
  int h = 0, m = 0, s = 0;
	while(1){
    cout << "\nGeben Sie die Stunden-Anzahl ein: ";
		cin >> h;
    cout << "Geben Sie die Minuten-Anzahl ein: ";
    cin >> m;
    cout << "Geben Sie die Sekunden-Anzahl ein: ";
    cin >> s;
    cout << "Insgesamt waren es " << dauerInSekunden(h, m ,s) << " Sekunden!" << endl;
  }
  
  return 0;
}
