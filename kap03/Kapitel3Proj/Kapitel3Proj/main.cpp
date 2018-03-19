/**
 *  This program solves Uebung 3.1 (p. 173f.).
 */

#include "Person.h"
#include "IntMenge.h"
#include "Personalverwaltung.h"
#include "Taschenrechner.h"

//#define PERSON_TEST
//#define INTMENGE_TEST
//#define PERSONALVERWALTUNG_TEST
#define TASCHENRECHNER_TEST

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

#ifdef PERSONALVERWALTUNG_TEST
    Personalverwaltung personalverwaltung("daten.txt");
    std::cout << "Gelesene Namen und Personalnummern:\n";
    personalverwaltung.ausgeben();
    personalverwaltung.dialog();
    std::cout << "Programmende!\n";
#endif

#ifdef TASCHENRECHNER_TEST
    while(true){
        std::cout << "Bitte einen mathematischen Ausdruck eingeben, z.B. 4*(13+2)"
        << "\n(Abbruch durch Eingabe einer Leerzeile) : ";
        std::string anfrage;
        getline(std::cin, anfrage);

        if(anfrage.length() > 0) {
            Taschenrechner tr(anfrage);
            std::cout << "\nDas Ergebnis der Anfrage '"
            << tr.getAnfrage() << "' ist "
            << tr.getErgebnis() << '\n';
        }
        else break;
    }
#endif // TASCHENRECHNER_TEST
}
