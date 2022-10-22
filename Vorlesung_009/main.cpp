#include <iostream>
#include "Complex.h"

int main()
{

    Complex c1(3, 2);
    Complex c2(6, 4);

    Complex c3 = c1.add(c2);

    std::cout << "C1: ";
    c1.print();

    std::cout << "C2: ";
    c2.print();

    std::cout << "C3: ";
    c3.print();

    Complex c4 = c3.sub(c1);
    std::cout << "C4: ";
    c4.print();

    Complex c5 = c4.mult(c1);
    std::cout << "C5: ";
    c5.print();

    Complex c6 = c5.mult(10);
    std::cout << "C6: ";
    c6.print();

    Complex c7; // 0i + 0;
    std::cout << "C7: ";
    c7.print();

    Complex c8 = c2.div(c7); // undefided
    std::cout << "C8: ";
    c8.print();
    return 1;
}