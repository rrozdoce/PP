#include <iostream>

using namespace std;

/*
2- (3,0) Escreva uma classe que represente um array ordenado (ordem crescente) de charInts, para um
número qualquer de elementos. Um charInt é um tipo composto de dados que utiliza a mesma
quantidade de bytes de uma variável inteira. No byte menos significativo de um charInt temos um
objeto do tipo char e no restante um objeto do tipo int (com um byte a menos). A ordem de um charInt
é dada pela parte inteira do objeto. Implemente métodos para a inserção ordenada, um para a exclusão
por valor int e um para a exclusão por valor char. Escreva uma aplicação para testar as funcionalidades
implementadas.
*/

struct no
{
    int valor;
    struct no *next;
};

typedef struct no no;

class listaCharint
{
    int tam;
    no *ptlista;
    char getchar(no valor);
    int getint(no valor);

public:
    listaCharint();
    void addno(int, char);
    int buscaRetornaInt(int);
    char buscaRetornaChar(int);
    void busca(int, no **);
    void busca(char, no **);
    void excluiPorInt(int);
    void excluiPorChar(char);

    virtual ~listaCharint();
};

listaCharint::listaCharint() : tam(0)
{
    ptlista = new no; // no cabeça
    ptlista->next = nullptr;
}

char listaCharint::getchar(no valor)
{
    return (char)valor.valor % 256;
}

int listaCharint::getint(no valor)
{
    return valor.valor / 256;
}

void listaCharint::addno(int numero, char letra)
{
    no *ant;
    no *novo = new no;
    busca(numero, &ant);
    novo->valor = numero * 256;
    novo->valor += (int)letra;
    novo->next = ant->next;
    ant->next = novo;
    tam++;
}

void listaCharint::busca(int numero, no **lista)
{
    no *busca = ptlista;
    while (busca->next != nullptr)
    {
        if (getint(*busca->next) < numero)
            busca = busca->next;
        else
            break;
    }
    *lista = busca;
}

void listaCharint::busca(char letra, no **lista)
{
    no *busca = ptlista;
    while (busca->next != nullptr)
    {
        if (getchar(*busca->next) != letra)
            busca = busca->next;
        else
            break;
    }
    *lista = busca;
}

void listaCharint::excluiPorInt(int valor)
{
    no *ant;
    busca(valor, &ant);
    while (ant->next != nullptr)
    {
        if (getint(*ant->next) != valor)
            break;

        no *aux;
        aux = ant->next;
        ant->next = aux->next;
        delete aux;
        busca(valor, &ant);
        tam--;
    }
}

void listaCharint::excluiPorChar(char letra)
{
    no *ant;
    busca(letra, &ant);
    while (ant->next != nullptr)
    {
        if (getchar(*ant->next) != letra)
            break;
        no *aux;
        aux = ant->next;
        ant->next = aux->next;
        delete aux;
        busca(letra, &ant);
        tam--;
    }
}

int listaCharint::buscaRetornaInt(int index)
{
    int x = 0;
    no *aux;
    aux = ptlista->next;

    while (aux != nullptr)
    {
        if (x == index)
            break;
        if (x++ < index)
            aux = aux->next;
    }
    return getint(*aux);
}

char listaCharint::buscaRetornaChar(int index)
{
    int x = 0;
    no *aux;
    aux = ptlista->next;

    while (aux != nullptr)
    {
        if (x == index)
            break;
        if (x++ < index)
            ;
        aux = aux->next;
    }
    return getchar(*aux);
}

listaCharint::~listaCharint()
{
    no *aux;

    while (ptlista != nullptr)
    {
        aux = ptlista;
        ptlista = ptlista->next;
        delete aux;
    }
}

int main()
{
    listaCharint arrayOrdenado;
    arrayOrdenado.addno(3, 'b');

    arrayOrdenado.addno(2, 'c');
    arrayOrdenado.addno(9, 'f');

    for (int i = 0; i < 3; ++i)
    {
        cout << arrayOrdenado.buscaRetornaChar(i) << '\n';
        cout << arrayOrdenado.buscaRetornaInt(i) << '\n';
    }
    arrayOrdenado.excluiPorInt(3);
    for (int i = 0; i < 2; ++i)
    {
        cout << arrayOrdenado.buscaRetornaChar(i) << '\n';
        cout << arrayOrdenado.buscaRetornaInt(i) << '\n';
    }
    return 0;
}
