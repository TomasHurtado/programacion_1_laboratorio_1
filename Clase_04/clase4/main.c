#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int memoria;
    //prueba();
   // printf("Hello world!\n");
   utn_getnumber(&memoria,100,0,"ingrese_nuemero","error");
   printf("%d",memoria);
    return 0;
}
