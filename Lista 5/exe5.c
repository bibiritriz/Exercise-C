#include <stdio.h>

int main()
{
 	float numero, media;
	int i = 0;
  
	for(i = 1 ; i <= 10; i ++)
	{
		printf("Digite um numero:");
		scanf("%.2f", &numero);
		
		media = media + numero;
	}
		
	media = media / 10;
	
	printf ("A media final dos 10 numeros e: %.2f", media);
	
	return 0;
}
