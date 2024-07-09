#include <stdio.h>

int main()
{
	int i, numero, dobro;
	
	for(i = 1 ; i <= 10; i ++)
	{
		printf("\nDigite um numero:");
		scanf("%i", &numero);
		
		dobro = numero * 2;
		
		printf("O dobro do numero e: %i", dobro);
	}
	
	return 0;
}
