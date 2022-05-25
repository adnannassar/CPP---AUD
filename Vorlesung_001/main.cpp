#include <iostream>
#include <cstdlib>
#include <string>

int quadrat(int);
void quadratZwischenBereichen(int, int);
void printArray(int[], int);
void println();
int divide(int, int);
void swap(int&, int&);
void swapPTR(int*, int*);

typedef struct ADRESS{
 int plz;
 std::string strasse, ort;
}Adress ;

typedef struct PERSON{
    int age;
    std::string name;
    Adress adress;
}Person;


int main()
{
    Adress adress;
    adress.plz = 44146;
    adress.ort = "München";
    adress.strasse = "Neue Strasse. 17";

    Person p1;
    p1.name = "Tala";
    p1.adress = adress;


    std::cout <<p1.name << " wonht in " 
    << p1.adress.strasse<< ", " << p1.adress.plz <<", "<<p1.adress.ort <<std::endl;

    int x = 10;
    int y = 20;
    
    std::cout << "Before:  X = " << x << std::endl;
    std::cout << "Before:  Y = " << y << std::endl;

    swapPTR(&x, &y);

    std::cout << "After:   X = " << x << std::endl;
    std::cout << "AFter:   Y = " << y << std::endl;


    // methode call
    // call by reference
    // call by value


    /*
    try
    {
        std::cout << divide(10, 0) << std::endl;
    }
    catch (std::runtime_error ex)
    {
        std::cout << ex.what() << std::endl;
    }

    std::cout << "Hallo" << std::endl;
    std::cout << quadrat(2) << std::endl;
    */
    return 0;
}

void printArray(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}
void println()
{
    std::cout << std::endl;
}

int quadrat(int i)
{
    int x = 10;

    return i * i;
}
void quadratZwischenBereichen(int start, int end)
{

    for (int i = start; i <= end; i++)
    {
        std::cout << quadrat(i) << std::endl;
    }
}

int divide(int nr1, int nr2)
{
    if (nr2 == 0)
    {
        throw std::runtime_error("Divide by zero is not allowed!");
    }
    else
    {
        return nr1 / nr2;
    }
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swapPTR(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
