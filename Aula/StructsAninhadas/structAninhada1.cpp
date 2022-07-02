//
// Created by XSpat on 7/1/2022.
//

#include "iostream"
#include "string.h"

using namespace std;

typedef struct Curso
{
    char nome[50];
    double preco;
} t_curso;

typedef struct estudante
{
 char nome[50];
 Curso curso;
}t_estudate;

int main()
{
    t_estudate e;

    strcpy(e.nome, "Pedro");
    strcpy(e.curso.nome, "C++ para iniciantes");

    e.curso.preco = 10;

    cout << "Nome da pessoa: " << e.nome << endl;
    cout << "Curso: " << e.curso.nome << endl;
    cout << "Preco: " << e.curso.preco << endl;

    return  0;
}