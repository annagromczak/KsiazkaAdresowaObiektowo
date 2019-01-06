#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikManager.h"

using namespace std;

class PlikZAdresatami
{
    const string nazwaPlikuZAdresatami;
    const string nazwaTymczasowegoPlikuZAdresatami;
    int idOstatniegoAdresata;

private:
    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    void usunOdczytywanyPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazweTymczasowegoPlikuNaNazweOdczytywanegoPliku(string nazwaTymczasowegoPlikuZRozszerzeniem, string nazwaPlikuZRozszerzeniem);

public:
    PlikZAdresatami(string NAZWA_PLIKU_Z_ADRESATAMI, string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI) : nazwaPlikuZAdresatami(NAZWA_PLIKU_Z_ADRESATAMI), nazwaTymczasowegoPlikuZAdresatami(NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI) {idOstatniegoAdresata = 0;};

    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void dopiszAdresataDoPliku(Adresat adresat);
    int pobierzIdOstatniegoAdresata();
    void edytujWybranaLinieWPliku(int numerEdytowanejLinii, string liniaZDanymiAdresataOddzielonePionowymiKreskami);
    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
    void usunWybranaLinieWPliku(int numerUsuwanejLinii);
};

#endif
