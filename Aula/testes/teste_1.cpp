#include <iostream>
#include <string.h>

using namespace std;

class teste
{

public:
    teste(char nome[]);
    ~teste();
    const char *getNome();

private:
    char *nome;
};

teste::teste(char nome[])
{

    for (int i = 0; i < strlen(nome) + 1; i++)
    {
        this->nome[i] = nome[i];
    }
}

teste::~teste()
{
    delete[] nome;
}

const char *teste::getNome()
{
    return nome;
}

int main(void)
{ 
   char name[30];

   cout << "Nome: " << endl;
   cin >> name;
  
   teste p(name);

   cout << p.getNome();

    return 0;
}