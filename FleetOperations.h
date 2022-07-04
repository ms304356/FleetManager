//
// Created by Mykyta Shemechko on 04/07/2022.
//

#ifndef FLEETMANAGER_FLEETOPERATIONS_H
#define FLEETMANAGER_FLEETOPERATIONS_H
#include <vector>
#include <string>
#include "Car.h"


typedef std::vector<std::shared_ptr<ms::Car>> Fleet;
typedef std::vector<std::vector<std::string>> FleetData;


std::shared_ptr<ms::Car> convertDataToCar(std::vector<std::string> input);
FleetData readFleetDataFromFile(std::string fileName);
void writeFleetDataToFile(std::string fileName, FleetData fleetData);
Fleet convertFleetDataToFleet(FleetData fleetData);
FleetData convertFleetToFleetData(Fleet fleet);

#endif //FLEETMANAGER_FLEETOPERATIONS_H
