#include <iostream>

using namespace std;

int gerarID()
{
    // static para reter o valor
    static int ID = 0;
    return ID++;
}

int main(int argc, char const *argv[])
{
    string nome;

    while(true)
    {
        cout << "Digite o nome da pessoa: ";
        cin >> nome;
        cout << "ID gerado para o usuario " << nome << ": " << gerarID() << "\n\n";
    }

    return 0;
}
