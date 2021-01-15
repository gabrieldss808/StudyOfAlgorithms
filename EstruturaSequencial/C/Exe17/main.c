//17. Faça um Programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00 ou em galões de 3,6 litros, que custam R$ 25,00.
// Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços em 3 situações:
// comprar apenas latas de 18 litros;
// comprar apenas galões de 3,6 litros;
//18 litros custam R$ 80,00 
//3,6 litros custam R$ 25,00
// misturar latas e galões, de forma que o desperdício de tinta seja menor. Acrescente 10% de folga e sempre arredonde os valores para cima, isto é, considere latas cheias.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main()
{
    double metrosQuadrados,quantidadeLatas18,quantidadeLatas3_6,quantidadeLatasMistas3_6,precoTotal18,precoTotal3_6,precoTotalMistas,litros;
    int quantidadeLatasMistas18;

    printf("Quantos metros quadrados a serem pintados? ");
    scanf("%lf", &metrosQuadrados);

    litros = metrosQuadrados / 6;

    //Latas de 18
    quantidadeLatas18 = ceil(litros / 18);
    precoTotal18 = quantidadeLatas18 * 80; 

    //Latas de 3,6
    quantidadeLatas3_6 = ceil(litros / 3.6);
    precoTotal3_6 = quantidadeLatas3_6 * 25; 

    //Para latas mistas
    quantidadeLatasMistas18 = litros / 18;
    quantidadeLatasMistas3_6 = ceil(((((litros / 18) - quantidadeLatasMistas18) * 18) / 3.6));
    precoTotalMistas = (quantidadeLatasMistas18 * 80) + (quantidadeLatasMistas3_6 * 25);

    printf("Se voce comprar apenas com latas de 18 fica assim:\n\tQuatidade Latas 18 lt: %lf\n\tValor a ser Pago: %lf \n\n",quantidadeLatas18,precoTotal18);

    printf("Se voce comprar apenas com latas de 3,6 fica assim:\n\tQuatidade Latas 3,6 lt: %lf\n\tValor a ser Pago: %lf \n\n",quantidadeLatas3_6,precoTotal3_6);

    printf("Se voce comprar misturado fica assim:\n\tQuatidade Latas 18 lt: %d\n\tQuatidade Latas 3,6 lt: %lf\n\tValor a ser Pago: %lf \n\n",quantidadeLatasMistas18,quantidadeLatasMistas3_6,precoTotalMistas);
    
}