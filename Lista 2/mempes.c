#include <stdio.h>

int main ()
{
	float metros, pes;
	
	printf("Conversor de Metros em Pes");
	
	printf("\n\nInsira  a Distancia em Metros:\n");
	scanf("%f", &metros);

	pes = metros * 3.28084;
	
	printf("\nResultado: %.3f", pes);
	
	return 0;
}
