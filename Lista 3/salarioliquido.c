#include <stdio.h>

int main() 
{
	float salario_bruto, salario_liquido, imposto_menor = 15, imposto_maior = 25;
	
	printf("Informe o salario bruto (sem descontos): ");
	scanf("%f", &salario_bruto);
	
	if (salario_bruto <= 2750)
	{
		salario_liquido = salario_bruto - (salario_bruto * imposto_menor / 100);
		
		printf("O salario liquido deu %.2f", salario_liquido);
	}
	else
	{
		salario_liquido = salario_bruto - (salario_bruto * imposto_maior / 100);
		
		printf("O salario liquido deu %.2f", salario_liquido);
	}
	
	return 0;
}
