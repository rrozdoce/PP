#include <iostream>
#include "OitoBits.h"
using namespace std;
void exibe(OitoBits b){
    for (int i = 7; i >= 0; --i) {
        if(b.getBit(i)==1){
            cout<<'1';
        }else{
            cout<<'0';
        }
    }
    cout<<endl;
}
int main() {

    OitoBits teste("01101100");
    if(teste.verificaParidade()==teste.par){
        cout<<"par\n";
    }
    exibe(teste);
    teste.setBit(0,1);
    if(teste.verificaParidade()==teste.impar){
        cout<<" \nimpar\n";
    }
    exibe(teste);
    teste.setBit(0,0);
    if(teste.verificaParidade()==teste.par){
        cout<<"\npar\n";
    }
    exibe(teste);
    return 0;
}
