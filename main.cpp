#include <iostream>
#include <fstream>
//#include "Taxi.h"
//#include "Van.h"
//#include "Limo.h"
//#include "SDTaxi.h"
#include "Interface.h"
#include "FleetOperations.h"


int main(int argc, const char *argv[]) {
    try {
        mainMenu("data.txt");
    }


    catch (std::string exception) {
        std::cout << exception;
    }
    catch (char const *exception) {
        std::cout << exception;
    }

    return 0;
}


