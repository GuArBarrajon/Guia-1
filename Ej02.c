/*
Programa: Ej02_guia1.c
Descripción: Escriba el pseudocódigo de un algoritmo que lea la base y la altura de un triángulo y calcule su área.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>

int main()
{
    int base, altura, area;
    
    printf("Ingrese la base del triangulo: ");
    scanf("%d", &base);
    printf("Ingrese la altura del triangulo: ");
    scanf("%d", &altura);
    area=(base*altura)/2;
    printf("El area del triangulo es: %d\n", area);
    return 0;
}