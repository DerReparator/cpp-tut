/**
 *  This program solves Uebung 2.7 (p. 129).
 */
#include <iostream>

using namespace std;

bool istAlphanumerisch(const string&);

int main(void){
  string text;
  
  cout << ">> ";
  while(getline(cin, text)){
    if (text == "e" || text == "E"){
      exit(0);
    }
    if(istAlphanumerisch(text))
      cout << "\nEingabe ist alphanumerisch.\n";
    else
      cout << "\nEingabe ist nicht alphanumerisch.\n";
    cout << ">> ";
  }
}

bool istAlphanumerisch(const string& text){
  for(auto c : text){
    if((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
      continue;
    else
      return false;
  }
  return true;
}