#ifndef LIST_H
#define LIST_H


// Element listy
struct slistEl{
  slistEl * next;
  char data;
};

// Lista
struct slist{
  slistEl * head;
};

/** @brief Inicjalizacja listy
 * 
 * Funkcja przypisuje NULL jako pierwszy element listy.
 * 
 * @param[in] list wskaznik do listy
 * @return Funkcja nic nie zwraca
*/
void init(slist * list);

/** @brief Dodawanie elementu na koniec listy.
 * 
 * Funkcja dodaje element na koniec listy. Jezeli lista jest pusta, nowy element staje sie glowa listy.
 * 
 * @param[in] list wskaznik do listy
 * @param[in] c wartosc dodawanego elementu
 * @return Funkcja nic nie zwraca
*/
void push_back(slist * list, char c);

/** @brief Usuwanie nastepnego elementu z listy.
 * 
 * Funkcja usuwa element nastepujacy po przekazanym w argumencie.
 * 
 * @param[in] e wskaznik do elementu w liscie
 * @return Funkcja nic nie zwraca
*/
void delete_after(slistEl * e);

/** @brief Wyszukanie elementu w liscie.
*
* Funkcja przeszukuje liste w celu znalezienia podanego elementu.
*
* @param[in] list  wskaznik do listy
* @param[in] c  wartosc szukanego elementu 
* @return wskaznik do pierwszego elementu listy o wartosci c jesli taki element jest w liscie \n
* NULL jesli lista nie posiada elementu o wartosci c
*/
slistEl * find(slist * list, char c);

/** @brief Wypisanie listy w terminalu.
 * 
 * Funkcja przechodzi prez liste poczawszy od pierwszego elementu i wypisuje ja na ekran w formacie "Moja lista <[elementy_tablicy]>".
 * 
 * @param[in] list wskaznik do listy
 * @return Funkcja nic nie zwraca
*/
void printl(slist * list);

#endif
