#include "Complex.h"

/* One way to make Constuctor
Complex::Complex(double dReal, double dImag)
{
    this->m_dImag = dImag;
    this->m_dReal = dReal;
}
*/

//  another way to make Constuctor
Complex::Complex(double dReal, double dImag) : m_dImag(dImag), m_dReal(dReal) {}
Complex::Complex(const Complex &orig) : m_dImag(orig.m_dImag), m_dReal(orig.m_dReal) {}

void Complex::print(ostream &out) const
{
    out << m_dImag << "i+" << m_dReal << std::endl;
}

Complex Complex::add(const Complex &crArg) const
{
    double result_real = this->m_dReal + crArg.m_dReal;
    double result_img = this->m_dImag + crArg.m_dImag;

    Complex result(result_real, result_img);
    return result;
}

Complex Complex::sub(const Complex &crArg) const
{
    double result_real = this->m_dReal - crArg.m_dReal;
    double result_img = this->m_dImag - crArg.m_dImag;

    Complex result(result_real, result_img);
    return result;
}

Complex Complex::mult(const Complex &crArg) const
{
    double result_real = this->m_dReal * crArg.m_dReal;
    double result_img = this->m_dImag * crArg.m_dImag;

    Complex result(result_real, result_img);
    return result;
}

Complex Complex::div(const Complex &crArg) const
{
    double result_real = this->m_dReal / crArg.m_dReal;
    double result_img = this->m_dImag / crArg.m_dImag;

    Complex result(result_real, result_img);
    return result;
}

Complex Complex::operator+(const Complex &crArg)
{
    return add(crArg);
}

Complex Complex::operator-(const Complex &crArg)
{
    return sub(crArg);
}

Complex Complex::operator*(const Complex &crArg)
{
    return mult(crArg);
}

Complex Complex::operator/(const Complex &crArg)
{
    return div(crArg);
}

ostream &operator<<(ostream &out, const Complex &crArg)
{
    out << crArg.m_dImag << "i+" << crArg.m_dReal;
    return out;
}