#include <iostream>

using namespace std;

/*
1- (3,0) Escreva classes para representar medidas de comprimento em metros e milhas. Você deve 
prover funcionalidades que permitam a conversão automática entre objetos destas classes (ambas as 
“direções” de conversão devem estar na mesma classe). Implemente, em uma das classes, a sobrecarga 
dos operadores de soma, subtração, incremento (pós e pré fixados) e operadores de comparação (==, !
=, <, <=, > e >=). Obs: uma milha equivale a 1609,34 metros. Escreva uma aplicação para testar as 
funcionalidades implementadas.
*/

class milhas
{
    float x;

public:
    milhas(float x);
    milhas();
    operator float();
};

milhas::milhas(float x) : x(x) {}
milhas::milhas() : x(0) {}

milhas::operator float()
{
    return x;
}

class metros
{
public:
    metros(float x);
    metros();
    metros(milhas milhas);
    bool operator==(const metros) const;
    bool operator!=(const metros) const;
    bool operator<(const metros) const;
    bool operator<=(const metros) const;
    bool operator>(const metros) const;
    bool operator>=(const metros) const;

    operator float();
    operator milhas();
    metros operator+(metros metro);
    metros operator-(metros metro);
    metros operator--();
    metros operator--(int);
    metros operator++();
    metros operator++(int);

private:
    float x;
};

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

int main()
{
    metros m(4);
    milhas milha(1);
    metros m1(2);
    metros m2(2);
    metros m3(3);
    metros m4(4);
    cout << milha << endl;
    cout << m << endl;
    cout << (m1 == m2) << endl;
    cout << (m1 != m2) << endl;
    cout << (m1 != m3) << endl;
    cout << (m1 <= m3) << endl;
    cout << (m1 >= m3) << endl;
    cout << (m1 > m3) << endl;
    cout << (m1 < m3) << endl;

    m = milha;
    milha = m;
    cout << milha << endl;
    cout << m << endl;
    cout << milha << endl;
    cout << m++ << endl;
    cout << m << endl;
    cout << ++m << endl;
    return 0;
}