#ifndef MENUMANAGER_H
#define MENUMANAGER_H

#include <iostream>
#include <windows.h>

#include "MetodyPomocnicze.h"

using namespace std;

class MenuManager
{
public:
    static char wybierzOpcjeZMenuGlownego();
    static char wybierzOpcjeZMenuUzytkownika();
    static char wybierzOpcjeZMenuEdycja();
};

#endif
