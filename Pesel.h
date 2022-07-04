//
// Created by Mykyta Shemechko on 02/07/2022.
//

#ifndef FLEETMANAGER_PESEL_H
#define FLEETMANAGER_PESEL_H

#pragma once
#include <string>

namespace ms {

     class Pesel {
        std::string pesel;
        const static uint8_t w[];
        const std::string wrong_pesel_exception = "\nIncorrect pesel.\n";
    public:

        Pesel(const std::string& pesel) : pesel(pesel) {
            if (pesel.length() != 11) throw wrong_pesel_exception;

            for (const auto c : pesel) {
                if (c < '0' || c > '9') throw wrong_pesel_exception;
            }
            uint16_t sum = 0;
            for (size_t i = 0; i < pesel.size(); ++i) {
                sum += (pesel[i] - '0') * w[i];
            }
            if (sum % 10) throw wrong_pesel_exception;

        }
         std::string getPesel() const {
            return pesel;
        }
    };

    const uint8_t Pesel::w[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1};

}


#endif //FLEETMANAGER_PESEL_H