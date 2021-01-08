//7. Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    double lado, dobroDaArea;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o tamanho de um dos lados do quadrado: ");
    scanf("%lf",&lado);

    dobroDaArea = (lado * lado) * 2;

    printf("O Dobro da area do quadrado e: %.2lf",dobroDaArea);
}