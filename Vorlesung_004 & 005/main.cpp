#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void swapRef(int &x, int &y)
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

struct Adress
{
    
    string name;
    int matrnr;
    Adress(string name, int matrnr)
    {
        this->name = name;
        this->matrnr = matrnr;
    }
    ~Adress()
    {
        cout << "Destruktor" << endl;
    }
};

int getMatrn(Adress *adress)
{
    return adress->matrnr;
}

int getMatrn(Adress &adress)
{
    return adress.matrnr;
}

void print(int a[], unsigned length)
{
    for (unsigned i = 0; i < length; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

struct Test{
    Test(){
        cout<<this<<" +"<<endl;
    }
    ~Test()
    {
        cout << this << " -" << endl;
    }
};

void f()
{
    cout << "begin f" << endl;
    Test b[3];
    cout << "end f" << endl;
}

int main()
{
    int *p = new int;
    int *p2 = new int[5];
   
    delete    p;
    delete[] p2;

    return 1;
}
