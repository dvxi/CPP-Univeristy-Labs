#ifndef STACK_1_H
#define STACK_1_H
/** @brief Klasa obslugi tablicy
 * 
 * Tablica zaimplementowana z wykorzystaniem tablicy statycznej
*/
class Stack_1{
    public:
        /** @brief Metoda usuwajaca ostatni element z tablicy
         * 
         * Gdy tablica jest pusta, zwraca 0. Ususwa ostatni element
         * 
         * @return Zwraca usunieta wartosc lub 0 gdy tablica pusta 
         *
        */
        int Pop();
        /** @brief Sprawdzenie czy tablica pusta
         * 
         * Gdy tablica pusta zwraca 1, gdy nie zwraca 0
         * 
         * @return 1 - tablica pusta, 0 - tablica nie pusta
        */
        int IsEmpty();
        /** @brief Sprawdzenie czy tablica pelna
         * 
         * Gdy tablica pelna zwraca 1, gdy nie zwraca 0
         * 
         * @return 1 - tablica pelna, 0 - tablica nie pelna
        */
        int IsFull();
        /** @brief Dodaje element na koniec tablicy
         * 
         * Dodaje element na koniec tablicy sprawdzajac czy miesci sie w rozmiarze tablicy.
         * 
         * @return Nic nie zwraca
        */
        void Push(int);
        /** @brief Wypisanie elementow tablicy
         * 
         * Wypisuje elementy tablicy na ekran
         * 
         * @return Nic nie zwraca
        */
        void Print();
        /** @brief Zwraca ilosc elementow w tablicy
         * 
         * Zwraca ilosc elementow w tablicy
         * 
         * @return[int] Ilosc elementow w tablicy
        */
        int Size();
        /** @brief Czysci tablice
         * 
         * Usuwa wszystkie elementy w tablicy
         * 
         * @return Nic nie zwraca
        */
        void Clear();
    private:
        /** @brief Rozmiar tablicy */
        int _size = 4;
        /** @brief Ilosc elementow w tablicy */
        int _count = 0;
        /** @brief Definicja tablicy */
        int _array[4];
};

#endif