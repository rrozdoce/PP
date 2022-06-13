#include <iostream>
#include "pilha.h"

using namespace std;

// TAD Pilha(Stack)
// push --> empilhar
// pop --> desempilhar

Pilha::Pilha()
{
    vet = new int[100];
    max_tam = 99;
    topo = -1;
}

Pilha::~Pilha()
{
    delete[] vet;
}

void Pilha::push(int e)
{
    if (topo == max_tam)
    {
        cout << "Pilha Cheia!" << endl;
    }
    else
    {
        // adiciona na Pilha
        vet[++topo] = e;
    }
}

void Pilha::pop()
{
    if (topo == -1)
    {
        cout << "Pilha Vazia!" << endl;
    }
    else
    {
        // pra nao tirar elemento que nao existe
        topo--;
    }
}

int Pilha::getopo()
{
    if (topo != -1)
    {
        // retorna o elemento que esta no topo
        return vet[topo];
    }
    else
    {
        return -1;
    }
}

int Pilha::vazia()
{
    // retorna 0 ou  1;
    return (topo == -1);
}