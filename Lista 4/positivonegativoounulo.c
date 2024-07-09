#include <stdio.h>

int main() 
{
	float numero;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	if (numero == 0)
	{
		printf("O valor informado e nulo");
	}
	else
	{
		if (numero > 0)
		{
			printf("O valor informado e positivo");
		}
		else
		{
			printf("O valor informado e negativo");
		}
	}
	
	return 0;
}
