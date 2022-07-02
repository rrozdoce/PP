//
// Created by XSpat on 7/1/2022.
//

#include "iostream"

using namespace std;

typedef struct Pessoa
{
    struct Carro
    {
        double preco;
    };

    struct Casa
    {
       double preco;
    };

    struct Carro carro;
    struct Casa casa;
}t_pessoa;

int main()
{
    t_pessoa  pessoa;

    pessoa.carro.preco = 25000;
    pessoa.casa.preco = 200000;

    cout << "Preco do carro: " << pessoa.carro.preco << endl;
    cout << "Preco da casa: " << pessoa.casa.preco << endl;

    return 0;
}

