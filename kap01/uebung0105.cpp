/**
 *  This program is able to solve Uebung 1.5 (p. 83).
 **/

#include <iostream>

using namespace std;

const int INT_LENGTH = sizeof(int)*8;

int main(){
  int z;
  while(1){
    cout << "Geben Sie eine GANZE Zahl ein: ";
    cin >> z;
    for(int i = INT_LENGTH-1; i >= 0; i--){
      if((1<<i) & z){
        cout << 1;
      } else {
        cout << 0;
      }
    }
    cout << endl;
  }
  system("pause");
}