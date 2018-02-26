/**
 *  This program solves Uebung 1.14 (p. 95).
 **/

#include <iostream>
#include <string>

using namespace std;

static string dummy;

int main(void){
  long long unsigned int input {0L};
  long long unsigned int max {1};
  unsigned int itr {0};
  
  cout << "Geben Sie eine natuerliche Zahl ein: ";
  cin >> input;
  cout << endl;
  
  while(input > 1){
    if (max < input){
      max = input;
      cout << max;
      getline(cin, dummy);
    }
    if(input % 2){ // Zahl ungerade
      input *= 3;
      input++;
    } else { // Zahl gerade
      input /= 2;
    }
    itr++;
  }
  
  cout << "Ergebnis: " << input << ", Maximum: " << max << ", Iterationen: " << itr << endl;
  system("pause");
  return 0;
}