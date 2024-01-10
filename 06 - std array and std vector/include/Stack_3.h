#ifndef STACK_3_H
#define STACK_3_H

class Stack_3{
    public:
        /** @brief Konstruktor klasy
         * 
         * Przyjmuje wielkosc pozadanej tablicy
         * 
         * @param[in] int wielkosc pozadanej tablicy
         * 
         * @return Nic nie zwraca
        */
        Stack_3(int);
        /** @brief Destruktor klasy
         * 
         * Zapewnia brak wyciekow pamieci przez usuniecie tablicy
         * 
         * @return Nic nie zwraca
        */
        ~Stack_3();
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
        /** @brief rozmiar tablicy*/
        int _size;
        /** @brief ilosc elementow w tablicy*/
        int _count = 0;
        /** @brief definicja wskaznika do tablicy*/
        int *_array;
};

#endif