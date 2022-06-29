//
// Created by XSpat on 6/28/2022.
//

#include "iostream"
#include "string.h"

// Heranças U_U

/*
 Class Animal

 Class Cachorro

 Cachoroo é classe filha
 Animal é classe mãe(classe base)
 Cachorro é classe filha
 Cachorro herda caracteristicas de Animal
 Cachorro é um Animal

 */

using namespace std;

class Animal
{
protected:
     char* nome;
public:
    Animal(const char* nome)
    {
        cout << "Construindo Animal... " << endl;
        this->nome = new char[strlen(nome) + 1];
        strcpy(this->nome, nome);
    }
    ~Animal()
    {
       delete[] nome;
       nome = 0;
    }

    char *getNome() const {
        return nome;
    }


};

class Cachorro : public Animal
{
protected:
    int idade;
public:
    Cachorro(const char* nome) : Animal(nome)
    {
        cout << "Construindo Cachorro... " << endl;
        idade = 0;
    }
    int getIdade()
    {
        return idade;
    }

    void setIdade(int idade) {
        this->idade = idade;
    }
};

using namespace std;

int main(void)
{
    Cachorro c("Yankee");
    c.setIdade(5);

    cout << "Nome: " << c.getNome() << endl;
    cout << "Idade: " << c.getIdade() << endl;

    return 0;
}