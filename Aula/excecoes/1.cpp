#include <iostream>

using namespace std;

double div(double n1, double n2)
{
    if (n2 == 0)
        throw "Divisao por zero!!\n";
    return n1 / n2;
}

int fat(int n)
{
    if (n < 0)
        throw "Numero negativo!!";

    if (n == 0 || n == 1)
        return 1;
    return n * fat(n - 1);
}

int main(void)
{
    try
    {
        cout << "Fatorial  de 5: " << fat(5) << endl;
        cout << "Fatorial  de -5: " << fat(-5) << endl;
    }
    catch (const char *e)
    {
        cerr << "Erro: " << e << endl;
    }

    catch (...)
    {
        cerr << "Erro inesperrado.\n";
    }

    return 0;
}
