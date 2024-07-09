#include <stdio.h>

int main ()
{
	int meses, idade;
	
	printf("Conversor de Idade em Meses");
	
	printf("\n\nDigite sua Idade:\n");
	scanf("%i", &idade);
	
	meses = idade * 12;
	
	printf("\nVoce Viveu %i Meses", meses);
	
	
	return 0;
}
