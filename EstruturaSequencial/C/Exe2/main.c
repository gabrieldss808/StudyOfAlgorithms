//2. Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    char Numero[20];

    printf("Digite um numero: ");
    scanf("%s",Numero);
    printf("O numero informado foi: %s \n",Numero);

    return 0;
}