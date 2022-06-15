#include <iostream>
#include "Bruch.h"
#include "Complex.h"

using namespace std;

ostream &operator<<(ostream &out, Bruch &b)
{
    out << b.getZaehler() << " / " << b.getNenner() << endl;
    return out;
}

int main()
{

    Bruch b1(10, 20);
    b1.printInfo();
    cout << b1;

    return 1;
}
