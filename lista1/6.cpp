#include <iostream>

using namespace std;


/* 

6- Idem ao ex 4, para um número qualquer de elementos. Adote a política de dobrar o arranjo quando,
na tentativa de inserir um elemento, o arranjo estiver cheio. Reduzir pela metade o tamanho do arranjo,
quando na remoção, tivermos metade do arranjo sem elementos. 

*/
class arranjo
{
    friend bool pertence(arranjo, int);

public:
    arranjo();
    ~arranjo();
    void setArranjo(void);
    void getArranjo(void);
    void inserir(int);
    bool remover(int);
    int topo(void);
    bool vazia(void);
    bool cheia(void);

private:
    int max;
    int top;
    int *n;
};

arranjo::arranjo()
{
    max = 10;
    top = -1;
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

bool pertence(arranjo a, int x)
{
    int i, f, m;
    i = 0;
    f = 10 - 1;

    while (i <= f)
    {
        m = (i + f) / 2;
        if (x == a.n[m])
            return true;
        if (x < a.n[m])
            f = m - 1;
        else
            i = m + 1;
    }

    return false;
}

void arranjo::inserir(int x)
{
    if (!cheia())
        n[++top] = x;
    else
        cout << "Pilha cheia!" << endl;
}

bool arranjo::remover(int x)
{
    if (!vazia())
    {
        n[top--];
        return true;
    }
    else
    {
        return false;
    }
}

int arranjo::topo(void)
{
    if (!vazia())
        return n[top];
    else
    {
        cout << "Pilha vazia" << endl;
        return 0;
    }
}

bool arranjo::vazia(void)
{
    return top == -1;
}

bool arranjo::cheia(void)
{
    return top == max - 1;
}

int main(void)
{
    int item;

    arranjo p;
    p.setArranjo();
    p.inserir(10);
    p.remover(10);
    p.getArranjo();
    // cout << pertence(p, 10);

    return 0;
}