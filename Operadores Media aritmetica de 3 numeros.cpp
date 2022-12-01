#include <iostream>
#include <stdio.h>
#include <math.h>


int main() {
    int primer, segundo, tercero, media;

    printf("Digite el primer numero: \n");
    scanf(" %i", &primer);
    printf("Digite el segundo numero: \n");
    scanf("%i", &segundo);
    printf("Digite el tercero numero: \n");
    scanf("%i", &tercero);

    media = (primer+segundo+tercero)/3;

    printf("La media aritmetica de los 3 numeros es: %i", media);

    return 0;
}
