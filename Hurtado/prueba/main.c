#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_REP 3
int sumarnumeros()
{
    int numerouno;
    int numerodos;
    int resultado;

    printf("ingrese un numero\n");
    scanf("%d",&numerouno);

    printf("ingrese un numero\n");
    scanf("%d",&numerodos);

    resultado=numerouno+numerodos;

    printf("la suma es %d",resultado);
    return 0;
}

int promediosdenumeros()
{
    int numero;
    int acumulador=0;
    int promedio;
    int i=0;

    for(i=0;i<CANTIDAD_REP;i++)
    {
        printf("ingrese un numero\n");
        scanf("%d",&numero);
        //falta validar
        acumulador=numero+acumulador;
    }
    promedio=acumulador/CANTIDAD_REP;

    printf("el promedio es: %f",promedio);
    return(0);
}


int main()
{
    promediosdenumeros();
   // if(sumarnumeros()==0)
    //{
      //  printf("\n esta bien");
    //}


    return(0);
}
