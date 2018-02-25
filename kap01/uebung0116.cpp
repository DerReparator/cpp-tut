/**
 *	This program solves Aufgabe 1.16 (p. 108).
 */
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

static string codierung {"0123456789ABCDEF"};

int main(void){
	string dateipfad;
	cout << "Dateiname: ";
	getline(cin, dateipfad);
	int puf_ind {0};
	vector<unsigned char> input(16);
	
	ifstream quelle(dateipfad, ios::binary);
	char c;
	
	while (quelle.get(c)) {
		unsigned char uc = static_cast<unsigned char>(c);
		unsigned int zahl;
		
		if(puf_ind < input.size()){
			input.at(puf_ind) = uc;
			puf_ind++;
		}
		
		if(puf_ind == input.size()){
			puf_ind = 0;
			for(auto c : input){
				cout << c;
			}
			cout << " | ";
			for(auto z : input){
				zahl = static_cast<unsigned int>(z);
				cout << (codierung[zahl/16]) << codierung.at(zahl%16) << ' ';
			}
			cout << endl;
		}
	}
	cout << endl;
	quelle.close();
	getline(cin, dateipfad); // Warten auf ENTER
	return 0;
}