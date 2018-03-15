#ifndef INTMENGE_H
#define INTMENGE_H

#include <vector>
#include <iostream>

class IntMenge
{
    public:
        IntMenge();
        void hinzufuegen(int el);
        void entfernen(int el);
        bool istMitglied(int el) const;
        size_t size() const;
        void anzeigen() const;
        void loeschen();
        int getMax() const;
        int getMin() const;
    private:
        std::vector<int> menge;
        int finden(int el) const;
        size_t anzahl;
};

#endif // INTMENGE_H
