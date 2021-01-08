//4. Faça um Programa que peça as 4 notas bimestrais e mostre a média.
#include <stdlib.h>
#include <stdio.h>

int main()
{
    
    int nota1,nota2,nota3,nota4,media;
    
    printf("Digite a nota 1: ");
    scanf("%i",&nota1);
    printf("Digite a nota 2: ");
    scanf("%i",&nota2);
    printf("Digite a nota 3: ");
    scanf("%i",&nota3);
    printf("Digite a nota 4: ");
    scanf("%i",&nota4);

    media = (nota1+nota2+nota3+nota4) / 4;

    printf("A Media das notas é: %i",media);
    
    return 0;
}