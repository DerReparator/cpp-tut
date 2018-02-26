/**
 *  This programm solves Uebung 1.13 (p. 95).
 **/

#include <iostream>
#include <vector>

using namespace std;

const int minimum = -99;
const int maximum = 100;
const vector<int> intervall = {-90, -80, -70, -60, -50, -40, -30, -20, -10, 0, 10, 20, 30, 40, 50, 60, 70, 80, 90, maximum};

int main(void){
  int eingabe {0};
  vector<size_t> anzahlen(intervall.size());
  while(true){
    cout << "Bitte eine Zahl zwischen -99 und 100 eingeben: ";
    cin >> eingabe;
    if(eingabe < minimum || eingabe > maximum){
      break;
    }
    for(int i = 0; i < intervall.size(); i++){
      if(eingabe <= intervall.at(i)){
        anzahlen.at(i)++;
        break;
      }
    }
  }
  for(int i = 0; i < intervall.size(); i++){
    cout << "Intervall [" << intervall[i]-9 << ',' << intervall[i] << "] Groesse: " << anzahlen[i] << endl;
  }
  system("pause");
}