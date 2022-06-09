// Lista_PP2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
2- Implemente uma classe para representar pontos em R2

(vulgo 2D) e implemente um método para:

a- calcular a distância entre dois pontos (será usado na próxima parte do exercício).
Agora, usando a classe acima, implemente uma segunda classe para representação de triângulos,
descritos por três pontos (vértices do triângulo). Implemente métodos para:
a- calcular a área do triângulo;
b- verificar a classificação deste triângulo quanto ao tamanho de seus lados (isósceles, equilátero e
escaleno)
c- verificar a classificação deste triângulo quanto aos seus ângulos internos (acutângulo, obtusângulo e
retângulo);
*/

#include <iostream>
#include <math.h>

class PontoR2
{
public:
	PontoR2():
		x(0),
		y(0)
	{}

	~PontoR2()
	{}
	
	PontoR2(float x, float y):
		x(x),
		y(y)
	{}

	void setX(float x) {
		PontoR2::x = x;
	}

	void setY(float y) {
		PontoR2::y = y;
	}

	float calcDistancia(PontoR2 ponto) {
		float distancia,diferencaX, diferencaY;
		diferencaX = pow(x - ponto.x, 2);
		diferencaY = pow(y - ponto.y, 2);
		distancia = sqrt(diferencaX + diferencaY);

		return distancia;
	}

private:
	float x, y;
};

class triangulo
{
public:
	triangulo():
		p1(PontoR2(0,0)),
		p2(PontoR2(0,0)),
		p3(PontoR2(0,0))
	{}

	~triangulo()
	{}

	triangulo(PontoR2 p1,PontoR2 p2, PontoR2 p3):
		p1(p1),
		p2(p2),
		p3(p3)
	{}

	float calc_area() {
		float semiPerimetro, a, b, c, area;
		a = p1.calcDistancia(p2);
		b = p1.calcDistancia(p3);
		c = p2.calcDistancia(p3);
		semiPerimetro = (a + b + c) / 2;
		area = sqrt(semiPerimetro * (semiPerimetro - a) * (semiPerimetro - b) * (semiPerimetro - c));

		return area;
	}

	bool eh_equilatero() {
		float a, b, c;
		bool eh;

		a = p1.calcDistancia(p2);
		b = p1.calcDistancia(p3);
		c = p2.calcDistancia(p3);

		if (a==b&&b==c)
		{
			eh = true;
		}
		else
		{
			eh = false;
		}
		return eh;
	}

	bool eh_isosceles() {
		float a, b, c;
		bool eh;

		a = p1.calcDistancia(p2);
		b = p1.calcDistancia(p3);
		c = p2.calcDistancia(p3);

		if (a == b || b == c || a == c ) 
		{
			eh = true;
		}
		else
		{
			eh = false;
		}
		return eh;
	}

	bool eh_escaleno() {
		float a, b, c;
		bool eh;

		a = p1.calcDistancia(p2);
		b = p1.calcDistancia(p3);
		c = p2.calcDistancia(p3);

		if (a != b && b != c && a != c ) 
		{
			eh = true;
		}
		else
		{
			eh = false;
		}
		return eh;
	}

	bool eh_acutangulo() {
		float a, b, c, ang1, ang2, ang3,calc;
		bool eh;
		const double PI = 3.1415926;

		a = p1.calcDistancia(p2);
		b = p1.calcDistancia(p3);
		c = p2.calcDistancia(p3);

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

	bool eh_obtusangulo() {
		float a, b, c, ang1, ang2, ang3, calc;
		bool eh;
		const double PI = 3.1415926;

		a = p1.calcDistancia(p2);
		b = p1.calcDistancia(p3);
		c = p2.calcDistancia(p3);

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

	bool eh_retangulo() {
		float a, b, c, ang1, ang2, ang3, calc;
		bool eh;
		const double PI = 3.1415926;

		a = p1.calcDistancia(p2);
		b = p1.calcDistancia(p3);
		c = p2.calcDistancia(p3);

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

private:
	PontoR2 p1, p2, p3;
};

int main()
{
	PontoR2 ponto1(1.0, 1);
	PontoR2 ponto2(5.0, 5);
	PontoR2 ponto3(9.0, 1);

	triangulo tri1(ponto1, ponto2, ponto3);
	std::cout << ponto1.calcDistancia(ponto2) <<std::endl;
	std::cout << ponto1.calcDistancia(ponto3) << std::endl;
	std::cout << ponto2.calcDistancia(ponto3) << std::endl;
	std::cout <<"A area do triangulo eh " << tri1.calc_area() << std::endl;

	if (tri1.eh_equilatero())
	{
		std::cout << "O triangulo eh equilatero " << std::endl;
	}
	if (tri1.eh_escaleno())
	{
		std::cout << "O triangulo eh escaleno" << std::endl;
	}
	if (tri1.eh_isosceles())
	{
		std::cout << "O triangulo eh isosceles" << std::endl;
	}
	if (tri1.eh_obtusangulo())
	{
		std::cout << "O triangulo eh obtusangulo" << std::endl;
	}
	if (tri1.eh_retangulo())
	{
		std::cout << "O triangulo eh retangulo" << std::endl;
	}
	if (tri1.eh_acutangulo())
	{
		std::cout << "O triangulo eh acutangulo" << std::endl;
	}

	
	
	//std::cout << "Hello World!\n";
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu