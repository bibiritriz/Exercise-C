#include <stdio.h>

int main()
{
	float salariobruto, salarioliquido;
	
	printf("Digite seu Salario Bruto:\n");
	scanf("%f", &salariobruto);
	
	salarioliquido = 0.37 * salariobruto;
	
	printf("\nSeu salario liquido: %f", salarioliquido);
	
	return 0;
}

