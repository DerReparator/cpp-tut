/**
 *  This program solves Uebung 1.9 (p. 84).
 **/

#include <iostream>
using namespace std;
int main(){
  char c;
  bool breakIsPending = false;
  while(!breakIsPending){
    cout << "Wählen Sie: a, b, x = Ende : ";
    cin >> c;
    
    switch(c){
      case 'a':
        cout << "Programm a\n";
        break;
      case 'b':
        cout << "Programm b\n";
        break;
      case 'x':
        breakIsPending = true;
        break;
      default:
        break;
    }
  }
  cout << "\nProgrammende mit break\n" << sizeof(unsigned long long int);
  system("pause");
}