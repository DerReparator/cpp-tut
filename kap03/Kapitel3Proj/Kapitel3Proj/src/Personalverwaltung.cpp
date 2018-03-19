/**
 *  This solves Uebung 3.5 (p. 198).
 **/

#include "Personalverwaltung.h"
#include <fstream>
#include <iostream>

Personalverwaltung::Personalverwaltung(const std::string& dateiname)
{
    std::ifstream datenbank(dateiname);
    std::string name, persNr;
    if(!datenbank.good()){
        std::cerr << dateiname << " kann nicht geöffnet werden!";
        exit(-1);
    } else {
        getline(datenbank, name);
        while(name != "#"){
            getline(datenbank, persNr);
            if(persNr == "#"){
                break;
            }
            personal.push_back(PersonalPerson(name, persNr));
            getline(datenbank, name);
        }
        datenbank.close();
    }
}

void Personalverwaltung::ausgeben() const {
    for(PersonalPerson p : Personalverwaltung::personal){
        std::cout << p.getName() << '\t' << p.getPersonalnummer() << '\n';
    }
}

void Personalverwaltung::dialog() const {
    std::string input;
    while(getline(std::cin, input)){
        if(input == "x" || input == "X"){
            break;
        }
        int index = finden(input);
        if(index > -1){
            std::cout << personal.at(index).getName() << '\n';
        } else {
            std::cout << "Kein Mitarbeiter mit dieser Personalnummer bekannt.\n";
        }
    }
}

int Personalverwaltung::finden(const std::string& persNr) const {
    int index {0};
    for(PersonalPerson p : personal){
        if(persNr == p.getPersonalnummer()){
            return index;
        } else {
            ++index;
        }
    }
    return -1; /* nicht gefunden */
}
