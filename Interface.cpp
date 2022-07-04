//
// Created by Mykyta Shemechko on 03/07/2022.
//

#include <iostream>
#include <vector>
#include <string>
#include "FleetOperations.h"

void drawList(std::vector<std::vector<std::string>> list) {
    std::string output;
     for (int k = 0; k < list.size() ; k++ ) {
         output += std::to_string(k) + ". ";
         for( int i = 0; i < list[k].size(); i++){
             output += list[k][i];
             if (i != list[k].size()-1) output += " | ";
         }
         output += "\n";
     }
    std::cout << output;
}


void chosenOption(std::string option, std::string saveFile) {
    if(option == "list") {
        drawList(readFleetDataFromFile(saveFile));
    } else if(option == "remove") {
        int input;
        FleetData fleet = readFleetDataFromFile(saveFile);
        drawList(fleet);
        std::cout<<"Which one do you wish to delete? (0 to " << fleet.size()-1 << ")";
        std::cin>>input;
        if(input < fleet.size() && input >= 0) {
            fleet.erase(fleet.begin()+input);
        } else throw "Error! there is no such car in the fleet.";
        drawList(fleet);
        writeFleetDataToFile(saveFile, fleet);
    } else if(option == "add") {
        std::string vehicle_type;
        std::string input;
        std::vector<std::string> vehicle;
        FleetData fleet = readFleetDataFromFile(saveFile);
        std::cout<<"What type of vehicle do you wish to add? (Taxi, Van, Limo or SDTaxi) ";
        std::cin>>vehicle_type;

        if(vehicle_type == "SDTaxi"){
            vehicle.push_back(vehicle_type);
            std::cout<<"What is the speed setting? (quick or standard) ";
            std::cin>>input;
            vehicle.push_back(input);
            std::cout<<"What is the license plate number? ";
            std::cin>>input;
            vehicle.push_back(input);
            //Driver's license is not required for this vehicle type
            vehicle.push_back("None");
            std::cout<<"What is the brand of this vehicle? ";
            std::cin>>input;
            vehicle.push_back(input);
            std::cout<<"What is the model of this vehicle? ";
            std::cin>>input;
            vehicle.push_back(input);
            std::cout<<"What is the color of this vehicle? ";
            std::cin>>input;
            vehicle.push_back(input);
            Fleet fl = convertFleetDataToFleet(fleet);
            fl.push_back(convertDataToCar(vehicle));

            writeFleetDataToFile(saveFile, convertFleetToFleetData(fl));
            drawList(convertFleetToFleetData(fl));


        } else if(vehicle_type == "Taxi" || vehicle_type == "Van" || vehicle_type == "Limo") {
            vehicle.push_back(vehicle_type);
            if(vehicle_type == "Taxi") {
                std::cout<<"What is the luxury class? ";
            } else if(vehicle_type == "Van") {
                std::cout<<"What is the van's capacity? ";
            } else if(vehicle_type == "Limo") {
                std::cout<<"What is the vehicle's length? ";
            }
            std::cin>>input;
            vehicle.push_back(input);
            std::cout<<"What is the license plate number? ";
            std::cin>>input;
            vehicle.push_back(input);
            std::cout<<"What is the driver's license type required for this vehicle? ";
            std::cin>>input;
            vehicle.push_back(input);
            std::cout<<"What is the brand of this vehicle? ";
            std::cin>>input;
            vehicle.push_back(input);
            std::cout<<"What is the model of this vehicle? ";
            std::cin>>input;
            vehicle.push_back(input);
            std::cout<<"What is the color of this vehicle? ";
            std::cin>>input;
            vehicle.push_back(input);
            std::cout<<"What is the pesel number of the driver? ";
            std::cin>>input;
            vehicle.push_back(input);
            std::cout<<"What is the first name of the driver? ";
            std::cin>>input;
            vehicle.push_back(input);
            std::cout<<"What is the second name of the driver? ";
            std::cin>>input;
            vehicle.push_back(input);
            std::cout<<"What is the driver's license type? ";
            std::cin>>input;
            vehicle.push_back(input);
            Fleet fl = convertFleetDataToFleet(fleet);
            fl.push_back(convertDataToCar(vehicle));

            writeFleetDataToFile(saveFile, convertFleetToFleetData(fl));
            drawList(convertFleetToFleetData(fl));
        } else throw "Error! There is no such option";

    } else throw "Error! There is no such option";

}
void mainMenu(std::string saveFile) {
    std::string input;
    std::cout<<"Welcome to the FleetManager!\n";
    std::cout<<"This program allows your Taxi company to manage your fleet of cars.\n";
    std::cout<<"You navigate by using text commands. Use \"list\" to show the list of currently added cars, \"remove\" to remove a certain car from the list and \"add\" to add a car to the list.\n";
    std::cout<<"How do you wish to proceed?\n";
    std::cin>>input;
    chosenOption(input, saveFile);
}


