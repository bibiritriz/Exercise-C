#include <stdio.h>

int main()
{
	float numero;
	
	printf("Insira um numero:\n");
	scanf("%f", &numero);
	
	if (numero >= 0)
	{
		printf("O %.1f e positivo", numero);
	}
	else
	{
		printf("O %.1f e negativo", numero);
	}
	
	return 0;
}
