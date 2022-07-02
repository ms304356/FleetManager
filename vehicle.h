//
// Created by Mykyta Shemechko on 02/07/2022.
//

#pragma once
#include <string>

namespace ms {

    class Car {
        std::string LicensePlate;
    public:
        Car(const std::string& LicensePlate) :
                LicensePlate(LicensePlate) {
        }

        std::string licensePlate() const {
            return LicensePlate;
        }
    };

}