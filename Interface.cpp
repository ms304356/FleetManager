//
// Created by Mykyta Shemechko on 03/07/2022.
//



#include <iostream>
#include <vector>
#include <string>

#include "Car.h"


std::string carList(const std::vector<std::shared_ptr<ms::Car>> list) {
    std::string output;
     for (auto item : list ) {
         for( int i = 0; i < item->getCarData().size(); i++){
             output += item->getCarData()[i];
             if (i != item->getCarData().size()) output += " | ";
         }
         std::cout << std::endl;
     }
    return "";
}


