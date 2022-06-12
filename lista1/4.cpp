#include <iostream>

using namespace std;

class arranjo
{
    friend bool pertence(arranjo&, int);

public:
    arranjo();
    ~arranjo();
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

void arranjo::getArranjo()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "n[" << i + 1 << "]: " << n[i] << endl;
    }

    cout << endl;
}

bool pertence(arranjo &a, int x)
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
    p.inserir(10);
    p.inserir(9);
    p.inserir(8);
    p.inserir(7);
    p.inserir(6);
    p.inserir(5);
    p.inserir(4);
    p.inserir(3);
    p.inserir(2);
    p.inserir(1);
    p.getArranjo();
    cout << pertence(p, 8); // true
    cout << pertence(p, 11); // false
    // cout << pertence(p, 10);

    return 0;
}