//
// Created by Mykyta Shemechko on 03/07/2022.
//



#include <iostream>
#include <vector>
#include <string>



std::string mainMenu() {
    std::cout<<"Welcome to the FleetManager!\n";
    std::cout<<"This program allows your Taxi company to manage your fleet of cars.";
    std::cout<<"You navigate by using text commands. Use \"list\" to show the list of currently added cars, \"remove\" ";
}

std::string drawList(std::vector<std::vector<std::string>> list) {
    std::string output;
     for (auto item : list ) {
         for( int i = 0; i < item.size(); i++){
             output += i + ". ";
             output += item[i];
             if (i != item.size()-1) output += " | ";
         }
         output += "\n";
     }
    return output;
}





