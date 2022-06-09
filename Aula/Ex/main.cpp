#include <iostream>
#include <stdlib.h>
#include "DStack.h"

using namespace std;

class DString {

  char *array;
  
  public:

   DString(const DString&); // const de copia
   DString(const char*);
   DString s1, s2("teste");
   s1 = s2;
   
};