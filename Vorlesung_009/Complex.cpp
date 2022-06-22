#include "Complex.h"

Complex::Complex(double m_dImag, double m_dReal) : m_dImag(m_dImag), m_dReal(m_dReal) {}
Complex::Complex(const Complex &orig)
{
    this->m_dImag = orig.m_dImag;
    this->m_dReal = orig.m_dReal;
}
Complex Complex::add(const Complex &c) const
{
    return Complex(m_dImag + c.m_dImag, m_dReal + c.m_dReal);
}
Complex Complex::sub(const Complex &c) const
{
    return Complex(m_dImag - c.m_dImag, m_dReal - c.m_dReal);
}
Complex Complex::mult(const Complex &c) const
{
    return Complex(m_dImag * c.m_dImag, m_dReal * c.m_dReal);
}
Complex Complex::div(const Complex &c) const
{
    return Complex(m_dImag / c.m_dImag, m_dReal / c.m_dReal);
}
void Complex::print(std::ostream &out) const
{
    out << m_dImag << "i + " << m_dReal << std::endl;
}

// Operatoren oberladung
Complex Complex::operator+(const Complex &c) const
{
    return add(c);
}
Complex Complex::operator-(const Complex &c) const
{
    return sub(c);
}
Complex Complex::operator*(const Complex &c) const
{
    return mult(c);
}
Complex Complex::operator/(const Complex &c) const
{
    return div(c);
}
std::ostream &operator<<(std::ostream &out, const Complex &c)
{
    out << c.m_dImag << "i + " << c.m_dReal;
    return out;
}

Complex operator+(const Complex &c, int nr)
{
    Complex result(c.m_dImag, c.m_dReal + nr);
    return result;
}
double Complex::operator[](unsigned index)
{
    if (index == 0)
    {
        return m_dImag;
    }
    if (index == 1)
    {
        return m_dReal;
    }
    else
    {
        return 0.0;
    }
}
