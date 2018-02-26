/**
 *  This program solves Uebung 2.3 (p. 119).
 */

#include <iostream>

unsigned long long int fakultaet(unsigned int zahl);

int main(int argc, char* argv[]){
  if(argc > 1){
    std::cout << "Fakultät von " << argv[1] << " = " << fakultaet(int(argv[1]));
  }
  
  unsigned int zahl;
  
  while(true){
    std::cout << "\nGeben's eine Zahl zur Fakultaetsberechnung ein: ";
    std::cin >> zahl;
    std::cout << "\nFakultaet von " << zahl << " = " << fakultaet(zahl);
  }
}

unsigned long long int fakultaet(unsigned int n){
  if(n > 0){
    return fakultaet(n-1)*n;
  } else {
    return 1;
  }
}