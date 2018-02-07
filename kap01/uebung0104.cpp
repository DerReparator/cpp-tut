/**
 *  This program solves Uebung 1.4 (p. 72).
 **/

#include <iostream>

using namespace std;

int main(){
  int a,b,c;
  int max;
  33
  cout << "Geben Sie 3 GANZE Zahlen ein: ";
  cin >> a >> b >> c;
  cout << "\n a = " << a << ", b = " << b << ", c = " << c << endl;
  
  if(a >= b && a >= c){
    max = a;
  } else if (b >= a && b >= c){
    max = b;
  } else if (c >= a && c >= b){
    max = c;
  }
  
  cout << "Das Maximum ist: " << max << endl;
  system("pause");
}