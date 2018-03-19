#ifndef PERSONALPERSON_H
#define PERSONALPERSON_H
#include <string>

class PersonalPerson {
    public:
        PersonalPerson(const std::string& name_, const std::string& personalnr_)
        : name{name_}, personalnr{personalnr_}{
        }

        const auto& getName() const {
            return name;
        }

        const auto& getPersonalnummer() const{
            return personalnr;
        }
    private:
        std::string name;
        std::string personalnr;
};
#endif // PERSONALPERSON_H
