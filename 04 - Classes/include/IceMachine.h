#ifndef ICE_MACHINE
#define ICE_MACHINE

/** @brief Maszyna do lodow
         * 
         * Produkuje lody, ma rozne metody
        */
class IceMachine {
    public:
        /** @brief Ustawianie identyfikatora
         * 
         * Ustawia identyfikator maszyny do lodow
         * 
         * @param[in] int Identyfikator do ustawienia
         * 
         * @return Nic nie zwraca
        */
        void SetID(int);
        /** @brief Wlaczanie/wylaczanie maszyny
         * 
         * Ustawia stan wlaczony lub wylaczony maszyny
         * 
         * @param[in] bool stan do ustawienia
         * 
         * @return Nic nie zwraca
        */
        void SetState(bool);
        /** @brief Ustawienie pojemnosci maszyny
         * 
         * WUstawia pojemnosc maszyny
         * 
         * @param[in] double wartosc nowej pojemnosci maszyny
         * 
         * @return Nic nie zwraca
        */
        void SetCapacity(double);
        /** @brief Ustawianie zuzycia proszku na jednego loda
         * 
         * Ustawia ilosc zuzywanego proszku do produkcji 1 loda
         * 
         * @param[in] double ilosc zuzywanego proszku na 1 loda
         * 
         * @return Nic nie zwraca
        */
        void SetConsumption(double);
        /** @brief Poczatkowa ilosc proszku w maszynie
         * 
         * Ustawia ile proszku jest w maszynie
         * 
         * @param[in] double ilosc proszku na poczatku
         * 
         * @return Nic nie zwraca
        */
        void SetPowder(double);
        /** @brief Prezentacja maszyny
         * 
         * Prezentuje jaki maszyna ma identyfikator, czy jest wlaczona itd
         * 
         * @return Nic nie zwraca
        */
        void Presentation();
        /** @brief Tworzy lody
         * 
         * Produkuje zadana ilosc lodow
         * 
         * @param[in] int ilosc lodow do wytworzenia
         * 
         * @return Nic nie zwraca
        */
        void Make(int);
        /** @brief Uruchamia maszyne
         * 
         * Wlacza lub wylacza maszyne
         * 
         * @return Nic nie zwraca
        */
        void Start();
        /** @brief Uzupelnia maszyne
         * 
         * Dosypuje proszek do maszyny
         * 
         * @param[in] int ilosc proszku do dosypania
         * 
         * @return Nic nie zwraca
        */
        void Reload(int);
        /** @brief Zatrzymanie dzialania maszyny
         * 
         * Wylacza maszyne
         * 
         * @return Nic nie zwraca
        */
        void Stop();
        
        double GetCapacity();
    private:
        int _id;
        bool _state;
        double _capacity;
        double _consumption;
        double _powder;
};

#endif