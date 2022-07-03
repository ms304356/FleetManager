#include <iostream>



#include "Taxi.h"
#include "Van.h"
#include "Limo.h"
#include "SDTaxi.h"
//#include "Interface.h"

int main(int argc, const char *argv[]) {
    try {

        ms::Driver ex_driver("John", "Posser", ms::Pesel("02251512370"), {"B", "C"});
        std::vector<std::shared_ptr<ms::Car>> fleet;

        ms::Car car("FY123456AK",
                       "B",
                       "Mercedes",
                       "Benz",
                       "Red",
                       std::make_shared<ms::Driver>(ex_driver));
        fleet.push_back(std::make_shared<ms::Car>(car));
        ms::Taxi taxi("FY123456AK",
                      "B",
                      "Mercedes",
                      "Benz",
                      "Red",
                      std::make_shared<ms::Driver>(ex_driver),
                      "extra");
        fleet.push_back(std::make_shared<ms::Taxi>(taxi));
        ms::Van van("FY123456AK",
                    "B",
                    "Mercedes",
                    "Benz",
                    "Red",
                    std::make_shared<ms::Driver>(ex_driver),
                    9);
        fleet.push_back(std::make_shared<ms::Van>(van));
        ms::Limo limo("FY123456AK",
                      "B",
                      "Mercedes",
                      "Benz",
                      "Red",
                      std::make_shared<ms::Driver>(ex_driver),
                      9.1);
        fleet.push_back(std::make_shared<ms::Limo>(limo));
        ms::SDTaxi sdtaxi("FY123456AK",
                          "B",
                          "Mercedes",
                          "Benz",
                          "Red",
                          nullptr);
        fleet.push_back(std::make_shared<ms::SDTaxi>(sdtaxi));


    }


        //This should not work, but it does, and I'm afraid to touch it at this point.


    catch (std::string exception) {
        std::cout << exception;
    }
    catch (char const *exception) {
        std::cout << exception;
    }
    catch (std::shared_ptr<ms::Driver>) {
        std::cout << "Humans need not apply. A self-driving vehicle does not need a driver.";
    }
    return 0;
}


