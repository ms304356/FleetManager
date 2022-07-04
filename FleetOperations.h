#ifndef FLEETMANAGER_FLEETOPERATIONS_H
#define FLEETMANAGER_FLEETOPERATIONS_H
#include "Car.h"


typedef std::vector<std::shared_ptr<ms::Car>> Fleet;
typedef std::vector<std::vector<std::string>> FleetData;

/**
 * Funkcja, która konwertuje wektor z danymi samochodu na objekt.
 * @param input wektor z danymi samochodu
 * @return objekt konkretnego typu samochodu
 */
std::shared_ptr<ms::Car> convertDataToCar(std::vector<std::string> input);

/**
 * Funkcja, która odczytuje dane o samochodach z pliku.
 * @param fileName nazwa pliku do którego są zapisane dane
 * @return wektor z danymi samochodów
 */
FleetData readFleetDataFromFile(std::string fileName);


/**
 * Funkcja, która wpisuje dane o samochodach do pliku.
 * @param fileName nazwa pliku do którego są zapisywane dane
 * @param fleetData wektor z danymi samochodów
 */
void writeFleetDataToFile(std::string fileName, FleetData fleetData);


/**
 * Funkcja, która wpisuje dane o samochodach do pliku.
 * @param fleetData wektor z danymi samochodów
 * @return wektor samochodów w postaci objektowej
 */
Fleet convertFleetDataToFleet(FleetData fleetData);


/**
 * Funkcja, która wpisuje dane o samochodach do pliku.
 * @param fleet wektor samochodów w postaci objektowej
 * @return wektor z danymi samochodów
 */
FleetData convertFleetToFleetData(Fleet fleet);

#endif //FLEETMANAGER_FLEETOPERATIONS_H
