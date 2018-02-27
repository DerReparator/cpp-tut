/**
 *	This program solves Uebung 2.11 (p. 155).
 */
 
#include "betrag.t"

int main(void){
	long long int lli {-7275928765923569287L};
	int i {0};
	unsigned int ui {34555};
	double d {-88.69};
	char c {'g'};
	
	std::cout << "Betrag von " << i << " ist " << betrag(i) << '\n';
	std::cout << "Betrag von " << lli << " ist " << betrag(lli) << '\n';
	std::cout << "Betrag von " << ui << " ist " << betrag(ui) << '\n';
	std::cout << "Betrag von " << d << " ist " << betrag(d) << '\n';
	std::cout << "Betrag von " << c << " ist " << betrag(c) << '\n';
	system("pause");
	return 0;
}