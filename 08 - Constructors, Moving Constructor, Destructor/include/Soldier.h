#ifndef SOLDIER_H
#define SOLDIER_H

/** @brief Klasa zolnierzy
 * 
 * Zawiera typ oraz ilosc
 * 
*/
class AndroidSoldier {
    public:
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
    private:
        int _type;
        int _quantity;
};

#endif