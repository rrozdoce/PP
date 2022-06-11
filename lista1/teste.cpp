#include <iostream>

using namespace std;

// sobrecarga do operador +
// soma de dois pontos

class Dponto
{
public:
    Dponto(int x, int y) : x(x), y(y)
    {
    }
    ~Dponto()
    {
    }
    int getx();
    int gety();

    Dponto operator+(Dponto &z)
    {
        return Dponto(this->x + z.x, this->y + z.y);
    }

private:
    int x, y;
};

int Dponto::getx()
{
    return x;
}

int Dponto::gety()
{
    return y;
}

int main(void)
{
    Dponto p1(1, 2);
    Dponto p2(0, 1);
    Dponto soma = p1 + p2;

    cout << "soma: (" << soma.getx() << "," << soma.gety() << ")" << endl;

    return 0;
}
