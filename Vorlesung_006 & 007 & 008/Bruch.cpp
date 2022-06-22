#include "Bruch.h"
#include <iostream>

Bruch::Bruch(int zaehler) : zaehler(zaehler), nenner(1) {}
Bruch::Bruch(int zaehler, int nenner) : zaehler(zaehler), nenner(nenner) {}
Bruch::Bruch(const Bruch &orig) : zaehler(orig.zaehler), nenner(orig.nenner) {}
Bruch::~Bruch() { cout << "Destruktor" << endl; }

void Bruch::printInfo()
{
    if (nenner == 1)
    {
        std::cout << zaehler << std::endl;
    }
    else
    {
        std::cout << zaehler << " / " << nenner << std::endl;
    }
}

void Bruch::multipliziere(int n)
{
    zaehler *= n;
}

void Bruch::multipliziere(Bruch b)
{
    zaehler *= b.zaehler;
    nenner *= b.nenner;
}

void Bruch::dividiere(Bruch b)
{
    zaehler *= b.nenner;
    nenner *= b.zaehler;
}
int Bruch::ggt(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return ggt(b, a % b);
    }
}

void Bruch::kuerze()
{
    int ggtErg = ggt(zaehler, nenner);
    zaehler /= ggtErg;
    nenner /= ggtErg;
}