#include <stdio.h>

int main()
{
 	float numero, numero2, media;
	int i = 0;
	
	printf("Quantos numeros voce deseja informar:");
	scanf("%f", &numero);
  
	for(i = 1; i <= numero; i ++)
	{
		printf("Digite um numero:");
		scanf("%f", &numero2);
		
		if(numero2 > 0)
		{
			media = media + numero2;
		}
	}
	
	media = media / numero;
	
	printf("A media desses numeros e igual %.2f", media);
	
	return 0;
}
