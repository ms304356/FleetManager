//
// Created by Mykyta Shemechko on 03/07/2022.
//

#ifndef FLEETMANAGER_TAXI_H
#define FLEETMANAGER_TAXI_H

#pragma once
#include "Car.h"


namespace ms {
    class Taxi : public ms::Car {
        std::string luxClass;
    public:
        Taxi(const std::string& licensePlate, const std::string licenseType, const std::string& brand, const std::string& model, const std::string& color, std::shared_ptr<ms::Driver> driver, const std::string &luxClass) :
                Car(licensePlate, licenseType, brand, model, color, driver), luxClass(luxClass) {

        }

        const std::string getLuxClass() {
            return luxClass;
        }
        virtual std::vector<std::string> getCarData() const {

            std::vector<std::string> carData = Car::getCarData();
            carData.insert(carData.begin(), luxClass);
            carData.insert(carData.begin(), "Taxi");

            return carData;
        }

    };
}

#endif //FLEETMANAGER_TAXI_H