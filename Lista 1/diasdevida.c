#include <stdio.h>

int main()
{
	printf("\nCalculadora de Dias de Vida!");
		
	int ano, dias;
	
	printf("\n\nDigite o ano do seu nascimento:\n");
	scanf("%i", &ano);
	
	dias = (2024 - ano) * 365;
	
	printf("\nDias de Vida = %i", dias);
	
	return 0;
}

