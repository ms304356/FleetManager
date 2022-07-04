#ifndef FLEETMANAGER_INTERFACE_H
#define FLEETMANAGER_INTERFACE_H


/**
 * Funkcja, która wypisuje listę danych zapisanych w wektorach na ekran
 * @param list wektor z danymi
 */
void drawList(std::vector<std::vector<std::string>> list);


/**
 * Funkcja, która wyświetla menu główne programu
 * @param saveFile plik gdzie są przechowywane dane
 */
void mainMenu(std::string saveFile);


/**
 * Funkcja, która rozwija szczególnie wybraną opcję
 * @param option wybrana opcja
 * @param saveFile plik gdzie są przechowywane dane
 */
void chosenOption(std::string option, std::string saveFile);


#endif //FLEETMANAGER_INTERFACE_H
