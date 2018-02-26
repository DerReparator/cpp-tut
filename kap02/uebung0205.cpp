/**
 *  This program solves Uebung 2.5 (p. 129).
 */

#include <iostream>
#include <string>

using namespace std;

void str_umkehr(string&);

int main(void){
  string derText;
  cout << "Geben Sie einen Text ein, der 'gespiegelt' werden soll: ";
  getline(cin, derText);
  str_umkehr(derText);
  cout << "\nDas Ergebnis: " << derText << '\n';
  system("pause");
}

void str_umkehr(string& s){
  string puffer;
  for(int i = s.size()-1; i >= 0; --i){
    puffer.push_back(s.at(i));
  }
  s = puffer;
}