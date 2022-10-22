#include "Complex.h"
#include <iostream>

Complex::Complex(double dReal, double dImag) : m_dReal(dReal), m_dImg(dImag) {}

void Complex::print()
{
    std::cout << m_dImg << "i + " << m_dReal << std::endl;
}

Complex Complex::add(const Complex &crArg) const
{
    double erg_real = m_dReal + crArg.m_dReal;
    double erg_img = m_dImg + crArg.m_dImg;
    Complex erg(erg_real, erg_img);
    return erg;
}
Complex Complex::sub(const Complex &crArg) const
{
    double erg_real = m_dReal - crArg.m_dReal;
    double erg_img = m_dImg - crArg.m_dImg;
    Complex erg(erg_real, erg_img);
    return erg;
}

Complex Complex::mult(const Complex &extra) const
{
    double erg_real = m_dReal * extra.m_dReal;
    double erg_img = m_dImg * extra.m_dImg;
    Complex erg(erg_real, erg_img);
    return erg;
}

Complex Complex::mult(const int extra) const
{
    double erg_real = m_dReal * extra;
    double erg_img = m_dImg * extra;
    Complex erg(erg_real, erg_img);
    return erg;
}

Complex Complex::div(const Complex &extra) const
{
    if (extra.m_dImg == 0 || extra.m_dReal == 0)
    {
        std::cout << "Div durch 0 ist nicht definiert!" << std::endl;
        return Complex(m_dReal, m_dImg);
    }
    else
    {
        double erg_real = m_dReal / extra.m_dReal;
        double erg_img = m_dImg / extra.m_dImg;
        Complex erg(erg_real, erg_img);
        return erg;
    }
}