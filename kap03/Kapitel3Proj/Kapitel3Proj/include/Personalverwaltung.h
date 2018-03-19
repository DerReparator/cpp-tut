#ifndef PERSONALVERWALTUNG_H
#define PERSONALVERWALTUNG_H
#include <vector>
#include "PersonalPerson.h"

class Personalverwaltung
{
    public:
        Personalverwaltung(const std::string& dateiname);

        void ausgeben() const;
        void dialog() const;
    private:
        std::vector<PersonalPerson> personal;
        int finden(const std::string& persNr) const;
};

#endif // PERSONALVERWALTUNG_H
