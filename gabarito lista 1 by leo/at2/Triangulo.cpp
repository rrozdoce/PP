//
// Created by rgm43566 on 11/04/2022.
//

#include "Triangulo.h"
#include <cstring>
#include <cmath>
Triangulo::Triangulo() = default;

Triangulo::Triangulo(Ponto2d p[3]) {
    memcpy(this->p,p, sizeof(Ponto2d));
}
double Triangulo::area() const{
    double a,b,c;//variaveis da equação da reta
    a=p[0].getY()-p[1].getY();
    b=p[1].getX()-p[0].getX();
    c=p[0].getX()*p[1].getY() - p[1].getX()*p[0].getY();

    //variaveis
    double altura;
    double base= p[0].distancia(p[1]);//ja se inicia a distancia
    //calculo da altura
    altura=(a*p[2].getX() + b*p[2].getY() + c)/ sqrt(a*a+b*b);

    //calculo do retorno
    double retorno= base*altura/2;
    //verificação se a area é negativa com retorno
    return (retorno>=0)?retorno:retorno*-1;//se for negativo, o valor é multiplicado por -1 antes do retorno
}


Triangulo::lados Triangulo::classificaLados() const{
    //caso todos os lados sejam iguais
    if(p[0].distancia(p[1])==p[0].distancia(p[2])&&p[2].distancia(p[1])==p[0].distancia(p[2])){
        return equilatero;
    }else{
        //se todos os lados nao sao iguais, mas pelo menos 2 lados sao iguais
        if(p[0].distancia(p[1])==p[0].distancia(p[2])||p[1].distancia(p[2])==p[1].distancia(p[0])||p[2].distancia(p[0])==p[2].distancia(p[1])){
            //retorna isosceles
            return isosceles;
        }
        //caso não seja nenhum dos outros, ele é escaleno
        return escaleno;
    }

}

Triangulo::angulos Triangulo::classificaAngulo() const{
    float a,b,c;//angulos
    //lados
    float lado_a,lado_b,lado_c;
    lado_a=p[0].distancia(p[1]);
    lado_b=p[1].distancia(p[2]);
    lado_c=p[2].distancia(p[0]);
    a=((lado_a*lado_a)-(lado_b*lado_b)-(lado_c*lado_c))/(-2*lado_b*lado_c);
    b=((lado_b*lado_b)-(lado_a*lado_a)-(lado_c*lado_c))/(-2*lado_a*lado_c);
    c=((lado_c*lado_c)-(lado_a*lado_a)-(lado_b*lado_b))/(-2*lado_a*lado_b);
    a=acos(a)*180/M_PI;
    b=acos(b)*180/M_PI;
    c=acos(c)*180/M_PI;
    if(a>90||b>90||c>90){
       //caso exista um angulo maior que 90(apenas um pode ser, do contrario o triangulo não existe) sera triangulo obtusangulo
       return obtusangulo;
    }else{
       if(a==90||b==90||c==90){
           //do contrario, caso tenha um angulo de 90, sera um triangulo retangulo
           return retangulo;
       }
       //do contrario tera que ser um acutangulo
       return acutangulo;
   }


}

//getters e setters
Ponto2d Triangulo::getP(unsigned i) const {
    return p[i];
}

void Triangulo::setP(unsigned i, const Ponto2d &p) {
    Triangulo::p[i] = p;
}
