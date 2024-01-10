#ifndef ARMY_H
#define ARMY_H

#include "Soldier.h"
#include <vector>

/** @brief Klasa armii, zawierajaca zolnierzy
 * 
 * Zawiera Vector typu AndroidSoldier zawierajaca zolnierzy
 * 
*/
class Army {
    public:
        /** @brief Konstruktor bez argumentow 
         * 
         * Brak argumentow, vector pozostaje pusty
         * 
        */
        Army();
        /** @brief Konstruktor z 1 argumentem AndroidSoldier
         * 
         * Tworzy armie z 1 zolnierzem
         * 
         * @param[in] AndroidSoldier zolnierz do dodania
        */
        Army(AndroidSoldier);
        /** @brief Konstruktor z 2 argumentami AndroidSoldier
         * 
         * Tworzy armie z 2 zolnierzami
         * 
         * @param[in] AndroidSoldier zolnierz 1. do dodania
         * @param[in] AndroidSoldier zolnierz 2. do dodania
        */
        Army(AndroidSoldier, AndroidSoldier);
        /** @brief Konstruktor pobierajacy tablice zolnierzy
         * 
         * Tworzy armie z n zolnierzami
         * 
         * @param[in] int rozmiar tablicy
         * @param[in] AndroidSoldier** zolnierze do dodania
        */
        Army(int, AndroidSoldier**);
        /** @brief Konstruktor z argumentem vectora zolnierzy
         * 
         * Tworzy armie z zolnierzami z vecotra
         * 
        */
        Army(std::vector<AndroidSoldier>);
        /** @brief Konstruktor kopiujacy
         * 
         * Kopiuje armie
         * 
        */
        Army(Army &);
        /** @brief Konstruktor przenoszacy
         * 
         * Przenosi armie
         * 
        */
        Army(Army &&);
        /** @brief Wypisywanie armii
         * 
         * Wypisuje kolejnych zolnierzy w armii
        */
        void Print();
        /** @brief Usunecie czlonka armii
         * 
         * Usuwa ostatniego czlonka armii
         * 
        */
        void Remove();
        /** @brief Dodanie czlonka armii
         * 
         * Dodaje czlonka armii na sam koniec
         * 
         * @param[in] AndoridSoldier zolnierz do dodania
         * 
        */
        void Add(AndroidSoldier);
        /** @brief Czyszczenie armii
         * 
         * Usuniecie wszystkich czlonkow armii
         * 
        */
        void Clear();
        /** @brief Pobranie czlonkow armii
         * 
         * Zwraca vector czlonkow armii
         * 
         * @param[out] std::vector<AndoidSoldier> vector czlonkow armii
         * 
        */
        std::vector<AndroidSoldier> GetSoldiers();
    private:
        std::vector<AndroidSoldier> _soldiersVector;
};

#endif