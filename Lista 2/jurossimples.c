#include <stdio.h>

int main ()
{
	float capital, juros_simples, anos, taxa, valor_total;
	
	printf("Insira o Valor Principal:\n");
	scanf("%f", &capital);
	
	printf("\nInsira a Taxa de Juros:\n");
	scanf("%f", &taxa);
	
	printf("\nInsira o Tempo em Anos:\n");
	scanf("%f", &anos);
	
	juros_simples = capital * (taxa / 100) * anos;
	valor_total = capital + juros_simples;
	
	
	printf("\nO valor Final com Juros: \n%.2f", valor_total);

    return 0;
}
