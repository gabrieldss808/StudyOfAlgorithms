//1. Faça um Programa que peça dois números e imprima o maior deles.

#include <stdlib.h>
#include <stdio.h>

int main()
{
    double numero1,numero2;

    printf("Digite um numero: ");
    scanf("%lf",&numero1);

    printf("Digite outro numero: ");
    scanf("%lf",&numero2);

    if(numero1 > numero2)
    {
        printf("O Numero %lf é o maior\n",numero1);
    }
    else if(numero1 < numero2)
    {
        printf("O Numero %lf é o maior\n",numero2);
    }
    else
    {
        printf("São Iguais\n");
    }
    
    return 0;
}