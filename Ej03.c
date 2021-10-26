/*
Programa: Ej03_guia1.c
Descripción: El máximo común divisor de dos números enteros positivos es aquel número entero que divide a los dos números y es el mayor de todos. 
Escriba un algoritmo que calcule el máximo común divisor de dos números.
Exprese en lenguaje natural el invariante del bucle.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>

int main()
{
    int num1, num2, contador, maxComunDivisor;
    maxComunDivisor=1;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if(num1>0 && num2>0)
    {
        for(contador=1; contador<=num1; contador++)
        {
            if (num1%contador==0 && num2%contador==0 && contador>maxComunDivisor)
            {
                maxComunDivisor=contador;
            }
        }
    }
    printf("El maximo comun divisor de los numeros ingresados es: %d\n", maxComunDivisor);
    return 0;
}