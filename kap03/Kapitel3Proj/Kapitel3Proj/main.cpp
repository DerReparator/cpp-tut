/**
 *  This program solves Uebung 3.1 (p. 173f.).
 */

#include "Person.h"
#include <iostream>

int main()
{
    Person p("Annabella Meier", 22);
    std::cout << p.getName() << " ist " << p.getAlter() << " Jahre alt.\n";
    p.setAlter(23);
    std::cout << p.getName() << " hatte Geburtstag. Sie ist jetzt " << p.getAlter() << " Jahre alt.\n";
    p.setName("Annabela Schulz");
    std::cout << "Sie hat auch geheiratet. Ihr Name ist jetzt " << p.getName() << ".\n";
}
