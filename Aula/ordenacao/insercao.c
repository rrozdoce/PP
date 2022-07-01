#include <stdio.h>

void insercao(int *v, int n)
{
    int i, j, x;

    for (i = 1; i < n; i++)
    {
        x = v[i];
        for (j = i - 1; j >= 0 && x < v[j]; j--)
            v[j + 1] = v[j];
        v[j + 1] = x;
    }
}

int main(int argc, char const *argv[])
{

    int n = 10;
    int p[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    insercao((int *)&p, n);

    for (int i = 0; i < n; i++)
    {
        printf("p[%i]: %d\n", i + 1, p[i]);
    }

    return 0;
}
