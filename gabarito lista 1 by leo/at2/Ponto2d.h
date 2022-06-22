//
// Created by rgm43566 on 11/04/2022.
//

#ifndef EX2_PONTO2D_H
#define EX2_PONTO2D_H
#include "math.h"

class Ponto2d {
    ///atributor
    double x,y;
public:
    Ponto2d(double x, double y);
    Ponto2d();


    ///calcula distancia desse ponto para o ponto p
    double distancia(Ponto2d p) const;

    double getX() const;

    void setX(double x);

    double getY() const;

    void setY(double y);
};




#endif //EX2_PONTO2D_H
