#include <iostream>
#include "arranjo.h"
using namespace std;
void exibe(arranjo a){//printa arranjo
    for (int i = 0; i < a.getTam() ; ++i) {
        try {
            cout << a.getValor(i)<<"\n";
        }catch (exception &e){
            cout<<e.what();
        }
    }
}
int main() {
    arranjo a;
    try {//inserção de teste
        a.inserir(3);
        a.inserir(9);
        a.inserir(5);
        a.inserir(1);
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