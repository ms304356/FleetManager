//
// Created by Mykyta Shemechko on 03/07/2022.
//

#ifndef FLEETMANAGER_VAN_H
#define FLEETMANAGER_VAN_H

#pragma once
#include "Car.h"


namespace ms {
    class Van : public ms::Car {
        int capacity;
    public:
        Van(const std::string& licensePlate, const std::string licenseType, const std::string& brand, const std::string& model, const std::string& color, std::shared_ptr<ms::Driver> driver, const int &capacity) :
                Car(licensePlate, licenseType, brand, model, color, driver), capacity(capacity) {

        }

        const int getCapacity() {
            return capacity;
        }
        virtual std::vector<std::string> getCarData() const {
            std::vector<std::string> carData = Car::getCarData();
            carData.push_back("Van");
            carData.push_back(std::to_string(capacity));
            return carData;
        }

    };
}

#endif //FLEETMANAGER_VAN_H