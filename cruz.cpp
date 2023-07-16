#include <stdio.h>
#define DIM 11

void cruz(char simbolo);
void imprimir_lineaEntera(char simbolo);
void imprimir_soloPosicionMedia(char simbolo);

int main()
{
    char simbolo = '*';
    cruz(simbolo);
    return 0;
}

void cruz(char simbolo){
    for(int i = 0; i < DIM; i++)
    {
       if(i != DIM/2)
       {
           imprimir_soloPosicionMedia(simbolo);
       }else
       {
           imprimir_lineaEntera(simbolo);
       }
       printf("\n");
    }
}

void imprimir_soloPosicionMedia(char simbolo)
{
    char espacio = ' '; 
    for(int j = 0; j < DIM; j++)
    {
        if(j != DIM/2)
        {
            printf("%c ", espacio);
        }else
        {
            printf("%c", simbolo);
        }
    }
}

void imprimir_lineaEntera(char simbolo)
{
    for(int i = 0; i < DIM; i++)
    {
        printf("%c ", simbolo);
    }
}
