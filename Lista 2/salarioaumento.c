#include <stdio.h>

int main ()
{
	float salario_atual, salario_total, porcentagem, aumento;
	
	printf("Calculadora de Salario depois do Aumento");
	
	printf("\n\nInsira seu Salario Atual:\n");
	scanf("%f", &salario_atual);
	
	printf("\nInsira seu Aumento de Salario em Porcentagem:\n");
	scanf("%f", &porcentagem);
	
	aumento = (salario_atual * porcentagem) / 100;
	salario_total = salario_atual;
	
	printf("\nSalario com Aumento: %.2f", salario_atual);
	
	return 0;
}
