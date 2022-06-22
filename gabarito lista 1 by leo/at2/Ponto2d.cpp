//
// Created by rgm43566 on 11/04/2022.
//

#include "Ponto2d.h"

Ponto2d::Ponto2d(double x, double y) : x(x), y(y) {}

Ponto2d::Ponto2d():x(0),y(0) {
}

//setters e getters
double Ponto2d::getX() const {
    return x;
}

void Ponto2d::setX(double x) {
    Ponto2d::x = x;
}

double Ponto2d::getY() const {
    return y;
}

void Ponto2d::setY(double y) {
    Ponto2d::y = y;
}

double Ponto2d::distancia(Ponto2d p) const{
    //calculo da distancia dos pontos usando calculo de hipotenusa
    double x=pow(this->x-p.x,2);
    double y=pow(this->y-p.y,2);

    return sqrt(x+y);//retornando a distancia
}
