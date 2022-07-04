//
// Created by Mykyta Shemechko on 02/07/2022.
//

#ifndef FLEETMANAGER_DRIVER_H
#define FLEETMANAGER_DRIVER_H


#include <string>
#include <vector>
#include "Person.h"

namespace ms {

    class Driver : public ms::Person {
        std::string licenseType;
    public:
        Driver(const std::string &firstName, const std::string &lastName, const std::string &pesel, const std::string& licenseType) :
            Person(firstName, lastName, pesel), licenseType(licenseType){

        }


        bool checkLicenseType(const std::string licenseType) const {
            if (Driver::licenseType == licenseType) return true;
            return false;
        }


        std::vector<std::string> getDriverData() const {
            std::vector<std::string> driverData;
            driverData.push_back(Driver::getPesel());
            driverData.push_back(Driver::getFirstName());
            driverData.push_back(Driver::getLastName());
            driverData.push_back(licenseType);
            return driverData;
        }
    };
}

#endif //FLEETMANAGER_DRIVER_H