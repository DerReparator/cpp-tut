/**
 *	This file answers Uebung 3.6 (p. 198).
 */

// main.cpp
int main(){
	MeineKlasse object;
	
	//Fehlermeldung
	object.readonlyAttr = 123;
	
	// erlaubt
	cout << "objekt.readonlyAttribut="
	<< objekt.readonlyAttr << '\n';
}

// MeineKlasse.h

#ifndef MEINEKLASSE_H
#define MEINEKLASSE_H

class MeineKlasse{
	public:
		const int readOnlyAttr = 987;
}

#endif