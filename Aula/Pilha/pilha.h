
#ifndef PILHA_H
#define PILHA_H
class Pilha
{
public:
    Pilha();
    ~Pilha();
    void push(int);
    void pop();
    int getopo();
    int vazia();

private:
    int *vet;
    int max_tam;
    int topo;
};

#endif