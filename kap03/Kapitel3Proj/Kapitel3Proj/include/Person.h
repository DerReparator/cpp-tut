#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
    public:
        Person(const std::string n, unsigned int a);
        std::string getName();
        unsigned int getAlter();
        void setName(const std::string& neuer_Name);
        void setAlter(unsigned int alter);

    private:
        std::string name;
        unsigned int alter;
};

inline std::string Person::getName(){
    return name;
}

inline unsigned int Person::getAlter(){
    return alter;
}
#endif // PERSON_H
