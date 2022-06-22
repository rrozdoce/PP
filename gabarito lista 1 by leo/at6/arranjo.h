//
// Created by leo on 22/04/2022.
//

#ifndef AT6_ARRANJO_H
#define AT6_ARRANJO_H


class arranjo {
    int* valores;
    int tam;
    int tamMax;
    ///funcao para alterar a quantidade de memoria alocada
    void realoca(int novoTamanho);
public:
    arranjo();
    bool busca(int x) const;
    void inserir(int x);
    bool remover(int x);
    int getValor(int indice) const;
    int getTam() const;

    virtual ~arranjo();
};


#endif //AT6_ARRANJO_H
