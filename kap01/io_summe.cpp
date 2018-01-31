// Erstes Programm im Buch
#include <iostream>
using namespace std;

int main(){
	int summe, summand1, summand2;
	// Lies 2 Zahlen ein
	cout << " Zwei ganze Zahlen eingeben:";
	cin >> summand1 >> summand2;
	
	summe = summand1 + summand2;
	
	cout << "Summe=" << summe << '\n';
	cin >> summe;
	return 0;
}