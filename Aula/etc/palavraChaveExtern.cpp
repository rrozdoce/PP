#include <iostream>

using namespace std;

// nao funciona para variaveis, para isso, usar um header
extern int var;

int main(int argc, char const *argv[])
{
    int var = 10;

    cout << var << endl;

    return 0;
}
