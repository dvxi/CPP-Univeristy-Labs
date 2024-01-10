#ifndef ARRAY_H
#define ARRAY_H

/** @brief Inicjalizacja tablicy
 * 
 * Funkcja tworzy tablice typu int i zwraca wskaznik do niej
 * 
 * @param[in] size rozmiar nowej tablicy
 * @return Funkcja zwraca wskaznik do nowej tablicy typu int, gdy size > 0, w innym wypadku zwraca NULL
*/
int *InitArray(int size);

/** @brief Stworzenie sekwencji
 *
 * Funkcja tworzy sekwencje kolejnych sum prefiksowych liczb naturalnych
 * 
 * @param[in] array wskaznik do modyfikowanej tablicy
 * @param[in] size rozmiar modyfikowanej tablicy
 * @return Funkcja nic nie zwraca 
 */
void CreateSequence(int *array, int size);

/** @brief Zmiana rozmiaru tablicy
 * 
 * Funkcja zmienia rozmiar tablicy array o rozmiarze size na rozmiar newSize
 * 
 * @param[in] array wskaznik do modyfikowanej tablicy
 * @param[in] size rozmiar modyfikowanej tablicy
 * @param[in] newSize pozadany nowy rozmiar tablicy
 * @return Funkcja zwraca w razie powodzenia wskaznik do powiekszonej tablicy, w przeciwnym razie do starej niezmodyfikowanej tablicy
*/
int *ChangeArraySize(int *array, int size, int newSize);

/** @brief Usuwanie tablicy
 * 
 * Funkcja usuwa tablice podana w parametrze
 * 
 * @param[in] array tablica do usuniecia
 * @return Funkcja nic nie zwraca
*/
void DeleteArray(int *array);

#endif