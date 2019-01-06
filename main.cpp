#include <iostream>

#include "KsiazkaAdresowa.h"
#include "MenuManager.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt", "Adresaci_tymczasowo.txt");
                                    /*
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
 //   ksiazkaAdresowa.dodajAdresata();
 //   ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
    ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
    ksiazkaAdresowa.wylogujUzytkownika();
*/

    char wybor;

    while (true)
    {
        if (ksiazkaAdresowa.sprawdzCzyUzytkownikJestZalogowany() == true)
        {
            wybor = MenuManager::wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
            wybor = MenuManager::wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                //              idUsunietegoAdresata = usunAdresata(adresaci);
                //            idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
                break;
            case '6':
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogujUzytkownika();
                break;
            }
        }
    }

    return 0;
}
