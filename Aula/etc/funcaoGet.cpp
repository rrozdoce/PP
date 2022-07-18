#include <iostream>
#define MAX 10
using namespace std;




int main(int argc, char const *argv[])
{
    char nome[MAX];
    
    cout << "Digite o seu nome: ";
    // pega só o primeiro nome
    //cin >> nome;

    // pega tudo
    cin.get(nome, MAX);
    cout << "Oi" << nome << endl;

    return 0;
}
