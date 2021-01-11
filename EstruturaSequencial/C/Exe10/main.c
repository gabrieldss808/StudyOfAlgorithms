//10. Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){

    double TemperatureInFahrenheit, TemperatureInCelsius;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite a temperatura em graus Celsius para ser convertida: ");
    scanf("%lf",&TemperatureInCelsius);

    TemperatureInFahrenheit = (1.8 * TemperatureInCelsius) + 32;

    printf("O Resultado é: %.2lf", TemperatureInFahrenheit);

}