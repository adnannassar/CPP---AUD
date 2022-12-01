#include "Complex.h"
#include <iostream>
using namespace std;
int main()
{
    Complex c1(1, 2);
    Complex c2(c1); //  c2 = c1;
    Complex *c3 = new Complex(2, 3);

    cout << "C1: ";
    c1.print(cout);

    cout << "C2: ";
    c2.print(cout);

    cout << "C3: ";
    c3->print(cout);

    Complex c4 = c3->add(c1);

    cout << "C4: ";
    c4.print(cout);

    Complex c5 = c2 + c1;
    cout << "C5: " << c5 << endl;

    return 1;
}