#include <iostream>

using namespace std;

typedef struct pessoa
{
    string nome;
    int idade;
    double peso, altura;
} t_pessoa;

double &calculcar_imc(t_pessoa &pessoa)
{
    double result = pessoa.peso / pessoa.altura * pessoa.altura;
    double &imc = result;

    return imc;
}

int main(int argc, char const *argv[])
{
    t_pessoa pessoa = {"joao", 20, 92.45, 1.75};

    cout << "IMC: " << calculcar_imc(pessoa) << endl;

    return 0;
}