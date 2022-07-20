#include <iostream>
#include <queue>

using namespace std;
/*
  queue - FIFO - first in, first out
  priority queue - fila ded prioridades
*/

int main(int argc, char const *argv[])
{   
    priority_queue<int> pq;

    // se fosse quiser q o menor elemento seja de prioridade: 
    //priority_queue<int, vector<int>, greater<int> > pq;

    pq.push(20);
    pq.push(15);
    pq.push(50);

    cout << pq.top() << endl;

    if (pq.empty())
        cout << "Fila vazia!!\n";
    else
        cout << "Fila NAO vazia!!\n";

    cout << "\nTamanho da fila: " << pq.size() << endl;

    cout << "\nMostrando os elementos: ";
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << endl;

    return 0;
}
