//
// Created by XSpat on 7/1/2022.
//

#include "iostream"
#include "string"
using namespace std;

typedef struct Universidade
{
  string nome;
}t_universidade;

typedef struct Aluno
{
    string nome;
    t_universidade universidade;
}t_aluno;


int main()
{
    t_aluno aluno = {"Marcos", {"UFPI"}};
    t_aluno *ptr_aluno;

    ptr_aluno = &aluno;

    cout << "Aluno: " << ptr_aluno->nome << endl;
    cout << "Universidade: " << ptr_aluno->universidade.nome << endl;

    return 0;
}

