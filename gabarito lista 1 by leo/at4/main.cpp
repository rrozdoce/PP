#include <iostream>
#include "arranjo.h"
using namespace std;
void exibe(arranjo a){//printa arranjo
    for (int i = 0; i < a.getTam() ; ++i) {
        try {
            cout << endl << a.getValor(i);
        }catch (exception &e){
            cout<<e.what();
        }
    }
}
int main() {
    arranjo a;
    try {//inserção de teste
        for (int i = 0; i < 12; ++i) {//inseri de 0 a 9 e ai inserir o 10 ocorre um erro
            a.inserir(i);
        }
    } catch (exception &e) {
        cout<<e.what();
    }
    //teste busca
    if(a.busca(5))cout<<"\nachou";
    else cout<<"\nnao encoutrou";
    //
    cout<<"\nvalores:"<<endl;
    exibe(a);
    //teste remoção
    try {
        a.remover(3);

    } catch (exception &e) {
        cout<<e.what();
    }
    cout<<"\nvalores:"<<endl;
    exibe(a);
    return 0;
}
