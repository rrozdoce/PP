//
// Created by leo on 19/04/2022.
//

#ifndef AT4_ARRANJO_H
#define AT4_ARRANJO_H


class arranjo {
    int valores[10];
    int tam;
    const int tamMax=10;
public:
    arranjo();
    bool busca(int x) const;
    void inserir(int x);
    bool remover(int x);
    int getValor(int indice) const;
    int getTam() const;
};


#endif //AT4_ARRANJO_H
