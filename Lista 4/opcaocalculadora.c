#include <stdio.h>

int main()
{
	float num1, num2, num3, resultado1, resultado2;
	
	//recebendo 2 valores
	printf("Digite valor:");
	scanf("%f", &num1);
	
	printf("Digite outro valor:");
	scanf("%f", &num2);
	
	//recebendo a opcao
	printf("\nDigite a Opcao para a Operacao:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\nResposta:");
	scanf("%f", &num3);

	//calculando de acordo com a opção escolhida
	if(num3 == 1)
	{
		resultado1 = num1 + num2;
		printf("\nResultado da Operacao: %.2f", resultado1);
	}
		else if(num3 == 2)
		{
			resultado1 = num1 - num2;
			resultado2 = num2 - num1;
			printf("\nResultado da Operacao 1: %.2f\nResultado da Operacao 2: %.2f", resultado1, resultado2);
		}
			else if(num3 == 3)
			{
				resultado1 = num1 * num2;
				printf("\nResultado da Operacao: %.2f", resultado1);
			}
				else
				{
					resultado1 = num1 / num2;
					resultado2 = num2 / num1;
					printf("\nResultado da Operacao 1: %.2f \nResultado a Operação 2: %.2f", resultado1, resultado2);
				}
				
	return 0;
}
