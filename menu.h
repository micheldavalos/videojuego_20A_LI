#ifndef MENU_H
#define MENU_H

#include "videojuego.h"

class Menu
{
public:
    Menu();
    void mostrar(Videojuego &v);
private:
    Personaje capturar();
};

#endif // MENU_H
