#include <iostream>
#include "ParInt.h"
using namespace std;
///função que receme um ParInt e testa ele
void print_teste(ParInt teste){
    cout<<"first: "<<teste.getFirst()<<endl;
    cout<<"second: "<<teste.getSecond()<<endl;
    cout<<"maior valor: "<<teste.greaterValue()<<endl;
    teste.swap();
    cout<<"apos o swap"<<endl;
    cout<<"first: "<<teste.getFirst()<<endl;
    cout<<"second: "<<teste.getSecond()<<endl;
    cout<<"maior valor: "<<teste.greaterValue()<<endl;
    cout<<endl<<endl;

}
int main() {
    //testes
    ParInt teste1(4,7);
    print_teste(teste1);
    ParInt teste2(9,2);
    print_teste(teste2);
    ParInt teste3(5,5);
    print_teste(teste3);


    return 0;
}
