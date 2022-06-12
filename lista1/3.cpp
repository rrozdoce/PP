#include <iostream>

using namespace std;

class matriz
{
    friend void somaMatriz(matriz, matriz);
    friend void multMatriz(matriz, matriz);

public:
    matriz();
    ~matriz();
    void setmatriz();
    void getmatriz();
    void inversa();

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

    cout << "Inversa: " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << inversa[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    delete[] inversa;
}

void somaMatriz(matriz a, matriz b)
{
    float(*soma)[2] = new float[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            soma[i][j] = a.m[i][j] + b.m[i][j];
        }
    }

    cout << "Soma: " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << soma[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    delete[] soma;
}

void multMatriz(matriz a, matriz b)
{
    float(*multi)[2] = new float[2][2];
    
    // provisório
    multi[0][0] = (a.m[0][0] * b.m[0][0]) + (a.m[0][1] * b.m[1][0]);
    multi[0][1] = (a.m[0][0] * b.m[0][1]) + (a.m[0][1] * b.m[1][1]);
    multi[1][0] = (a.m[1][0] * b.m[0][0]) + (a.m[1][1] * b.m[1][0]);
    multi[1][1] = (a.m[1][0] * b.m[0][1]) + (a.m[1][1] * b.m[1][1]);
    
    cout << "Multiplicacao: " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << multi[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    delete[] multi;
}

int main(void)
{
    matriz p;
    matriz q;

    p.setmatriz();
    q.setmatriz();
    p.inversa();
    q.inversa();
    multMatriz(p, q);
    somaMatriz(p, q);

    return 0;
}