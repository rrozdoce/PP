//
// Created by XSpat on 7/1/2022.
//

#include "stdio.h"
#include "stdlib.h"
#include "trocas.h"

void ordena(int *v, int n)
{
  int i, j;
  int x;

  for(i = 1; i < n; i++)
  {
      for(j = 0; j < n-i; j++)
      {
          if(v[j] > v[j + 1])
          {
              x = v[j];
              v[j] = v[j + 1];
              v[j + 1] = x;
          }
      }
  }
}