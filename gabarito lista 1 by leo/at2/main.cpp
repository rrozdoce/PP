#include <iostream>
#include "Triangulo.h"
#include "math.h"
using namespace std;
void printTesteLados(Triangulo t){
    switch (t.classificaLados()) {
        case Triangulo::escaleno:
            cout<<"escaleno\n";
            break;
        case Triangulo::isosceles:
            cout<<"isosceles\n";
            break;
        case Triangulo::equilatero:
            cout<<"equilatero\n";
            break;
    }
}
void printTesteangulos(Triangulo t){
    switch (t.classificaAngulo()) {
        case Triangulo::retangulo:
            cout<<"retangulo\n";
            break;
        case Triangulo::acutangulo:
            cout<<"acutangulo\n";
            break;
        case Triangulo::obtusangulo:
            cout<<"obtusangulo\n";
            break;
    }
}
int main() {
    Ponto2d p[3] = {Ponto2d(1,0),Ponto2d(1,1),Ponto2d(0,0)};
    Triangulo t(p);
    printTesteangulos(t);
    printTesteLados(t);

    return 0;
}
