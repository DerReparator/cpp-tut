/**
 *  This program solves Uebung 1.17 (p. 108).
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(void){
  string pfad;
  size_t anzZeichen {0};
  size_t anzWorte {0};
  size_t anzZeilen {1};
  char input;
  bool isWord;
  
  cout << "Bitte Name einer Textdatei eingeben: ";
  getline(cin, pfad);
  
  ifstream quelle(pfad, ios::binary);
  if(!quelle.good()){
    cout << "Fehler beim einlesen";
    exit(-1);
  } else {
  
    while(quelle.get(input)){
      if(input != '\n')
        ++anzZeichen;
      else
        ++anzZeilen;
      if((input < 'A') || (input > 'Z' && input < 'a') || (input > 'z')){
        if(isWord){
          anzWorte++;
          isWord = false;
        }
      } else {
        isWord = true;
      }
    }
  }
  cout << "\nAnzahl der Zeichen = " << anzZeichen << " Anzahl der Worte = " << anzWorte << " Anzahl der Zeilen = " << anzZeilen << endl;
  getline(cin, pfad);
  return 0;
}