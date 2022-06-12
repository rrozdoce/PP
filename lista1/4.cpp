#include <iostream>

using namespace std;

class arranjo
{
    friend bool pertence(arranjo, int);
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

bool pertence(arranjo a, int x)
{
    int i, f, m;
    i = 0;
    f = 10 - 1;

    while(i <= f){
        m = (i + f)/2;
        if(x == a.n[m]) return true;
        if(x < a.n[m]) f = m - 1;
        else           i = m + 1;
    }

    return false;
}

int main(void)
{
    int item;

    arranjo p;
    p.setArranjo();
    cout << pertence(p, 10);


    return 0;
}