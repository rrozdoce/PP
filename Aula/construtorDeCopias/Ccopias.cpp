#include <iostream>
#include <string.h>

using namespace std;

// é um construtor que o c++ usa pra fazer cópias de objetos
// faz uma cópia membro a membro do Objeto fonte para o Objeto destino
// tambem chamada de cópia superficial
// por padrão o c++ executa uma cópia superficial membro a membro para criar cópia de Objetos
// nós iremos fazer uma cópia profunda, nao uma superficial, pois a superficial pode trazer varios problemas
class Estudante
{
public:
    Estudante(const char *nome)
    {
        cout << "Construindo Objeto..." << nome << endl;
        int tam = strlen(nome) + 1;
        this->nome = new char[tam];
        
        strcpy(this->nome, nome);
    }

    // construtor de cópia
    Estudante(const Estudante &e)
    {
        cout << "Construindo copia..." << e.nome << endl;

        int tam = strlen(e.nome) + strlen("Copia de ") + 1;
        this->nome = new char[tam];
        strcpy(this->nome, "Copia de ");

        strcat(this->nome, e.nome);
    }

    const char *getNome()
    {
        return nome;
    }
    ~Estudante()
    {
        cout << "Destruindo... " << nome << endl;
        delete[] nome;
        nome = 0;
    }

private:
    char *nome;
};

void foo2(Estudante e)
{
}

void foo()
{
    Estudante estudante("joao");
    foo2(estudante);
    cout << "Estudante" << estudante.getNome() << endl;
}

int main(int argc, char const *argv[])
{
    foo();

    return 0;
}
