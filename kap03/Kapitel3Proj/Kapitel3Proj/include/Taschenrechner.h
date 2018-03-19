#ifndef TASCHENRECHNER_H
#define TASCHENRECHNER_H

#include <string>
#include <cctype>
#include <iostream>

class Taschenrechner
{
    public:
        Taschenrechner(const std::string anfrage);
        std::string getAnfrage() const {
            return term;
        }
        long getErgebnis() const {
            return ergebnis;
        }
    private:
        std::string term;
        long ergebnis;
        long zahl(char& c);
        long faktor(char& c);
        long summand(char& c);
        long ausdruck(char& c);
        size_t term_index;
        void get(char& c);
};

#endif // TASCHENRECHNER_H
