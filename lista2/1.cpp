#include <iostream>

using namespace std;

// lista 2 exercicio 1

class sla
{
public:
    sla(int a, int b) : first(a), second(b)
    {
    }
    sla() : first(0), second(0), maior(0)
    {
    }
    // construtor cópia add
    void getsla();
    void swap();
    void maiorsla();
    // operador atribuição add
    bool operator==(const sla) const;
    bool operator!=(const sla) const;
    sla operator-(sla &e);
    sla operator+(sla &e);
    sla operator*(sla &e);
    sla operator/(sla &e);
    sla operator--();
    sla operator++();

private:
    int first, second, maior;
};

// a
void sla::swap()
{
    int aux;
    aux = this->first;
    this->first = this->second;
    this->second = aux;
}

void sla::getsla()
{
    cout << "First: " << first << "\n"
         << "Second: " << second << endl;
}
// b
void sla::maiorsla()
{
    first > second ? maior = first : maior = second;
    cout << "Maior: " << maior << endl;
}

// sobrecarga de operadors
// start

sla sla::operator+(sla &e)
{
    return sla(this->first + e.first, this->second + e.second);
}

sla sla::operator-(sla &e)
{
    return sla(this->first - e.first, this->second - e.second);
}

sla sla::operator*(sla &e)
{
    return sla(this->first * e.first, this->second * e.second);
}

sla sla::operator/(sla &e)
{
    return sla(this->first / e.first, this->second / e.second);
}

sla sla::operator--()
{
    return sla(--first, --second);
}

sla sla::operator++()
{
    return sla(++first, ++second);
}

bool sla::operator==(const sla x) const
{
    if (first == x.first)
    {
        if (second == x.second)
        {
            return 1;
        }
    }
    return 0;
}

bool sla::operator!=(const sla x) const
{
    if (first != x.first)
    {
        if (second != x.second)
        {
            return 1;
        }
    }
    return 0;
}

// end

int main()
{
    sla opa(2, 3);
    opa.swap();
    opa.getsla();
    opa.maiorsla();

    cout << "\n";

    sla n1(1, 2), n2(3, 2);

    sla n3 = n1 - n2;
    sla n4 = n1 + n2;
    sla n5 = n1 * n2;
    sla n6 = n1 / n2;

    n3.getsla();
    cout << "\n";
    n4.getsla();
    cout << "\n";
    n5.getsla();
    cout << "\n";
    n6.getsla();
    cout << "\n";
    ++n1;
    n1.getsla();
    cout << "\n";
    --n2;
    n2.getsla();

    return 0;
};