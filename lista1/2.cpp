#include <iostream>
#include <math.h>

using namespace std;

// Lista 1 exercicio 2

// a
class Dponto {

public:
  Dponto():
   x(0),
   y(0)
{}

 ~Dponto()
  {}

  Dponto(float x , float y);
  void setX(float x);
  void setY(float y);
  float calculoDistancia(Dponto ponto);

private:  

 float x, y;
};

Dponto::Dponto(float x, float y) {
    this->x = x;
    this->y = y;
}

void Dponto::setX(float x) {
  this->x = x;
}

void Dponto::setY(float y) {
  this->y = y;
}

float Dponto::calculoDistancia(Dponto ponto) {
   float d, deltax, deltay;
   deltax = pow(x - ponto.x, 2);
   deltay = pow(y - ponto.y, 2);
   d = sqrt(deltax + deltay);

    return d;
}


//b
class triangulo {
  public:
    
    triangulo():
    p1(Dponto(0, 0)),
    p2(Dponto(0, 0)),
    p3(Dponto(0, 0))
  {}

    ~triangulo()
  {}

  triangulo(Dponto p1, Dponto p2, Dponto p3);

  float area();
  bool eh_equilatero();
  bool eh_isosceles();
  bool eh_escaleno();
  bool eh_acutangulo();
  bool eh_obtusangulo();
  bool eh_retangulo();
  private:
   Dponto p1, p2, p3;
};

triangulo::triangulo(Dponto p1, Dponto p2, Dponto p3) {
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
}

float triangulo::area(){
   
}

bool triangulo::eh_equilatero(){

}

bool triangulo::eh_isosceles(){

}

bool triangulo::eh_escaleno(){

}

bool triangulo::eh_acutangulo(){

}

bool triangulo::eh_obtusangulo(){

}

bool triangulo::eh_retangulo(){

}

int main(void)
{
  Dponto ponto1(1.0, 1);
	Dponto ponto2(5.0, 5);
	Dponto ponto3(9.0, 1);

  return 0;
}