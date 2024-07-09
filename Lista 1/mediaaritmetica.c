#include <stdio.h>

int main()
{
	printf("Calculadora de Media Aritmetica \n");
	
	float numero1, numero2, media;
	
	printf("\nDigite um numero: \n");
	scanf("%f", &numero1);
	
	printf("\nDigite outro numero: \n");
	scanf("%f", &numero2);
	
	media = (numero1 + numero2) / 2;
	
	printf("\nValor da Media final = %f", media);
	
	return 0;
}

