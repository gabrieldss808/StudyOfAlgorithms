//9. Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius.
//C = 5 * ((F-32) / 9).

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
    double TemperatureInFahrenheit, TemperatureInCelsius;

    setlocale(LC_ALL,"Portuguese");

    printf("Digite a Temperatuda em Fahrenheit para ser convertida: ");
    scanf("%lf",&TemperatureInFahrenheit);

    TemperatureInCelsius = 5 * ((TemperatureInFahrenheit-32) / 9);

    printf("Em Celsius Fica: %.2lf",TemperatureInCelsius);


}