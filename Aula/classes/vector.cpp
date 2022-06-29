#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{ 
    vector<int> v;
    
    // vai inserir ao final do vetor
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    
    // tamanho do vetor
    int tam = v.size();

    for (int i = 0; i < tam; i++)
    {
        cout << v[i] << endl;
    }
    
 
    return 0;
}
