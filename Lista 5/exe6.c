#include <stdio.h>

int main()
{
 	float numero;
	int i = 0, positivo = 0, negativo = 0;
  
	for(i = 1; i <= 10; i ++)
	{
		printf("Digite um numero:");
		scanf("%f", &numero);
		
		if(numero > 0)
		{
			positivo = positivo + 1;
		}
		else if (numero < 0)
		{
			negativo = negativo + 1;
		}
	}
	
	printf("Sao %i numeros sao positivos e %i negativos", positivo, negativo);
	
	return 0;
}
