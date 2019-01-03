#ifndef MENUMANAGER_H
#define MENUMANAGER_H

#include <iostream>
#include <windows.h>

using namespace std;

class MenuManager
{
    static char wczytajZnak();

public:
    static char wybierzOpcjeZMenuGlownego();
    static char wybierzOpcjeZMenuUzytkownika();

};

#endif
