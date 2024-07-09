#include <stdio.h>

int main ()
{
	float salario_mensal, salario_anual;
	
	printf("Calculadora de Salario Anual");
	
	printf("\n\nInsira seu Salario Mensal:\n");
	scanf("%f", &salario_mensal);
	
	salario_anual = salario_mensal * 12;
	
	printf("\nSalario Anual: %.2f", salario_anual);
	
	return 0;
}
