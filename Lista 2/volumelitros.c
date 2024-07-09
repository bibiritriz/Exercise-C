#include <stdio.h>

int main ()
{
	float volume, litros;
	
	printf("Conversor de Volume em Litros");
	
	printf("\n\nInsira  o Volume em Galoes:\n");
	scanf("%f", &volume);

	litros = volume * 3.78541;
	
	printf("\nResultado: %.3f", litros);
	
	return 0;
}
