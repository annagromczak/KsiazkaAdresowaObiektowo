#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H

#include <iostream>
#include <vector>

#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikManager.h"

using namespace std;

class AdresatManager
{
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;


private:
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    string wczytajLinie();
    PlikZAdresatami plikZAdresatami;
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatManager(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {idOstatniegoAdresata = plikZAdresatami.pobierzZPlikuIdOstatniegoAdresata();};
    int dodajAdresata(UzytkownikManager &uzytkownikManager);
    void wczytajAdresatowZPliku(UzytkownikManager &uzytkownikManager);
    void wyswietlWszystkichAdresatow();

};

#endif
