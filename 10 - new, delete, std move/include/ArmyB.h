#ifndef ARMY_B_H
#define ARMY_B_H

#include "AndroidSoldier.h"
#include <vector>

/** @brief Klasa armii, zawierajaca zolnierzy
 * 
 * Zawiera Vector typu AndroidSoldier zawierajaca zolnierzy
 * 
*/
class ArmyB {
    public:
        /** @brief Konstruktor bez argumentow 
         * 
         * Brak argumentow, vector pozostaje pusty
         * 
        */
        ArmyB();
        /** @brief Konstruktor kopiujacy
         * 
         * Kopiuje armie
         * 
        */
        ArmyB(const ArmyB&);
        /** @brief Operator kopiujacy
         * 
         * Kopuje armie przy przypisaniu znakiem =
         * 
        */
        ArmyB &operator=(const ArmyB&);
        /** @brief Destruktor klasy
         * 
         * Niszczy klase
         * 
        */
        ~ArmyB();
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
        AndroidSoldier* _soldiersVector;
        int _lastIndex;
};

#endif