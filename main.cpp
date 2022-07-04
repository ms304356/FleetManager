#include <iostream>
#include <fstream>
//#include "Taxi.h"
//#include "Van.h"
//#include "Limo.h"
//#include "SDTaxi.h"
//#include "Interface.h"
#include "FleetOperations.h"


int main(int argc, const char *argv[]) {
    try {


//        ms::Driver ex_driver("John", "Posser", std::make_shared<ms::Pesel>("02251512370"), "B");
//        std::vector<std::shared_ptr<ms::Car>> fleet;
//
//        ms::Taxi taxi("FY123456AK",
//                      "B",
//                      "Mercedes",
//                      "Benz",
//                      "Red",
//                      std::make_shared<ms::Driver>(ex_driver),
//                      "extra");
//        fleet.push_back(std::make_shared<ms::Taxi>(taxi));
//        ms::Van van("FY123456AK",
//                    "B",
//                    "Mercedes",
//                    "Benz",
//                    "Red",
//                    std::make_shared<ms::Driver>(ex_driver),
//                    9);
//        fleet.push_back(std::make_shared<ms::Van>(van));
//        ms::Limo limo("FY123456AK",
//                      "B",
//                      "Mercedes",
//                      "Benz",
//                      "Red",
//                      std::make_shared<ms::Driver>(ex_driver),
//                      9.1);
//        fleet.push_back(std::make_shared<ms::Limo>(limo));
//        ms::SDTaxi sdtaxi("FY123456AK",
//                          "B",
//                          "Mercedes",
//                          "Benz",
//                          "Red",
//                          nullptr,
//                          "quick");
//        fleet.push_back(std::make_shared<ms::SDTaxi>(sdtaxi));
//        std::ifstream InputFile( "data.txt");
//
//        std::cout << drawList(readFleetDataFromFile(InputFile));
//
//        InputFile.close();




        std::ofstream OutputFile("data.txt");


        OutputFile.close();



    }


//This should not work, but it does, and I'm afraid to touch it at this point.


    catch (std::string exception) {
        std::cout << exception;
    }
    catch (char const *exception) {
        std::cout << exception;
    }

    return 0;
}


