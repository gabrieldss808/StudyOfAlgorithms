//4. Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char Letra[1];
    char Vogais[30] = {'a','A','e','E','i','I','o','O','u','U'};
    char LetraAux[1];
    int Resultado = 0;


    printf("Digite uma letra: ");
    scanf("%s",Letra);

    for(int i=0;i<=10;i++)
    {
        LetraAux[0] = Vogais[i];

        if( LetraAux[0] == Letra[0])
        {
            Resultado = 1;
            printf("é Uma Vogal\n");
        }
    }

    if(Resultado == 0)
    {
        printf("é Uma consoante!\n");
    }

    return 0;
}