/*
Programa: Ej09_guia1.c
Descripción: Escriba un programa C que presente en pantalla todas las potencias enteras de 2 que sean menores o iguales que 100. 
Exprese el invariante del bucle formalmente.
Autor: Gustavo Barrajón
Modificó:
*/

int main()
{
    int pares, suma=0;
    printf("Serie de numeros pares:\n");
    for(pares=20; pares<=100; pares=pares+2)
    {
        printf("%d - ", pares);
        suma=suma+pares;
    }
    printf("\nEl total de la suma de los numeros de la serie es: %d", suma);
    return 0;
}