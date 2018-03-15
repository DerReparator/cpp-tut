#include "IntMenge.h"

IntMenge::IntMenge()
    : anzahl{0} {}

void IntMenge::hinzufuegen(int el){
    if(!istMitglied(el)){
        if(++anzahl <= menge.size()){
            menge[anzahl] = el;
        } else {
            menge.push_back(el);
        }
    }
}

void IntMenge::entfernen(int el){
    int index = finden(el);
    if(index > -1){
        menge[index] = menge[--anzahl];
    }
}

bool IntMenge::istMitglied(int el) const {
    for(int i : menge){
        if(i == el){
            return true;
        }
    }
    return false;
}

size_t IntMenge::size() const {
    return anzahl;
}

void IntMenge::anzeigen() const {
    if(anzahl > 0){
        std::cout << '{';
        for(size_t i = 0; i < anzahl-1; ++i){
            std::cout << menge[i] << ',';
        }
        std::cout << menge.at(anzahl) << '}' << std::endl;
    } else {
        std::cout << "{}" << '\n';
    }
}

void IntMenge::loeschen(){
    menge = std::vector<int>{};
    anzahl = 0;
}

int IntMenge::getMax() const {
    int max {0};
    if(IntMenge::size() > 0){
        max = menge.at(0);
        for(int i : menge){
            if(i > max){
                max = i;
            }
        }
    }
    return max;
}

int IntMenge::getMin() const {
    int min {0};
    if(IntMenge::size() > 0){
        min = menge.at(0);
        for(int i : menge){
            if(i < min){
                min = i;
            }
        }
    }
    return min;
}

int IntMenge::finden(int el) const {
    int index {0};
    for(int i : menge){
        if(i == el){
            return index;
        } else {
            ++index;
        }
    }
    return -1; /* nicht gefunden */
}
