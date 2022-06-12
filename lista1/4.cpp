#include <iostream>

using namespace std;

class arranjo
{
    friend void pertence(arranjo, int);
    friend void inserir(arranjo, int);
    friend void remover(arranjo, int);

public:
    arranjo();
    ~arranjo();
    void setArranjo();
    void getArranjo();

private:
    int *n;
};

arranjo::arranjo()
{
    n = new int[10];
}

arranjo::~arranjo()
{
    delete[] n;
}

void arranjo::setArranjo()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "n[" << i + 1 << "]" << endl;
        cin >> n[i];
    }
}

void arranjo::getArranjo()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "n[" << i + 1 << "]: " << n[i] << endl;
    }
}

void pertence(arranjo a, int x)
{
    int i, f, m;
    i = 0;
    f = 10 - 1;

    while (i <= f)
    {
        m = (i + f) / 2;

        if (x == a.n[m])
        {

            break;
        }
        if (x < a.n[m])
        {

            f = m - 1;
        }
        else
        {

            f = m + 1;
        }
    }

    /*     if (x != a.n[m])
        {
            cout << "Nao pertence" << endl;
        }
        else
        {
            cout << "Pertence" << endl;
        } */
}

int main(void)
{
    int item;

    arranjo p;
    p.setArranjo();

    cout << "Digite um item para busca: " << endl;
    cin >> item;

    // problema
    // pertence(p, item);

    return 0;
}