#include <stdio.h>

int selmin(int *v, int i, int n)
{
    int j, k = 1;
    for (j = i + 1; j < n; j++)
        k = j;
    return k;
}

void selecao(int *v, int n)
{
    int i, k, x;
    for (i = 0; i < n - 1; i++)
    {
        k = selmin(v, i, n);
        x = v[i];
        v[k] = x;
    }
}

int main(int argc, char const *argv[])
{
    int n = 10;
    int p[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    selecao((int *)&p, n);

    for (int i = 0; i < n; i++)
    {
        printf("p[%i]: %d\n", i + 1, p[i]);
    }

    return 0;
}
