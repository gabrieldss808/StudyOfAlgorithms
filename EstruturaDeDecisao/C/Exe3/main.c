//3. Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char sexo[50];
    int comparison;

    printf("Digite uma letra correspondente ao sexo: ");
    scanf("%s",sexo);

    comparison = strcmp(sexo,"F");

    if(comparison == 0)
    {
        printf("Feminino\n");

        return 0;
    }
    
    comparison = strcmp(sexo,"M");

    if(comparison == 0)
    {
        printf("Masculino\n");

        return 0;
    }
    else
    {
        printf("Sexo invalido\n");

        return 0;
    }
    

}