#include <stdio.h>

int main()
{
	float numero;
	int i;

	
	for(i = 1 ; i <= 10; i ++)
	{
		printf("\nDigite um numero:");
		scanf("%f", &numero);
		
		if(numero == 0)
		{
			printf("O numero %.2f e nulo", numero);
		}
		else
		{
			if(numero > 0)
			{
				printf("O numero %.2f e positivo", numero);
			}
			else 
			{
				printf("O numero e %.2f e negativo", numero);
			}
		}
	}
	
	return 0;
}
