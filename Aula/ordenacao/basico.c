#include <stdio.h>
#include "stdlib.h"

// algoritmo de ordenação básico

int main() {

    int n = 10;
    int p[10] = {9 , 8, 7, 6, 5, 4, 3, 2, 1, 0};

    int aux = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(p[i] <= p[j])
            {
              aux = p[i];
              p[i] = p[j];
              p[j] = aux;
            }

        }

    }

    for(int i = 0; i < n; i++)
    {
        printf("p[%i]: %d\n", i + 1, p[i]);
    }

    return 0;
}
