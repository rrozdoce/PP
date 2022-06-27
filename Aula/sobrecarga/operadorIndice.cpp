#include <iostream>
#include <stdlib.h> // exit

using namespace std;

// sobrecarga do operador indice []
// Exemplo simples

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
        vet_pos = new int[max];

        for (int i = 0; i < max; i++)
        {
            vet_pos[i] = 0;
        }
    }
    ~Vetor()
    {
        delete[] vet;
        delete[] vet_pos;
    }

    bool inserir(int e, int pos)
    {
        if (pos < max && pos >= 0)
        {
            vet[pos] = e;
            vet_pos[pos] = 1;
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
        else if (vet_pos[i] == 0)
        {
            cerr << "Erro: nessa posicao nao existe elemento." << endl;
            exit(1);
        }
        return vet[i];
    }

    int tam()
    {
        int cont = 0;

        for (int i = 0; i < max; i++)
        {
            if (vet_pos[i] == 1)
                cont++;
        }
        return cont;
    }

private:
    int *vet, *vet_pos;
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

    cout << "Primerio elemento: " << v[0] << endl;
    cout << "Terceiro elemento: " << v[1] << endl;
    cout << "Segundo elemento: " << v[2] << endl;

    return 0;
}
