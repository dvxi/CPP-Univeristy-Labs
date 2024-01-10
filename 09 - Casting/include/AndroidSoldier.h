#ifndef SOLDIER_H
#define SOLDIER_H

#include <string>
/** @brief Klasa zolnierzy
 * 
 * Zawiera typ oraz ilosc
 * 
*/
class AndroidSoldier {
    public:
        /** @brief Konstruktor konwertujacy
         * 
         * Konwertuje int w AndroidSoldier
         * 
         * @param[in] int typ
         * 
        */
        explicit AndroidSoldier(int);
        /** @brief Konstruktor wymagajacy dwoch zmiennych int
         * 
         * Tworzy AndoridSoldier ustawiajac mu typ i ilosc
         * 
         * @param[in] int typ
         * @param[in] int ilosc
         * 
        */
        AndroidSoldier(int, int);
        /** @brief Wypisanie zolnierza
         * 
         * Wypisuje typ i ilosc zolnierza
         * 
        */
        void Print();
        /** @brief Ustawienie ilosci
         * 
         * Ustawia ilosc na podana wartosc
         * 
         * @param[in] int nowa ilosc zolnierza
         * 
        */
        void SetCard(int);

        /** @brief Konwerter na int
         * 
         * Zmienia typ na int i zwraca ilosc zolnierzy
         * 
        */
        operator int() const {
            return _type;
        }

        /** @brief Konwerter na string
         * 
         * Zmienia typ na string i zwraca opis armii
         * 
        */
        operator std::string() const {
            return "<typ=" + std::to_string(_type) + ", ilosc=" + std::to_string(_quantity) + ">";
        }
        
        /** @brief Konwerter na string ToString()
         * 
         * Zmienia typ na string i zwraca opis armii
         * 
        */
        std::string ToString() const;
    private:
        friend int Compare(const AndroidSoldier&, const AndroidSoldier&);
        friend class Army;
        int _type;
        int _quantity;
};

#endif