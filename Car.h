#ifndef FLEETMANAGER_CAR_H
#define FLEETMANAGER_CAR_H

#include <string>
#include <vector>
#include "Driver.h"
#include <memory>
namespace ms {
/**
 * Klasa ogólna samochodów
 */
    class Car {
        std::string licensePlate;
        std::string licenseType;
        std::string brand;
        std::string model;
        std::string color;
        std::shared_ptr<ms::Driver> driver;

    public:
        Car(const std::string& licensePlate, const std::string licenseType, const std::string& brand, const std::string& model, const std::string& color, std::shared_ptr<ms::Driver> driver) :
                licensePlate(licensePlate), licenseType(licenseType), brand(brand), model(model), color(color), driver(driver) {
            if(!(driver == nullptr)){
                if (!driver->checkLicenseType(licenseType)) {
                    throw ("\n" + licenseType + " license type is required for this vehicle!\n");
                }
            }

        }

        std::string getLicensePlate() const {
            return licensePlate;
        }

        virtual std::vector<std::string> getCarData() const {
            std::vector<std::string> carData;
            carData.push_back(licensePlate);
            carData.push_back(licenseType);
            carData.push_back(brand);
            carData.push_back(model);
            carData.push_back(color);
            if(driver == nullptr){
                carData.push_back("no_driver");
            } else {
                std::vector<std::string> driverData = driver->getDriverData();
                carData.insert(carData.end(), driverData.begin(), driverData.end());
            }
            //adding driver data to the car data
            return carData;
        }
    };

}

#endif //FLEETMANAGER_CAR_H