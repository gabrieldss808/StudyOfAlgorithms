//18. Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main()
{
    int tamanhoArquivoMB,velocidadeLinkMBPS;
    double tempoDownload;

    printf("Qual e o tamanho do arquivo em Mb? ");
    scanf("%d", &tamanhoArquivoMB);

    printf("Qual e a velocidade do link em Mbps? ");
    scanf("%d", &velocidadeLinkMBPS);

    tempoDownload = floor((tamanhoArquivoMB / velocidadeLinkMBPS) / 60);

    printf("Vai demorar cerca de %.0lf minutos",tempoDownload);
}