#ifndef ARMY_C_H
#define ARMY_C_H

#include "AndroidSoldier.h"
#include <vector>

/** @brief Klasa armii, zawierajaca zolnierzy
 * 
 * Zawiera Vector typu AndroidSoldier zawierajaca zolnierzy
 * 
*/
class ArmyC {
    public:
        /** @brief Konstruktor bez argumentow 
         * 
         * Brak argumentow, vector pozostaje pusty
         * 
        */
        ArmyC();
        /** @brief Konstruktor kopiujacy
         * 
         * Kopiuje armie
         * 
        */
        ArmyC(const ArmyC&);
        /** @brief Konstruktor przenoszacy
         * 
         * Przenosi armie
         * 
        */
        ArmyC(ArmyC&&);
        /** @brief Operator kopiujacy
         * 
         * Kopuje armie przy przypisaniu znakiem =
         * 
        */
        ArmyC &operator=(const ArmyC&);
        /** @brief Operator przenoszacy
         * 
         * Przenosi armie przy przypisaniu znakiem =
         * 
        */
        ArmyC &operator=(ArmyC&&);
        /** @brief Destruktor klasy
         * 
         * Niszczy klase
         * 
        */
        ~ArmyC();
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