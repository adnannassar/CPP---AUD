#include <iostream>

using namespace std;
class Complex
{

private:
    double m_dReal, m_dImag;

public:
    Complex(double dReal = 0.0, double dImag = 0.0);
    Complex(const Complex & orig);
    Complex add(const Complex &crArg) const;
    Complex sub(const Complex &crArg) const;
    Complex mult(const Complex &crArg) const;
    Complex div(const Complex &crArg) const;
    void print(ostream &out) const;

    Complex  operator+(const Complex &crArgs);
    Complex  operator-(const Complex &crArgs);
    Complex  operator*(const Complex &crArgs);
    Complex  operator/(const Complex &crArgs);

    friend ostream& operator<<(ostream &out, const Complex &crArg);
};