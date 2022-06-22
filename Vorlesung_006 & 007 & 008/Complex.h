#include <iostream>

class Complex
{
public:
    Complex(double dReal = 0.0, double dImag = 0.0);
    double getM_dImag()
    {
        return m_dImag;
    }
     double getM_dReal()
    {
        return m_dReal;
    }
    Complex add(const Complex &crArg) const;
    Complex sub(const Complex &crArg) const;
    Complex mult(const Complex &crArg) const;
    Complex div(const Complex &crArg) const;
    void print(std::ostream &) const;

private:
    double m_dReal;
    double m_dImag;
};
