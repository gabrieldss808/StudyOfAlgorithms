//8. Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
    double valorPorHora,horasPorMes,salarioTotal;

    setlocale(LC_ALL, "Portuguese");

    printf("Quanto você ganha por hora: ");
    scanf("%lf",&valorPorHora);
    printf("Quantas horas você trabalhou no Mês: ");
    scanf("%lf",&horasPorMes);

    salarioTotal = valorPorHora * horasPorMes;

    printf("Seu salario no mês é: %.2lf",salarioTotal);

}