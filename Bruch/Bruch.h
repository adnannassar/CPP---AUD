#include <stdbool.h>
#include <iostream>
class Bruch
{
private:
    int zähler, nenner;

public:
    Bruch(int zähler);
    Bruch(int zähler, int nenner);
    Bruch(const Bruch &orig);
    ~Bruch();

    void print();
    Bruch mul(int number);
    Bruch mul(Bruch b);
    Bruch add(int number);
    Bruch add(Bruch b);

    int ggt(int a, int b);
    void kürze();

    // Überladen von Operatoren
    Bruch operator+(int number);
    Bruch operator+(Bruch b);
    Bruch operator*(int number);
    Bruch operator*(Bruch b);
    bool operator==(Bruch b);
    bool operator!=(Bruch b);
    friend std::ostream &operator<<(std::ostream &out, Bruch b);
};