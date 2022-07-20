#include <iostream>
#include <set>
using namespace std;

// elementos nao podem ser repetidos
// fica ordenado

int main(int argc, char const *argv[])
{
    int vet[] = {70, 20, 80, 30, 40};
    set<int> myset(vet, vet + 5);

    set<int>::iterator it = myset.begin();

    cout << "\nMostrando os elementos: ";
    while (it != myset.end())
    {
        cout << *it << " ";
        it++;
    }

    // myset.clear();

    //it = myset.begin();
    //myset.erase(it);

    if (myset.empty())
        cout << "\nConjunto vazio!!\n";
    else
        cout << "\nCojunto NAO vazio!!\n";
    

    it = myset.begin();
    cout << "\nMostrando os elementos: ";
    while (it != myset.end())
    {
        cout << *it << " ";
        it++;
    }
    it = myset.find(70);
    if(it == myset.end())
      cout << "\n\nO elemento 70 nao existe\n";
    else 
      cout << "\n\nO elemento 70 existe\n";


    cout << "\n\nTamanho do conjunto: " << myset.size();

    cout << endl;

    return 0;
}