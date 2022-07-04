//
// Created by Mykyta Shemechko on 03/07/2022.
//
#ifndef FLEETMANAGER_INTERFACE_H
#define FLEETMANAGER_INTERFACE_H
#include <string>

void drawList(std::vector<std::vector<std::string>> list);

void mainMenu(std::string saveFile);

void chosenOption(std::string option, std::string saveFile);


#endif //FLEETMANAGER_INTERFACE_H
