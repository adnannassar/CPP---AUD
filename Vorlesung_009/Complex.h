

class Complex
{

private:
    double m_dReal;
    double m_dImg;

public:
    Complex(double dReal = 0.0, double dImag = 0.0);
    Complex add(const Complex& crArg) const;
    Complex sub(const Complex& crArg) const;
    Complex mult(const Complex& extra) const;
    Complex mult(const int extra) const;
    Complex div(const Complex& extra) const;
    
    
    void print();
};