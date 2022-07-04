//
// Created by Mykyta Shemechko on 02/07/2022.
//

#ifndef FLEETMANAGER_PERSON_H
#define FLEETMANAGER_PERSON_H


#include <string>

namespace ms {
    class Person {
        std::string firstName;
        std::string lastName;
        std::string pesel;
        constexpr const static uint8_t  w[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1};
        const std::string wrong_pesel_exception = "\nInvalid pesel.\n";
    public:
        Person(const std::string& firstName, const std::string& lastName, const std::string pesel):
        firstName(firstName), lastName(lastName), pesel(pesel) {
            if (pesel.length() != 11) throw wrong_pesel_exception;
            for (const auto c : pesel) {
                if (c < '0' || c > '9') throw wrong_pesel_exception;
            }
            uint16_t sum = 0;
            for (size_t i = 0; i < pesel.size(); ++i) {
                sum += (pesel[i] - '0') * w[i];
            }
            if (sum % 10) throw wrong_pesel_exception;
        }
        std::string getFirstName() const {
            return firstName;
        }
        std::string getLastName() const {
            return lastName;
        }

        std::string getFullName() const {
            return firstName + " " + lastName;
        }
        std::string getPesel() const {
            return pesel;
        }
        std::vector<std::string> getPersonData() const {
            std::vector<std::string> personData;
            personData.push_back(firstName);
            personData.push_back(lastName);
            personData.push_back(pesel);
            return personData;
        }
    };

}


#endif //FLEETMANAGER_PERSON_H