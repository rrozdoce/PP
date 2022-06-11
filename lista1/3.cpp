#include <iostream>

using namespace std;

class matriz
{

public:
    matriz();
    ~matriz();
    void setmatriz();
    void getmatriz();
    void inversa();
    // metodo soma
    // metodo multiplicação

private:
    float (*m)[2];
};

matriz::matriz()
{
    m = new float[2][2];
}

matriz::~matriz()
{
    delete[] m;
}

void matriz::setmatriz()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "M[" << i + 1 << "]"
                 << "[" << j + 1 << "]" << endl;
            cin >> m[i][j];
        }
    }
}

void matriz::getmatriz()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }

    cout << endl;
}

void matriz::inversa()
{
    float(*inversa)[2] = new float[2][2];

    inversa[0][0] = m[1][1];
    inversa[1][1] = m[0][0];
    inversa[0][1] = m[0][1] * -1;
    inversa[1][0] = m[1][0] * -1;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << inversa[i][j] << " ";
        }
        cout << "\n";
    }

    delete[] inversa;
}

int main(void)
{
    matriz p;
    matriz q;

    p.setmatriz();
    p.getmatriz();
    p.inversa();

    return 0;
}
