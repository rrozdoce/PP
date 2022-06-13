#include <iostream>
#include "pilha.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Pilha p;

    p.push(10);
    p.push(11);
    p.push(12);
    p.pop();

    cout << "Pilha vazia: " << p.vazia() << endl;
    cout << "Topo: " << p.getopo() << endl;

    return 0;
}
