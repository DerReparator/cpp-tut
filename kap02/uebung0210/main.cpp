/**
 *	This program solves Uebung 2.10 (p. 155).
 */
#include <iostream>
#include "gettype.t"

int main(void){
	int i;
	std::cout << getType(i) << '\n';
	unsigned int ui;
	std::cout << getType(ui) << '\n';
	char c;
	std::cout << getType(c) << '\n';
	bool b;
	std::cout << getType(b) << '\n';
	float f;
	std::cout << getType(f) << '\n';
	std::string s = "Das ist ein Test String";
	std::cout << getType(s) << '\n';
	system("pause");
}