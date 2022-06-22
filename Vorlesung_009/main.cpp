#include <iostream>
#include <cstdlib>
#include <string>
#include "Complex.h"

class Time
{
private:
    bool normalize()
    {
        if (_second == 60)
        {
            _second = 0;
            _minute++;
            return true;
        }
        else if (_minute == 60)
        {
            _minute = 0;
            _hour++;
            return true;
        }
        else if (_hour == 24)
        {
            _hour = _minute = _second = 0;
            return true;
        }
        else
        {
            return false;
        }
    }
    int _hour, _minute, _second;

public:
    Time(int hour = 0, int minute = 0, int second = 0) : _hour(hour), _minute(minute), _second(second) {}
    int hour() const { return _hour; }
    int minute() const { return _minute; }
    int second() const { return _second; }
    bool add_hours(int hours)
    {
        _hour += hours;
        return normalize();
    }
    bool add_minutes(int minutes)
    {
        _minute += minutes;
        return normalize();
    }
    bool add_seconds(int seconds)
    {
        _second += seconds;
        return normalize();
    }
    bool operator==(const Time &other) const
    {
        return _hour == other._hour && _minute == other._minute && _second == other._second;
    }
};

std::ostream &operator<<(std::ostream &out, Time &time)
{
    out << time.hour() << ":" << time.minute() << ":" << time.second();
    return out;
}
std::istream &operator>>(std::istream &in, Time &time)
{
    int h, m, s;
    std::cout << "hour: ";
    in >> h;

    std::cout << "minute: ";
    in >> m;

    std::cout << "second: ";
    in >> s;
    time = Time(h, m, s);
    return in;
}
std::istream &operator>>(std::istream &in, Complex &c)
{
    double m_dImag, m_dReal;

    std::cout << "m_dImag: ";
    in >> m_dImag;

    std::cout << "m_dReal: ";
    in >> m_dReal;
    std::cout << m_dImag << std::endl;
    std::cout << m_dReal << std::endl;
    c = Complex(m_dImag, m_dReal);

    return in;
}

void operator++(Time &time, int)
{
    time.add_seconds(1);
}
void operator+=(Time &time, int nr)
{
    time.add_seconds(nr);
}

int main()
{
    Time t;
    std::cin >> t;

    std::cout << t << std::endl;

    Complex c1(5, 2);
    std::cout << "c1      = " << c1 << std::endl;
    std::cout << "c1[0] = " << c1[0] << "i" << std::endl;
    std::cout << "c1[1] = " << c1[1] << std::endl;
    Complex c2(3, 4);
    std::cout << "c2      = " << c2 << std::endl;
    std::cout << "c1 + c2 = " << c1 + c2 << std::endl;
    std::cout << "c1 - c2 = " << c1 - c2 << std::endl;
    std::cout << "c1 * c2 = " << c1 * c2 << std::endl;
    std::cout << "c1 / c2 = " << c1 / c2 << std::endl;
    std::cout << "c1 + 7  = " << c1 + 7 << std::endl;
    Complex c3;
    std::cout << c3 << std::endl;

    std::cin >> c3;
    std::cout << c3 << std::endl;

    return 1;
}
