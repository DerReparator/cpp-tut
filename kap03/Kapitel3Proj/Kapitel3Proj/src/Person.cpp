#include "Person.h"

Person::Person(const std::string n, unsigned int a) :
    name {n}, alter {a} {}

void Person::setName(const std::string& neuer_Name){
    Person::name = neuer_Name;
}

void Person::setAlter(unsigned int neues_Alter){
    Person::alter = neues_Alter;
}
