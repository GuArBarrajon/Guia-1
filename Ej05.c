/*
Programa: Ej05_guia1.c
Descripción: Diseñar un algoritmo que lea e imprima una serie de números distintos de cero. 
El algoritmo debe terminar con un valor cero que no se debe imprimir. 
Visualizar el número de valores leídos.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>

int main()
{
    int numero;
    do
    {
        printf("Ingrese un numero o marque 0 para terminar: ");
        scanf("%d", &numero);
        if (numero!=0)
        printf("Usted ingreso el %d\n", numero);
    }while (numero!=0);
    return 0;
}
