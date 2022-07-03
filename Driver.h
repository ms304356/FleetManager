//
// Created by Mykyta Shemechko on 02/07/2022.
//

#ifndef FLEETMANAGER_DRIVER_H
#define FLEETMANAGER_DRIVER_H

#pragma once
#include <string>
#include <vector>
#include "Pesel.h"
#include "Person.h"
#include <vector>

namespace ms {

    class Driver : public ms::Person {
        std::vector<std::string> licenseTypes;
    public:
        Driver(const std::string &firstName, const std::string &lastName, const ms::Pesel &pesel, const std::vector<std::string>& licenseTypes) :
            Person(firstName, lastName, pesel){
                Driver::licenseTypes = licenseTypes;
        }


        bool checkLicenseType(const std::string licenseType) const {
            for(auto item: licenseTypes){
                if (item == licenseType) return true;
            }
            return false;
        }


        std::vector<std::string> getDriverData() const {
            std::vector<std::string> driverData;
            driverData.push_back(Driver::getPesel());
            driverData.push_back(Driver::getFirstName());
            driverData.push_back(Driver::getLastName());
            driverData.insert(driverData.end(), licenseTypes.begin(), licenseTypes.end());
            return driverData;
        }
    };
}

#endif //FLEETMANAGER_DRIVER_H