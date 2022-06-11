#include <iostream>
#include <math.h>

using namespace std;

// Lista 1 exercicio 2

// a
class Dponto
{

public:
  Dponto() : x(0),
             y(0)
  {
  }

  ~Dponto()
  {
  }

  Dponto(float x, float y);
  void setX(float x);
  void setY(float y);
  float calculoDistancia(Dponto ponto);

private:
  float x, y;
};

Dponto::Dponto(float x, float y)
{
  this->x = x;
  this->y = y;
}

void Dponto::setX(float x)
{
  this->x = x;
}

void Dponto::setY(float y)
{
  this->y = y;
}

float Dponto::calculoDistancia(Dponto ponto)
{
  float d, deltax, deltay;
  deltax = pow(x - ponto.x, 2);
  deltay = pow(y - ponto.y, 2);
  d = sqrt(deltax + deltay);

  return d;
}

// b
class triangulo
{
public:
  triangulo() : p1(Dponto(0, 0)),
                p2(Dponto(0, 0)),
                p3(Dponto(0, 0))
  {
  }

  ~triangulo()
  {
  }

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

triangulo::triangulo(Dponto p1, Dponto p2, Dponto p3)
{
  this->p1 = p1;
  this->p2 = p2;
  this->p3 = p3;
}

float triangulo::area()
{
  float semiPerimetro, a, b, c, area;
  a = p1.calculoDistancia(p2);
  b = p1.calculoDistancia(p3);
  c = p2.calculoDistancia(p3);
  semiPerimetro = (a + b + c) / 2;
  area = sqrt(semiPerimetro * (semiPerimetro - a) * (semiPerimetro - b) * (semiPerimetro - c));

  return area;
}

bool triangulo::eh_equilatero()
{
  float a, b, c;
  bool eh;

  a = p1.calculoDistancia(p2);
  b = p1.calculoDistancia(p3);
  c = p2.calculoDistancia(p3);

  if (a == b && b == c)
  {
    eh = true;
  }
  else
  {
    eh = false;
  }
  return eh;
}

bool triangulo::eh_isosceles()
{
  float a, b, c;
  bool eh;

  a = p1.calculoDistancia(p2);
  b = p1.calculoDistancia(p3);
  c = p2.calculoDistancia(p3);

  if (a == b || b == c || a == c)
  {
    eh = true;
  }
  else
  {
    eh = false;
  }
  return eh;
}

bool triangulo::eh_escaleno()
{
  float a, b, c;
  bool eh;

  a = p1.calculoDistancia(p2);
  b = p1.calculoDistancia(p3);
  c = p2.calculoDistancia(p3);

  if (a != b && b != c && a != c)
  {
    eh = true;
  }
  else
  {
    eh = false;
  }
  return eh;
}

bool triangulo::eh_acutangulo()
{
  float a, b, c, ang1, ang2, ang3, calc;
  bool eh;
  const double PI = 3.1415926;

  a = p1.calculoDistancia(p2);
  b = p1.calculoDistancia(p3);
  c = p2.calculoDistancia(p3);

  calc = (pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b);
  ang1 = acos(calc) * 180 / PI;

  calc = (pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c);
  ang2 = acos(calc) * 180 / PI;

  calc = (pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c);
  ang3 = acos(calc) * 180 / PI;

  if ((ang1 < 90) && (ang2 < 90) && (ang3 < 90))
  {
    eh = true;
  }
  else
  {
    eh = false;
  }
  return eh;
}

bool triangulo::eh_obtusangulo()
{
  float a, b, c, ang1, ang2, ang3, calc;
  bool eh;
  const double PI = 3.1415926;

  a = p1.calculoDistancia(p2);
  b = p1.calculoDistancia(p3);
  c = p2.calculoDistancia(p3);

  calc = (pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b);
  ang1 = acos(calc) * 180 / PI;
  std::cout << ang1 << std::endl;

  calc = (pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c);
  ang2 = acos(calc) * 180 / PI;
  std::cout << ang2 << std::endl;

  calc = (pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c);
  ang3 = acos(calc) * 180 / PI;
  std::cout << ang3 << std::endl;

  if ((ang1 > 90) || (ang2 > 90) || (ang3 > 90))
  {
    eh = true;
  }
  else
  {
    eh = false;
  }
  return eh;
}

bool triangulo::eh_retangulo()
{
  float a, b, c, ang1, ang2, ang3, calc;
  bool eh;
  const double PI = 3.1415926;

  a = p1.calculoDistancia(p2);
  b = p1.calculoDistancia(p3);
  c = p2.calculoDistancia(p3);

  calc = (pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b);
  ang1 = acos(calc) * 180 / PI;

  calc = (pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c);
  ang2 = acos(calc) * 180 / PI;

  calc = (pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c);
  ang3 = acos(calc) * 180 / PI;

  if ((ang1 == 90) || (ang2 == 90) || (ang3 == 90))
  {
    eh = true;
  }
  else
  {
    eh = false;
  }
  return eh;
}

int main(void)
{
  Dponto ponto1(1.0, 1);
  Dponto ponto2(5.0, 5);
  Dponto ponto3(9.0, 1);

  triangulo tri1(ponto1, ponto2, ponto3);
  cout << ponto1.calculoDistancia(ponto2) << endl;
  cout << ponto1.calculoDistancia(ponto3) << endl;
  cout << ponto2.calculoDistancia(ponto3) << endl;
  cout << "A area do triangulo eh " << tri1.area() << endl;

  if (tri1.eh_equilatero())
  {
    cout << "O triangulo eh equilatero " << endl;
  }
  if (tri1.eh_escaleno())
  {
    cout << "O triangulo eh escaleno" << endl;
  }
  if (tri1.eh_isosceles())
  {
    cout << "O triangulo eh isosceles" << endl;
  }
  if (tri1.eh_obtusangulo())
  {
    cout << "O triangulo eh obtusangulo" << endl;
  }
  if (tri1.eh_retangulo())
  {
    cout << "O triangulo eh retangulo" << endl;
  }
  if (tri1.eh_acutangulo())
  {
    cout << "O triangulo eh acutangulo" << endl;
  }

  return 0;
}