#include <stdio.h>

int main() 
{
	float numerador, denominador, divisao;
	
	printf("Digite o numerador: ");
	scanf("%f", &numerador);
	
	printf("Digite o denominador: ");
	scanf("%f", &denominador);
	
	divisao = numerador / denominador;
	
	if (denominador != 0)
	{
		printf("O resultado e %.2f", divisao);
	}
	else
	{
		printf("Nao existe divisao por zero");
	}
	
	return 0;
}
