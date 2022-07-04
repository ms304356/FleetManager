//
// Created by Mykyta Shemechko on 03/07/2022.
//

#ifndef FLEETMANAGER_LIMO_H
#define FLEETMANAGER_LIMO_H

#include "Car.h"


namespace ms {
    class Limo : public ms::Car {
        double length;
    public:
        Limo(const std::string& licensePlate, const std::string licenseType, const std::string& brand, const std::string& model, const std::string& color, std::shared_ptr<ms::Driver> driver, const double &length) :
                Car(licensePlate, licenseType, brand, model, color, driver), length(length) {

        }

        const double getLength() {
            return length;
        }
        virtual std::vector<std::string> getCarData() const {
            std::vector<std::string> carData = Car::getCarData();
            carData.insert(carData.begin(), std::to_string(length));
            carData.insert(carData.begin(), "Limo");

            return carData;
        }

    };
}

#endif //FLEETMANAGER_LIMO_H