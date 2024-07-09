#include <stdio.h>

int main ()
{
	float km, milhas;
	
	printf("Conversor de Quilometros em Milhas");
	
	printf("\n\nInsira  a Distancia em Quilometros:\n");
	scanf("%f", &km);

	
	milhas = km * 0.621371;
	
	printf("\nResultado: %.2f", milhas);
	
	return 0;
}
