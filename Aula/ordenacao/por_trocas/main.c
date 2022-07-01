//
// Created by XSpat on 7/1/2022.
//

#include "stdio.h"
#include "stdlib.h"
#include "trocas.h"

int main(void)
{
    int n = 10;
    int p[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    ordena((int *) &p, n);

    for(int i = 0; i < n; i++)
    {
        printf("p[%i]: %d\n", i + 1, p[i]);
    }

    return 0;
}
