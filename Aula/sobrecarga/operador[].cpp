#include <iostream>
#include <stdlib.h> // exit

using namespace std;

// sobrecarga do operador indice

class Vetor
{
public:
    Vetor(int max = 100)
    {
        if (max < 0)
        {
            cerr << "Erro: Limite maximo menor do que zero" << endl;
            exit(1);
        }
        else if (max > 1000000)
        {
            cerr << "Erro: Limite maximo maior do que um milhao" << endl;
            exit(1);
        }

        this->max == max;

        // alocar espaço

        vet = new int[max];
    }
    ~Vetor()
    {
        delete[] vet;
    }

    bool inserir(int e, int pos)
    {
        if (pos < max && pos >= 0)
        {
            vet[pos] = e;
            return true;
        }
        return false;
    }

    int &operator[](int i)
    {
        if (i < 0 || i >= max)
        {
            cerr << "Erro: acesso invalido ao vetor" << endl;
            exit(1);
        }
        return vet[i];
    }

private:
    int *vet;
    int max;
};

int main(int argc, char const *argv[])
{
    Vetor v(10);

    if (v.inserir(10, 0))
        cout << "Elemento inserir com sucesso!\n";
    else
        cout << "Erro ao inserir o elemento.\n";
    if (v.inserir(11, 2))
        cout << "Elemento inserir com sucesso!\n";
    else
        cout << "Erro ao inserir o elemento.\n";
    if (v.inserir(12, 10))
        cout << "Elemento inserir com sucesso!\n";
    else
        cout << "Erro ao inserir o elemento.\n";

    return 0;
}
