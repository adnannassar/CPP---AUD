#include "Bruch.h"
#include <iostream>
int main()
{
    Bruch b1(2, 3);
    Bruch b2(4, 3);

    std::cout << "b1: " << b1 << std::endl;

    std::cout << "b2: " << b2 << std::endl;

    Bruch b3 = b1 * 2;
    std::cout << "b3: " << b3 << std::endl;

    if (b3 != b2)
    {
        std::cout << "Nein Ja b3 ist ungleich b2" << std::endl;
    }
    else
    {
        std::cout << "Ja b3 ist gleich b2" << std::endl;
    }

    return 1;
}