#ifndef SERVICE_H
#define SERVICE_H
#include "IceMachine.h"

/** @brief Serwis maszyny
 * 
 * Zawiera metody testujace maszyne
 * 
*/
class Service{
    public:
        /** @brief Test maszyny
         * 
         * Uruchamia, napelnia maszyne oraz probuje zrobic zadana ilosc lodow
         * 
         * @param[in] IceMachine testowana maszyna
         * @param[in] double ilosc lodow do zrobienia
         * 
         * @return Nic nie zwraca
        */
        void Test(IceMachine *, double);
        /** @brief Test maszyny fabrycznej o parametrach jak podana
         * 
         * Uruchamia, napelnia fabryczna wersje maszyny oraz probuje zrobic zadana ilosc lodow
         * 
         * @param[in] IceMachine testowana maszyna
         * @param[in] double ilosc lodow do zrobienia
         * 
         * @return Nic nie zwraca
        */
        void TestCopy(IceMachine, double);
};

#endif