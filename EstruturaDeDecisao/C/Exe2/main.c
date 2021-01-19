//2. Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int valor;

    printf("Digite um numero: ");
    scanf("%d",&valor);

    if(valor >= 0)
    {
        printf("O valor é positivo\n");
    }
    else
    {
        printf("O Valor é negativo\n");
    }
    

    return 0;
}