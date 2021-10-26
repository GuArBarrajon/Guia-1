/*
Programa: Ej01_guia1.c
Descripción: Escriba el pseudocódigo de un algoritmo para:
• Sumar dos números enteros.
• Restar dos números enteros.
• Multiplicar dos números enteros.
• Dividir dos números enteros.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>

int main()
{
    int num1, num2, suma, resta, multiplicacion, division;
    char operacion;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Indique la operacion que desea realizar (+, -, *, /) ");
    scanf(" %c", &operacion);

    if (operacion=='+')
    {
        suma=num1+num2;
        printf("La suma de los numeros ingresados es: %d\n", suma);
    }
    else
    {
        if (operacion=='-')
        {
            resta=num1-num2;
            printf("La diferencia de los numeros ingresados es: %d\n", resta);
        }
        else
        {
            if (operacion=='*')
            {
                multiplicacion=num1*num2;
                printf("El producto de los numeros ingresados es: %d\n", multiplicacion);
            }
            else
            {
                if (operacion=='/')
                {
                    division=num1/num2;
                    printf("La division de los numeros ingresados es: %d\n", division);
                }
                else
                {
                    printf("La operacion ingresada no es valida\n");
                }
            }
        }
    }
    return 0;
}