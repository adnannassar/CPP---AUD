#include <iostream>
#include "file.h"
#include "calculator.h"

struct rec
{
    int val;
    char str[12];
};

int *erzeugeArray(int size);
void printArray(int *array, int size);
int main()
{

    rec arr[18];
    const rec *p1 = arr + 3;
    rec* const p2 = arr + 3;
    int* const p6 = &p2->val;
    
    
    // int *array = erzeugeArray(5);
    // printArray(array, 5);
    // int array[5] = {1, 2, 3, 4, 5};
    // const int* const ptr = array;

    return 1;
}
int *erzeugeArray(int size)
{
    int array[size];
    for (int i = 1; i <= size; i++)
    {
        array[i - 1] = i;
    }
    int *ptr = array;
    return ptr;
}
void printArray(int *array, int size)
{
    for (int i = 1; i <= size; i++)
    {
        std::cout << array << "\t";
        array++;
    }
    std::cout << std::endl;
}
