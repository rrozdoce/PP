#include <stdio.h>

int pertence(int x, int *v, int n)
{
    int i, f, m;
    f = 0;
    f = n - 1;
    while (i <= f)
    {
        m = (i + f) / 2;
        if (x == v[m])
            return 1;
        if (x < v[m])
            f = m - 1;
        else
            i = m + 1;
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    int n = 10;
    int p[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int q[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};


/*
    nao funciona com vetores nao ordenados!
    
    printf("%d", pertence(10, (int *)&p, n));
    printf("%d", pertence(5, (int *)&p, n));

*/

    printf("%d\n", pertence(10, (int *)&q, n));
    printf("%d\n", pertence(9, (int *)&q, n));
    printf("%d\n", pertence(5, (int *)&q, n));

    return 0;
}
