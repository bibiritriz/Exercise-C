#include <stdio.h>

int main() 
{
	float minutos, taxa = 1.50, valor_conta;
	int  plano = 50;
	
	printf("Digite os minutos utilizados: ");
	scanf("%f", &minutos);
	
	if (minutos > 50)
	{
		valor_conta = (minutos - 50) * taxa + plano;
		
		printf("O valor da conta sera R$%.2f", valor_conta);
	}
	else
	{
		printf("O valor da conta sera R$%d", plano);
	}
	
	return 0;
}
