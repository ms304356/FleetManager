//
// Created by Mykyta Shemechko on 04/07/2022.
//

#ifndef FLEETMANAGER_FLEETOPERATIONS_H
#define FLEETMANAGER_FLEETOPERATIONS_H
#include <vector>
#include "Car.h"


typedef std::vector<std::shared_ptr<ms::Car>> Fleet;
typedef std::vector<std::vector<std::string>> FleetData;


static std::shared_ptr<ms::Car> convertDataToCar(std::vector<std::string> input);
static FleetData readFleetDataFromFile(std::ifstream file);
static void writeFleetDataToFile(std::ofstream file, FleetData fleetData);
static Fleet convertFleetDataToFleet(FleetData fleetData);
static FleetData convertFleetToFleetData(Fleet fleet);

#endif //FLEETMANAGER_FLEETOPERATIONS_H
