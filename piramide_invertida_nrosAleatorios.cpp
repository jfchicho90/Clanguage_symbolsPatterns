#include <stdio.h>
#include <stdlib.h>

void piramide_invertida_vacio_aleatorios(int DIM);
int leer_Dimension();
int condicion_lectura(int nro_ingresado);

int main()
{

    int DIM_PIRAMIDE = leer_Dimension();
    piramide_invertida_vacio_aleatorios(DIM_PIRAMIDE);

    return 0;
}

int leer_Dimension()
{
    int n_dim;
    printf("Ingrese dimension entre 20 y 30: ");
    scanf("%d", &n_dim);
    while(!condicion_lectura(n_dim))
    {
        printf("Error: Ingrese nuevamente: ");
        fflush(stdin);
        scanf("%d", &n_dim);
    }
    return n_dim;
}

int condicion_lectura(int nro_ingresado)
{
    return nro_ingresado >= 10 && nro_ingresado <= 30;
    //Validamos que el numero ingresado este en el rango buscado
}

void piramide_invertida_vacio_aleatorios(int DIM)
{
    char espacio = ' '; //El programa permite crear una piramide invertida de numoers aleatorios
    int i = 0;
    int contador_numeros_izquierda = i + 1;
    int contador_simbolos_derecha = DIM - i - 1;

    for(i = 0; i < DIM/2; i++)
    {
        for(int j = 0; j < contador_numeros_izquierda; j++)
        {
            printf(" %c ", espacio);
        }
        //Este bucle permite imprimir espacios a la izquierda de la piramide.
        
        for(int j = contador_numeros_izquierda; j < contador_simbolos_derecha; j++)
        {
            printf(" %d ", rand()%5 + 1);
        }
        //Este bucle permite imprimir numeros aleatorios formando la piramide.
        
        for(int j = contador_simbolos_derecha; j < DIM; j++)
        {
            printf(" %c ", espacio);
        }
        //Este bucle permite imprimir espacios a la ierecha de la piramide.
        
        contador_numeros_izquierda++; //Sirve este incremento para poder completar con vacios de manera crenciente fila a fila
        contador_simbolos_derecha--; //Exactamente lo mismo para completar con vacios la escalera izquierda
        printf("\n");
    }

}
