//
// Created by XSpat on 6/28/2022.
//

#include "iostream"
#include "4.h"

using namespace std;

template<class T> lista<T>::lista(int n) {
    this->tam = n;
    if(n < 0)
    {
        cerr << "Erro, Limite maximo menor que zero!" << endl;
        exit(1);
    }
    else if(n > 10)
    {
        cerr << "Limite maximo atingido!" << endl;
        exit(1);
    }

// alocando espaço
    list = new T[n];
    pos_list = new T[n];

    for(int i = 0; i < n; i++)
    {
        pos_list[i] = 0;
    }
}

template<class T> lista<T>::~lista() {
    delete[] list;
    delete[] pos_list;
}

template<class T> bool lista<T>::inserir(T e, int pos) {
    if(pos < tam && pos >= 0)
    {
        list[pos] = e;
        pos_list[pos] = 1;
        return true;
    }

    return false;
}

template<class T> T &lista<T>::operator[](int i) {
    if (i < 0 || i >= tam)
    {
        cerr << "Erro: acesso invalido ao vetor" << endl;
        exit(1);
    }
    else if (pos_list[i] == 0)
    {
        cerr << "Erro: nessa posicao nao existe elemento." << endl;
        exit(1);
    }
    return list[i];
}

template<class T> int lista<T>::tamanho() {
    int cont = 0;

    for (int i = 0; i < tam; i++)
    {
        if (pos_list[i] == 1)
            cont++;
    }
    return cont;
}
