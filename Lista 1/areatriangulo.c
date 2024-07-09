#include <stdio.h>

int main ()
{
	printf("Calculadora de Area de Triangulo \n");
	
	float base, altura, area;
	
	printf("\nDigite a Base do Triangulo: \n");
	scanf("%f", &base);
	
	printf("\nDigite a Altura do Triangulo: \n");
	scanf("%f", &altura);
	
	area = base * altura / 2;
	
	printf("\nValor da Area = %f", area);
	
	return 0;
}
