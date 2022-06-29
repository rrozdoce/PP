//
// Created by XSpat on 6/28/2022.
//

#include "iostream"
#include "3.h"

milhas::milhas(float x) : x(x) {}

milhas::milhas() : x(0) {}

milhas::operator float()
{
    return x;
}


metros::metros(float x) : x(x)
{
}

metros::metros() : x(0)
{
}

// operadores lógicos

bool metros::operator==(const metros y) const
{
    return (x == y.x);
}

bool metros::operator!=(const metros y) const
{
    return (x != y.x);
}

bool metros::operator<(const metros metro) const
{
    return (x < metro.x);
}

bool metros::operator<=(const metros metro) const
{
    return (x <= metro.x);
}

bool metros::operator>(const metros metro) const
{
    return (x > metro.x);
}
bool metros::operator>=(const metros metro) const
{
    return (x >= metro.x);
}

// casting

metros::operator float()
{
    return x;
}

metros::operator milhas()
{
    return milhas(x / 1609.34);
}

metros::metros(milhas milhas)
{
    x = milhas * 1609.34;
}

metros metros::operator+(metros metro)
{
    return metros(x + metro.x);
}

metros metros::operator-(metros metro)
{
    return metros(x - metro.x);
}

metros metros::operator--()
{
    return metros(--x);
}

metros metros::operator--(int)
{
    float x = this->x--;
    return metros(x);
}

metros metros::operator++()
{
    return metros(++x);
}

metros metros::operator++(int)
{
    float x = this->x++;
    return metros(x);
}
