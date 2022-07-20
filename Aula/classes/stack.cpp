#include <iostream>
#include <stack>
using namespace std;

// stack

/*
  Pilha - LIFO(last in first out)
*/

int main(int argc, char const *argv[])
{
    stack<int> pilha;

    pilha.push(10);
    pilha.push(20);
    pilha.push(30);
    pilha.push(40);

    // pilha: 10 20 30 40

    while(!pilha.empty())
    {
        int e = pilha.top();

        cout << e << " ";
        pilha.pop();
    }

    cout << "\n";

    return 0;
}
