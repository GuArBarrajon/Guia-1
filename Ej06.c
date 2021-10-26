/*
Programa: Ej06_guia1.c
Descripción: Diseñar un algoritmo que imprima y sume la serie de números 3, 6, 9,..... 99.
Autor: Gustavo Barrajón
Modificó:
*/

int main()
{
    int serie, suma=0;
    printf("Serie:\n");
    for(serie=3; serie<=99; serie=serie+3)
    {
        printf("%d - ", serie);
        suma=suma+serie;
    }
    printf("\nEl total de la suma de los numeros de la serie es: %d", suma);
    return 0;
}