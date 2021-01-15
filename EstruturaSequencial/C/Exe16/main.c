//16. Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00. Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main()
{
    double metrosQuadrados,quantidadeLatas,precoTotal,litros;

    printf("Quantos metros quadrados a serem pintados? ");
    scanf("%lf", &metrosQuadrados);

    litros = metrosQuadrados / 3;

    quantidadeLatas = ceil(litros / 18);

    precoTotal = quantidadeLatas * 80; 

    printf("A quantidade de latas é: %.0lf e o preco total e: %.2lf",quantidadeLatas,precoTotal);
    
}