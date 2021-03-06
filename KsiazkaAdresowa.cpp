#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikManager.rejestracjaUzytkownika();
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikManager.logowanieUzytkownika();
    if (uzytkownikManager.czyUzytkownikJestZalogowany())
    {
        adresatManager = new AdresatManager(NAZWA_PLIKU_Z_ADRESATAMI, NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI, uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikManager.wylogujUzytkownika();
    delete adresatManager;
    adresatManager = NULL;
}

void KsiazkaAdresowa::dodajAdresata()
{
    if (uzytkownikManager.czyUzytkownikJestZalogowany())
    {
            adresatManager -> dodajAdresata();
    }
    else
    {
        cout << "Aby dodac adreata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    if (uzytkownikManager.czyUzytkownikJestZalogowany())
    {
        adresatManager -> wyswietlWszystkichAdresatow();
    }
    else
    {
        cout << "Aby wyswietlic adresatow, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    adresatManager -> wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    adresatManager -> wyszukajAdresatowPoNazwisku();
}

bool KsiazkaAdresowa::sprawdzCzyUzytkownikJestZalogowany()
{
    if (uzytkownikManager.pobierzIdZalogowanegoUzytkownika() == 0)
        return true;
    else
        return false;
}

void KsiazkaAdresowa::edytujAdresata()
{
    adresatManager -> edytujAdresata();
}

void KsiazkaAdresowa::usunAdresata()
{
    adresatManager -> usunAdresata();
}
