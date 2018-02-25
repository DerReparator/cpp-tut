/**
 *	This program solves Aufgabe 1.15 (p. 108).
 */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

static string codierung {"0123456789ABCDEF"};

int main(void){
	string dateipfad;
	cout << "Dateiname: ";
	getline(cin, dateipfad);
	
	ifstream quelle(dateipfad, ios::binary);
	char c;
	
	while (quelle.get(c)) {
		unsigned char uc = static_cast<unsigned char>(c);
		unsigned int zahl = static_cast<unsigned int>(uc);
		
		cout << (codierung[zahl/16]) << codierung.at(zahl%16) << ' ';
	}
	cout << endl;
	quelle.close();
	getline(cin, dateipfad); // Warten auf ENTER
	return 0;
}