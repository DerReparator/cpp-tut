#ifndef BETRAG_T
#define BETRAG_T

#include <iostream>

template <typename T>
T betrag(const T t){ return (t > 0) ? t : -t; }

template <>
char betrag(const char c){
	std::cerr << "Betrag ist auf Datentyp char nicht definiert!" << '\n';
	return c;
}

template <>
bool betrag(const bool b){
	std::cerr << "Betrag ist auf Datentyp bool nicht definiert!" << '\n';
	return b;
}

#endif