#include <iostream>
#include <stdio.h>

/*Escreva um programa que leia as medidas de
base e altura de um tri�ngulo e calcule sua �rea. Use vari�veis que comportem n�meros reais, tanto
para os dados de entrada como para o resultado.
*/

int main() {
	float base, altura, resultado;
	
	printf("Insira o valor da base do triangulo: ");
	scanf("%f",&base);
	
	printf("Insira o valor da altura do triangulo: ");
	scanf("%f",&altura);
	
	resultado = (base * altura)/2; 
	
	printf("\n O valor da area do triangulo e %.1f", resultado);
	
	return 0;
}
