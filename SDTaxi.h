//
// Created by Mykyta Shemechko on 03/07/2022.
//

#ifndef FLEETMANAGER_SDTAXI_H
#define FLEETMANAGER_SDTAXI_H

#pragma once
#include "Car.h"


namespace ms {
    class SDTaxi : public ms::Car {
    public:
        SDTaxi(const std::string& licensePlate, const std::string licenseType, const std::string& brand, const std::string& model, const std::string& color, std::shared_ptr<ms::Driver> driver) :
                Car(licensePlate, licenseType, brand, model, color, driver) {
            if(driver != nullptr) {
                throw driver;
            }
        }


        virtual std::vector<std::string> getCarData() const {
            std::vector<std::string> carData = Car::getCarData();
            carData.push_back("SDTaxi");
            return carData;
        }

    };
}

#endif //FLEETMANAGER_SDTAXI_H