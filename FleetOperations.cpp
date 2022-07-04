#include "Car.h"
#include "Taxi.h"
#include "Van.h"
#include "Limo.h"
#include "SDTaxi.h"
#include <fstream>
#include <vector>

typedef std::vector<std::shared_ptr<ms::Car>> Fleet;
typedef std::vector<std::vector<std::string>> FleetData;

std::shared_ptr<ms::Car> convertDataToCar(std::vector<std::string> input) {
    if(input[0] == "Taxi") {
        return std::make_shared<ms::Taxi>(input[2], input[3], input[4], input[5], input[6], std::make_shared<ms::Driver>(input[8], input[9], input[7], input[10]), input[1]);
    } else if(input[0] == "Van") {
        return  std::make_shared<ms::Van>(input[2], input[3], input[4], input[5], input[6], std::make_shared<ms::Driver>(input[8], input[9], input[7], input[10]), stoi(input[1]));
    } else if(input[0] == "Limo") {
        return  std::make_shared<ms::Limo>(input[2], input[3], input[4], input[5], input[6], std::make_shared<ms::Driver>(input[8], input[9], input[7], input[10]), stod(input[1]));
    } else if(input[0] == "SDTaxi") {
        return  std::make_shared<ms::SDTaxi>(input[2], input[3], input[4], input[5], input[6], nullptr, input[1]);
    } else { throw "Error, cannot generate car object. Wrong input."; }
}


FleetData readFleetDataFromFile(std::string fileName) {
    std::ifstream file(fileName);
    std::string ReadLine;
    std::vector<std::vector<std::string>> ReadFile;

    while (getline (file, ReadLine)) {
        std::vector<std::string> ReadRow;
        std::string temp = "";
        for(int i=0;i<ReadLine.length();++i){

            if(ReadLine[i]=='|'){
                ReadRow.push_back(temp);
                temp = "";
            }
            else{
                temp.push_back(ReadLine[i]);
            }

        }
        ReadRow.push_back(temp);
        ReadFile.push_back(ReadRow);
    }
    file.close();
    return ReadFile;
}

void writeFleetDataToFile(std::string fileName, FleetData fleetData) {
    std::ofstream file(fileName);
    for(auto car: fleetData) {
        for(int i = 0; i < car.size(); i++){
            file << car[i];
            if ( i != car.size()-1) file << "|";
        }
        file<<"\n";
    }
    file.close();
}

Fleet convertFleetDataToFleet(FleetData fleetData) {
    Fleet fleet;
    for(auto car: fleetData) {
        fleet.push_back(convertDataToCar(car));
    }
    return fleet;
}
FleetData convertFleetToFleetData(Fleet fleet) {
    FleetData fleetData;
    for (auto car: fleet ) {
        fleetData.push_back(car->getCarData());
    }
    return fleetData;
}