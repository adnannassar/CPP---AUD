#include <iostream>

using namespace std;

class Bruch
{
private:
    int zaehler, nenner;
    int ggt(int a, int b);
public:

    Bruch(int zaehler);
    Bruch(int zaehler, int nenner);
    Bruch(const Bruch& orig);
    ~Bruch();
    
    const int getZaehler() 
    {
        return zaehler;
    }
    const int getNenner()
    {
        return nenner;
    }
    void multipliziere(int n);
    void multipliziere(Bruch b);
    void dividiere(Bruch b);
    void printInfo();
   
    void kuerze();
};
