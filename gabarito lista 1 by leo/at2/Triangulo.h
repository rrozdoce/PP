//
// Created by rgm43566 on 11/04/2022.
//

#ifndef EX2_TRIANGULO_H
#define EX2_TRIANGULO_H
#include "Ponto2d.h"

class Triangulo {

    ///atributos;
    Ponto2d p[3];
    //construtores


public:
    ///enuns
    enum lados {isosceles,equilatero,escaleno};
    enum angulos {acutangulo, obtusangulo,retangulo};
    Triangulo();
    Triangulo(Ponto2d[]);
    double area() const;
    lados classificaLados() const;
    angulos classificaAngulo() const;

    Ponto2d getP(unsigned) const;

    void setP(unsigned,const Ponto2d&);

};


#endif //EX2_TRIANGULO_H
