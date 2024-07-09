#include <stdio.h>

int main ()
{
	float numero1, numero2, numero3, media;
	
	printf("Calculadora de Media de 3 Numeros");
	
	printf("\n\nDigite o primeiro numero:\n");
	scanf("%f", &numero1);
	
	printf("\n\nDigite o segundo numero:\n");
	scanf("%f", &numero2);
	
	printf("\n\nDigite o terceiro numero:\n");
	scanf("%f", &numero3);
	
	media = (numero1 + numero2 + numero3) / 3;
	
	printf("\nResultado: %f", media);
	
	
	return 0;
}
