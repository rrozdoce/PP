#include <iostream>
#include "string.h"

using namespace std;

/*
3- (4,0) Escreva um template que relacione dois objetos de tipos quaisquer (chave e valor). Seu
template deve permitir um número qualquer de elementos (chaves distintas) e garantir que a quantidade
de memória alocada, em um determinado momento, não ultrapasse a quantidade de memória suficiente
para armazenar a metade dos objetos armazenados (exceto quando não há nada armazenado).
Sobrecarregue o operador de índice ([ ]). Escreva uma aplicação testando as funcionalidades
implementadas.
Ex:
*/

template <class C, class V>
class map
{
    C *chaves;
    V *valores;
    int tamanho, qntItens;

public:
    map() : tamanho(2), qntItens(0)
    {
        chaves = new C[2];
        valores = new V[2];
    };
    map(C chave, V valor) : tamanho(4), qntItens(1)
    {
        chaves = new C[4];
        valores = new V[4];
        chaves[0] = chave;
        valores[0] = valor;
    };

    V &operator[](C index)
    {
        for (int i = 0; i < qntItens; i++)
        {
            if (chaves[i] == index)
            {
                return valores[i];
            }
        }
        qntItens++;
        chaves[qntItens - 1] = index;
        if (qntItens >= tamanho / 2)
        {
            C *auxChave;
            V *auxvalores;
            tamanho *= 2;
            auxChave = new C[tamanho];
            auxvalores = new V[tamanho];
            memcpy(auxvalores, valores, sizeof(V) * qntItens);
            memcpy(auxChave, chaves, sizeof(C) * qntItens);
            delete[] chaves;
            delete[] valores;
            chaves = auxChave;
            valores = auxvalores;
        }
        return valores[qntItens - 1];
    };

    ~map()
    {
        delete[] chaves;
        delete[] valores;
    }
};

int main()
{
    map<char, float> meumapa;
    meumapa['a'] = 2.5;
    cout << meumapa['a'] << '\n';
    map<string, int> meumapa2;
    meumapa2["abacaxi"] = 100;
    cout << meumapa2["abacaxi"] << '\n';
    return 0;
}