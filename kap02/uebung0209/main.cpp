/**
 *  This program solves Uebung 2.9 (p. 144).
 */
 
#include "uebung0209.h"

using namespace std;

int main() {
  char ch;
  do {
    cout << "\n>>";
    cin.get(ch);
    if (ch != 'e') {
      cout << ausdruck(ch);
    }
  } while(ch != 'e');
}