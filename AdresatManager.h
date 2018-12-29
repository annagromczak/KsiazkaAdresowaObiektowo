#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H

#include <iostream>
#include <vector>

#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatManager
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

private:
    Adresat podajDaneNowegoAdresata();
    string wczytajLinie();
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatManager(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika) : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);};

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
};

#endif
