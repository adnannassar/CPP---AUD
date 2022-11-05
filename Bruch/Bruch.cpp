#include "Bruch.h"
#include <iostream>

Bruch::Bruch(int zähler, int nenner)
{
    this->zähler = zähler;
    this->nenner = nenner;
}

void Bruch::print()
{
    std::cout << zähler << "/" << nenner << std::endl;
}