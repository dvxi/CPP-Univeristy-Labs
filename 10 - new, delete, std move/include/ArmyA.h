#ifndef ARMY_A_H
#define ARMY_A_H

#include "AndroidSoldier.h"

/** @brief Klasa armii, zawierajaca zolnierzy
 * 
 * Zawiera Vector typu AndroidSoldier zawierajaca zolnierzy
 * 
*/
class ArmyA {
    public:
        /** @brief Konstruktor bez argumentow 
         * 
         * Brak argumentow, vector pozostaje pusty
         * 
        */
        ArmyA();
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
    private:
        AndroidSoldier _soldiersVector[10];
        int _lastIndex = 0;
};

#endif