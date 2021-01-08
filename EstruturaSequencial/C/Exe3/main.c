//3. Faça um Programa que peça dois números e imprima a soma.
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int Numero1,Numero2,Resultado;

    printf("Digite um numero: ");
    scanf("%i",&Numero1);
    printf("Digite um numero: ");
    scanf("%i",&Numero2);

    Resultado = Numero1 + Numero2;

    printf("A Soma dos numeros é: %i \n", Resultado);

    return 0;
}