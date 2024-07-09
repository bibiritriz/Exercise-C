#include <stdio.h>

int main()
{
	float lado1, lado2, lado3;
	
	printf("Digite a primeira medida do seu triangulo: ");
	scanf("%f", &lado1);
	
	printf("Digite a outra medida: ");
	scanf("%f", &lado2);
	
	printf("Digite a ultima: ");
	scanf("%f", &lado3);
	
	if (lado1 == lado2 && lado1 == lado3)
	{
		printf("Baseado nas medidas passadas o triangulo e equilatero");
	}
	else if (lado1 == lado2 || lado1 == lado3 || lado3 == lado2)
	{
		printf("Baseado nas medidas passadas o triangulo e isosceles");
	}
	else 
	{
		printf("Baseado nas medidas passadas o triangulo e escaleno");
	}
	
	
	return 0;
}
