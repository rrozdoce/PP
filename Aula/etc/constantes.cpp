#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // as variaveis constantes devem ser inicializadas quando criadas
    const double PI = 3.1415;

    const int vet[] = {1, 2, 3};
    const int *p1 = &vet[0];

    // ponteiro constante para um array int
    // nao é possivel alterar o ponteiro
    int const *p2 = &vet[1];

    //
    int *const p3 = new int[3];

    // nao conseguimos nem alterar o valor do ponteiro, nem os caractere para os quais ele aponta
    // ou seja, o ponteiro é constante e aponta para caracteres constantes
    const char *const p4 = "Marcos";

    /*     p1 = &vet[0];
        p2 = &vet[1];

        cout << *p1 << endl;
        cout << *p2 << endl; */

    //*p1 = 10; // erro

    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    *p3 = 1;
    *(p3 + 1) = 2;
    *(p3 + 2) = 3;

    cout << "P3: " << endl;
    cout << *p3 << endl;
    cout << *(p3 + 1) << endl;
    cout << *(p3 + 2) << endl;

    *p3 = 10;

    cout << "valor modificado: " << *p3 << endl;

    cout << "P4: " << endl;
 
    cout << *(p4 + 1) << endl;

    int vet2[4];
    int *pt;

     

    delete[] p3;
    delete[] vet;

    return 0;
}
