//
// Created by Mykyta Shemechko on 03/07/2022.
//

#ifndef FLEETMANAGER_SDTAXI_H
#define FLEETMANAGER_SDTAXI_H

#pragma once
#include "Car.h"


namespace ms {
    class SDTaxi : public ms::Car {
        std::string speedSetting;
    public:
        SDTaxi(const std::string& licensePlate, const std::string licenseType, const std::string& brand, const std::string& model, const std::string& color, std::shared_ptr<ms::Driver> driver, const std::string &speedSetting) :
                Car(licensePlate, licenseType, brand, model, color, driver), speedSetting(speedSetting) {
            if(driver != nullptr) {
                throw driver;
            }
            if(!(speedSetting== "quick" || speedSetting == "standard")) {
                throw "This speed setting is not allowed! Use either \"quick\" or \"standard\"";
            }
        }

        const std::string getSpeedSetting() {
            return speedSetting;
        }


        virtual std::vector<std::string> getCarData() const {
            std::vector<std::string> carData = Car::getCarData();
            carData.insert(carData.begin(), speedSetting);
            carData.insert(carData.begin(), "SDTaxi");
            return carData;
        }

    };
}

#endif //FLEETMANAGER_SDTAXI_H