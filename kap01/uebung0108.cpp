/**
 *  This program solves Uebung 1.8 (p. 84).
 **/

#include <iostream>

using namespace std;

unsigned long long int aufgabeA(unsigned int a, unsigned int b){
  unsigned long long int sum = 0;
  for(int i = 0; i < (b-a+1); i++){
    sum += (a+i);
  }
  return sum;
}

unsigned long long int aufgabeB(unsigned int a, unsigned int b){
  unsigned long long int sum = 0;
  int i = 0;
  while(i < (b-a+1)){
    sum += (a+i);
    i++;
  }
  return sum;
}

unsigned long long int aufgabeC(unsigned int a, unsigned int b){
  unsigned long long int sum = 0;
  int i = 0;
  do{
    sum += (a+i);
    i++;
  } while (i < (b-a+1));
  return sum;
}

unsigned long long int aufgabeD(unsigned int a, unsigned int b){
  unsigned long long int lB = b;
  unsigned long long int lA = a;
  return (lB*(lB+1)/2)-((lA-1)*lA/2);
}

int main(){
  unsigned int n1, n2;
  
  do {
    cout << "Geben Sie zwei natuerliche Zahlen ein: ";
    cin >> n1 >> n2;
    if(n2 >= n1){
      break;
    }
    cout << "\nDie zweite Zahl muss groesser als die erste Zahl sein!" << endl;
  } while (n2 < n1);
  
  cout << "\nSumme von " << n1 << " bis " << n2 << endl;
  cout << "a) mit for-Schleife: "       << aufgabeA(n1, n2) << endl;
  cout << "b) mit while-Schleife: "     << aufgabeB(n1, n2) << endl;
  cout << "c) mit do while-Schleife: "  << aufgabeC(n1, n2) << endl;
  cout << "d) ohne Schleife: "          << aufgabeD(n1, n2) << endl;
  system("pause");
  return 0;
}