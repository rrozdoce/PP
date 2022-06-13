#include <iostream>

// classes templates

using namespace std;

template <class Type>
class Pilha
{
public:
    Pilha<Type>(int);
    ~Pilha<Type>();
    void push(Type);
    void pop();
    Type getopo();
    int vazia();

private:
    Type *vet;
    int max_tam;
    int topo;
};

template <class Type>
Pilha<Type>::Pilha(int tam)
{
    vet = new Type[tam];
    max_tam = tam - 1;
    topo = -1;
}
template <class Type>
Pilha<Type>::~Pilha()
{
    delete[] vet;
}

template <class Type>
void Pilha<Type>::push(Type e)
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

template <class Type>
void Pilha<Type>::pop()
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

template <class Type>
Type Pilha<Type>::getopo()
{
    if (topo != -1)
    {
        // retorna o elemento que esta no topo
        return vet[topo];
    }
    else
    {
        return NULL;
    }
}

template <class Type>
int Pilha<Type>::vazia()
{
    // retorna 0 ou  1;
    return (topo == -1);
}

using namespace std;

int main(void)
{
    // com os templates podemos usar qualquer tipo de dado sem precisar alterar muito o código
    //Pilha<int> p(100);
     
     //usando strings
    Pilha <const char*> p(100);

    p.push("Python");
    p.push("haskell");
    p.push("C++");
    //p.pop();

    if(p.vazia())
      cout << "Pilha vazia: " << endl;
    else
      cout << "Pilha nao vazia!" << endl;
    if(p.getopo()  != NULL)
      cout << "Topo: " << p.getopo() << endl;
    else 
      cout << "A pilha esta vazia!" << endl;

    return 0;
}
