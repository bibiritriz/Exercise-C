#include <stdio.h>

int main()
{
	printf("Calcular Perimetro de uma Circuferencia:\n");
	
	float circunferencia, raio;
	
	printf("\nDigite o raio:\n");
	scanf("%f", &raio);
	
	circunferencia = 2 * 3.14 * raio;
	
	printf("\nResultado: %f", circunferencia);
	
	return 0;
}

