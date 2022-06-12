#include <iostream>
#include <string.h>

using namespace std;

// sobrecarga de '='
// Exemplo

class Pessoa
{

public:
    void inicializar(const char *novoNome, int novoID)
    {
        int tam = strlen(novoNome) + 1;
        nome = new char[tam];
        strcpy(nome, novoNome);
        id = novoID;
    }

    void destruir()
    {
        delete[] nome;
        nome = 0;
    }

    Pessoa(const char *novoNome, int novoID)
    {
        inicializar(novoNome, novoID);
    }
    
    // sobrecarga de construtores
    // passar um Objeto por referencia é mais eficiente
    Pessoa(Pessoa &p)
    {
        inicializar(p.nome, p.id);
    }
    
    virtual ~Pessoa()
    {
        destruir();
    }

    // retorna uma referencia por causa do &
    Pessoa &operator=(Pessoa &p)
    {   
        // verificar se o endereço do Objeto atual é igual a do Objeto passado
        if (this != &p)
        {
            // destroi o Objeto passado
            destruir();
            
            // inicializa o Objeto passado
            inicializar(p.nome, p.id);
        }

        // retornar uma referencia
        return *this;
    }

    const char *getNome()
    {
        return nome;
    }

    int getID()
    {
        return id;
    }
    
    // muda o primeiro Caractere
    void mudarNome(char l)
    {
        nome[0] = l;
    }

private:
    char *nome;
    int id;
};

int main(int argc, char const *argv[])
{
    Pessoa p1("marcos", 1), p2("pedro", 2);
   
   // Objeto p1 ira ficar igual a p2
    p1 = p2;
   
   // se nao fizermos a sobrecarga de operador p2 tbm sera alterado quando p1 for, pois p1 esta apontando para o endereço de p2 e vice-versa
    p1.mudarNome('A');

    cout << "Nome: " << p1.getNome() << endl
         << "ID: " << p1.getID() << endl;

    cout << "Nome: " << p2.getNome() << endl
         << "ID: " << p2.getID() << endl;

    return 0;
}
