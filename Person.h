//
// Created by Mykyta Shemechko on 02/07/2022.
//

#ifndef FLEETMANAGER_PERSON_H
#define FLEETMANAGER_PERSON_H

#pragma once
#include <string>
#include "Pesel.h"

namespace ms {
    class Person {
        std::string firstName;
        std::string lastName;
        std::shared_ptr<ms::Pesel> pesel;
    public:
        Person(const std::string& firstName, const std::string& lastName, const std::shared_ptr<ms::Pesel> pesel):
        firstName(firstName), lastName(lastName), pesel(pesel) {

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
            return pesel->getPesel();
        }
        std::vector<std::string> getPersonData() const {
            std::vector<std::string> personData;
            personData.push_back(firstName);
            personData.push_back(lastName);
            personData.push_back(pesel->getPesel());
            return personData;
        }
    };
}


#endif //FLEETMANAGER_PERSON_H