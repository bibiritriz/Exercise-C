#include <stdio.h>

int main(){
	
	int i;
	float numero, maior=1, menor=1;
	
	
	for (i = 0;i < 10; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%f", &numero);
		
		if(numero>maior)
		{
			maior = numero;
		}
		else if(numero<menor)
		{
			menor = numero;
		}
	}
	
	printf("\nO menor numero e: %.2f", menor);
	printf("\nO maior numero e: %.2f", maior);
	
	return 0;
}
