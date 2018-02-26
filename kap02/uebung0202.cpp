/**
 *  This program solves Uebung 2.2 (p. 116).
 */
 
#include <iostream>
using namespace std;

double power(double x, int y);

int main(void){
  double base;
  int expo;
  cout << "Geben Sie die Basis ein [Dezimalzeichen: . ]: ";
  cin >> base;
  cout << "Geben Sie den ganzzahligen Exponenten ein: ";
  cin >> expo;
  cout << base << " hoch " << expo << " = " << power(base, expo) << '\n';
  system("pause");
}

double power(double x, int y){
  double pow {x};
  if(0 == y){
    return 1;
  } else if(y < 0) {
    for(int i = 1; i < -y; ++i)
      pow *= x;
    return 1 / pow;
  } else {
    for(int i = 1; i < y; ++i)
      pow *= x;
    return pow;
  }
}