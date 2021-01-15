//15 . Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
// salário bruto.
// quanto pagou ao INSS.
// quanto pagou ao sindicato.
// o salário líquido.
// calcule os descontos e o salário líquido, conforme a tabela abaixo:
// + Salário Bruto : R$
// - IR (11%) : R$
// - INSS (8%) : R$
// - Sindicato ( 5%) : R$
// = Salário Liquido : R$
// Obs.: Salário Bruto - Descontos = Salário Líquido.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main()
{
    double valorPorHora, horasTrabalhadasMes,salarioBruto,salarioLiquido,valIR,valINSS,valSindicato;

    printf("Quanto você ganha por hora? ");
    scanf("%lf", &valorPorHora);

    printf("Quantas horas trabalhadou no mês? ");
    scanf("%lf", &horasTrabalhadasMes);

    salarioBruto = valorPorHora * horasTrabalhadasMes;
    valIR = salarioBruto * 0.11;
    valINSS = salarioBruto * 0.08;
    valSindicato = salarioBruto * 0.05;
    salarioLiquido = salarioBruto - valIR - valINSS - valSindicato;

    printf("Salario Bruto : R$ %.2lf \n- IR (11%%) : R$ %.2lf\n- INSS (8%%) : R$ %.2lf\n- Sindicato ( 5%%) : R$ %.2lf\n= Salário Liquido : R$ %.2lf",salarioBruto,valIR,valINSS,valSindicato,salarioLiquido);

}