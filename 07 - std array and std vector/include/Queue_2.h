#ifndef Queue_2_H
#define Queue_2_H

#include <iostream>
#include <array>

class Queue_2{
    public:
        /** @brief Metoda usuwajaca pierwszy element z tablicy
         * 
         * Gdy tablica jest pusta, zwraca 0. Ususwa pierwszy element
         * 
         * @return Zwraca usunieta wartosc lub 0 gdy tablica pusta 
         *
        */
        int Dequeue();
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
        void Enqueue(int);
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
        /** @brief ilosc elementow w tablicy*/
        int _count = 0;
        /** @brief definicja tablicy array*/
        std::array<int, 4> _array;
};

#endif