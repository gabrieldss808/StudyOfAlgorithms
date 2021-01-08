//5. Faça um Programa que converta metros para centímetros.

#include  <stdlib.h>
#include  <stdio.h>

int main()
{
    float metros,centimetros;

    printf("Digite os metros para serem convertidos em centimetros: ");
    scanf("%f",&metros);

    centimetros = metros*100;

    printf("%.2f Metros e igual a %.2f Centimetros",metros,centimetros);

    return 0;
}