/*
Programa: Ej07_guia1.c
Descripción: Diseñe un algoritmo que calcule la suma de los enteros 1, 2,....,30. 
Exprese el invariante del bucle mediante especificación informal y formal.
Autor: Gustavo Barrajón
Modificó:
*/

int main()
{
    int serie, suma=0;
    printf("Serie:\n");
    for(serie=1; serie<=30; serie++)
    {
        printf("%d - ", serie);
        suma=suma+serie;
    }
    printf("\nEl total de la suma de los numeros de la serie es: %d", suma);
    return 0;
}