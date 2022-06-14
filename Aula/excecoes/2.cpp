#include <iostream>
#include <exception>
#include <string.h>

// tratamento de erro com uma Classe

using namespace std;

// vai herdar da classe exception
class ExcessaoCustomizadas : public exception
{
protected:
    char msg[100];

public:
    ExcessaoCustomizadas(const char *e);
    virtual const char *what();
};

ExcessaoCustomizadas::ExcessaoCustomizadas(const char *e)
{
    strcpy(msg, e);
}

const char *ExcessaoCustomizadas::what()
{
    return msg;
}

int fat(int n) {
    if(n < 0)
     throw ExcessaoCustomizadas("Numero Negativo!!");
    if(n == 0 || n == 1)
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
    catch (ExcessaoCustomizadas e)
    {
        cerr << "Erro: " << e.what() << endl;
    }
    catch(...)
    {
        cout << "Erro inesperado. \n";
    }

    return 0;
}
