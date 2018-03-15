/**
 *  This program solves Uebung 3.1 (p. 173f.).
 */

#include "Person.h"
#include "IntMenge.h"

//#define PERSON_TEST
#define INTMENGE_TEST

int main()
{
#ifdef PERSON_TEST
    Person p("Annabella Meier", 22);
    std::cout << p.getName() << " ist " << p.getAlter() << " Jahre alt.\n";
    p.setAlter(23);
    std::cout << p.getName() << " hatte Geburtstag. Sie ist jetzt " << p.getAlter() << " Jahre alt.\n";
    p.setName("Annabela Schulz");
    std::cout << "Sie hat auch geheiratet. Ihr Name ist jetzt " << p.getName() << ".\n";
#endif // PERSON_TEST

#ifdef INTMENGE_TEST
    IntMenge menge;
    menge.anzeigen();
    menge.hinzufuegen(2);
    menge.hinzufuegen(-9);
    menge.hinzufuegen(2);
    menge.entfernen(99);
    menge.entfernen(-9);
    menge.anzeigen();
    menge.loeschen();
    menge.anzeigen();
    for(int i = 17; i < 33; ++i){
        menge.hinzufuegen(i*i);
    }
    std::cout << "Anzahl=" << menge.size() << " Minimum=" << menge.getMin() << " Maximum=" << menge.getMax() << std::endl;/**/
#endif // INTMENGE_TEST
}
