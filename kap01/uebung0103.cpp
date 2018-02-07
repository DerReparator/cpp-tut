/**
 *  This solves Uebung 1.3 (p.72)
 **/
 
 #include <iostream>
 
 #define ENDE system("pause")
 
 using namespace std;
 
int main(){
  int anfang, ende, zahl;
  bool isIncluded;
  
  cout << "Bitte Anfang eines Zahlenbereichs eingeben:";
  cin >> anfang;
  cout << "\nBitte Ende eines Zahlenbereichs eingeben:";
  cin >> ende;
  
  if(ende < anfang) {
    cout << "\nFehler: Ende darf nicht kleiner als der Anfang des Zahlenbreichs sein!\n"
      << "Bitte neustarten!";
    ENDE;
  } else {
    cout << "\nBitte Zahl eingeben: ";
    cin >> zahl;
    isIncluded = ((zahl >= anfang) && (zahl <= ende));
    
    cout << "\nIst Zahl im Zahlenbereich? = " << isIncluded << endl;
    ENDE;
  }
  
  return 0;
}