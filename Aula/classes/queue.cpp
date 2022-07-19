#include <iostream>
#include <queue>

using namespace std;

// queue

int main(int argc, char const *argv[])
{
    queue<int> fila;

    // inserindo na fila
    fila.push(10);
    fila.push(20);
    fila.push(30);
    // fila: 10 20 30

    // mostrando o ultimo elemento
    cout << "\nUltimo elemento: " << fila.back() << endl;

    if (fila.empty())
    {
        cout << "Fila vazia!!\n";
    }
    else
    {
        cout << "Fila NAO vazia!!\n";
    }

    cout << "\nPrimeiro elemento: " << fila.front() << endl;

    fila.pop();

    cout << "\nMostrando todos os elementos: ";
    while(!fila.empty())
    {
        int e = fila.front();
        cout << e << " ";
        fila.pop();
    }

    // inserindo novamente na fila
    fila.push(10);
    fila.push(20);
    fila.push(30);

    cout << "\n\nTamanho da fila: " << fila.size() << endl;
    

    return 0;
}
