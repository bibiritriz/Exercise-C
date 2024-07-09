#include <stdio.h>

int main()
{
	int i, numero, tabuada;
	
	printf("Digite um numero:");
	scanf("%d", &numero);
	
	for(i = 0 ; i <= 10; i ++)
	{
		tabuada = numero * i;
			
		printf("\nA tabuada %d * %i = %d", numero, i, tabuada);
	}
	
	return 0;
}
