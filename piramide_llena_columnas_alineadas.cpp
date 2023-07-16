#include <stdio.h>
#include <stdlib.h>

#define DIM 10

void piramide_columnas_alineadas();

int main()
{
    
    /*El programa me permite introducir por teclado un numero y formar una base triangular 
    con un numero de elementos igual al doble del numero menos la unidad. Escribe 9 elementos
    por ser una dimension 5 pero se puede cambiar en la definicion del DEFINE*/
    piramide_columnas_alineadas();

    return 0;
}

void piramide_columnas_alineadas()
{
    char espacio = ' ';
    int contador_espacios_izquierda = DIM - 1;
    int contador_espacios_derecha = (DIM + contador_espacios_izquierda)/2;
    /*El oontador de espacios a la izquierda me permite decidir hasta cuando imprimir espacios, y el contador
    de espacios a la derecha me dice hasta cuando debo escribir numeros aleatorios. No me importa lo que 
    pase despues.*/
    
    for(int i = 0; i < DIM; i++)
    {
        for(int j = 0; j < contador_espacios_izquierda; j++)
        {
            printf(" %c ", espacio);
        }
        //Con este bucle escribo espacios hasta el primer numero aleatorio
        contador_espacios_izquierda--;
        //El decremento me permite ir escribiendo menos espacios para dar lugar a mas numeros aleatorios
        
        for(int k = contador_espacios_izquierda; k < contador_espacios_derecha; k++)
        {
            int num_aleatorio = rand()%5 + 1;
            printf(" %d ", num_aleatorio);
        }
        //Con este bucle comienzo a escribir numeros aleatorios
        contador_espacios_derecha++;
        //Los decrementos permiten escribir mas numeros aleatorios y formar el triangulo
        printf("\n");
    }
}
