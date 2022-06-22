#include <iostream>
#include "FloatMatriz.h"
using namespace std;
void printa(FloatMatriz m){
    for (int i = 0; i < 2; ++i) {
        cout<<"|";
        for (int j = 0; j < 2; ++j) {
            cout<<m.getValor(i,j)<<" ";
        }
        cout<<"|"<<endl;
    }
}
int main() {
    FloatMatriz m(4,3,2,2);
    printa(m);
    printa(m.calcInversa());
    return 0;
}
