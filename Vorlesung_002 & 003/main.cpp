#include <iostream>
#include <cstdlib>
#include <string>
#include <stdlib.h>
#include "matrix.h"

using namespace std;

int length(char array[])
{
    char *ptr = array;
    int counter = 0;
    while (*ptr != '\0')
    {
        counter++;
        ptr++;
    }
    return counter;
}

int main()
{
    init();
    set(0, 0, 1);
    set(0, 1, 2);
    set(0, 2, 3);

    set(1, 0, 4);
    set(1, 1, 5);
    set(1, 2, 6);

    set(2, 0, 7);
    set(2, 1, 8);
    set(2, 2, 9);

    print();

    char array[] = {'H', 'a', 'l', 'l', 'o' ,' ','W','o'};

    cout << array<< " hat die Länge " <<length(array) << endl;

    return 1;
}
