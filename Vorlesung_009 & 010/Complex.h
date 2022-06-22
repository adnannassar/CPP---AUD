#include <iostream>

class Complex
{
private:
    double m_dReal;
    double m_dImag;

    Complex add(const Complex &c) const;
    Complex sub(const Complex &c) const;
    Complex mult(const Complex &c) const;
    Complex div(const Complex &c) const;
    void print(std::ostream &) const;

public:
    Complex(double m_dImag = 0, double m_dReal = 0);
    Complex(const Complex& orig);
    Complex operator+(const Complex &c) const;
    friend Complex operator+(const Complex &c, int nr);
    double operator[](unsigned index);
    Complex operator-(const Complex &c) const;
    Complex operator*(const Complex &c) const;
    Complex operator/(const Complex &c) const;
    friend std::ostream &operator<<(std::ostream &, const Complex &c);
};
