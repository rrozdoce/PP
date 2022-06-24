#include <iostream>

using namespace std;

// definindo a funcao soma
template<typename T> T soma(T n1, T n2){
    return n1 + n2;
}

int main(int argc, char const *argv[])
{
    // com a mesma operacao realizo a mesma operação com tipos diferentes
    cout << "Soma de inteiros>: " << soma(10, 20) << endl;
    cout << "Soma de reais>: " << soma(1.50, 2.5) << endl;
    //cout << "Soma de reais>: " << soma(1.50, 2.5) << endl;

    return 0;
}
