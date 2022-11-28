#include "Bruch.h"
#include <iostream>
#include <stdbool.h>
Bruch::~Bruch()
{
    // std::cout << "Destruktor" << std::endl;
}

Bruch::Bruch(const Bruch &orig)
{
    this->zähler = orig.zähler;
    this->nenner = orig.nenner;
}

Bruch::Bruch(int zähler)
{
    this->zähler = zähler;
    this->nenner = 1;
}

Bruch::Bruch(int zähler, int nenner)
{
    this->zähler = zähler;
    this->nenner = nenner;
}

void Bruch::print()
{
    if (this->nenner == 1 || this->zähler % this->nenner == 0)
    {
        kürze();
    }
    std::cout << zähler << "/" << nenner << std::endl;
}

Bruch Bruch::mul(int number)
{
    Bruch result((this->zähler * number), this->nenner);
    return result;
}

Bruch Bruch::mul(Bruch b)
{
    Bruch result((this->zähler * b.zähler), (this->nenner * b.nenner));
    return result;
}

Bruch Bruch::add(Bruch b)
{
    this->zähler *= b.nenner;
    b.zähler *= this->nenner;

    int gesamtNenner = this->nenner * b.nenner;
    this->nenner = gesamtNenner;
    b.nenner = gesamtNenner;

    Bruch result((this->zähler + b.zähler), gesamtNenner);
    return result;
}
Bruch Bruch::add(int number)
{
    return add(Bruch(number, 1));
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

void Bruch::kürze()
{
    int ggtErg = ggt(zähler, nenner);
    zähler /= ggtErg;
    nenner /= ggtErg;
}

Bruch Bruch::operator+(int number)
{
    return add(number);
}
Bruch Bruch::operator+(Bruch b)
{
    return add(b);
}

Bruch Bruch::operator*(int number)
{
    return mul(number);
}
Bruch Bruch::operator*(Bruch b)
{
    return mul(b);
}
bool Bruch::operator==(Bruch b)
{
    return this->zähler == b.zähler && this->nenner == b.nenner;
}

bool Bruch::operator!=(Bruch b)
{
    return this->zähler != b.zähler || this->nenner != b.nenner;
}
//     friend std::ostream &operator<<(std::ostream &out, Bruch b);
std::ostream &operator<<(std::ostream &out, Bruch b)
{
    if (b.nenner == 1 || b.zähler % b.nenner == 0)
    {
        b.kürze();
    }
    out << b.zähler << "/" << b.nenner;
    return out;
}