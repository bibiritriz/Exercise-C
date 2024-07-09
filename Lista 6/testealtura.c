#include <stdio.h>


int main() {
	
	int i, j, altura;

    printf("Digite a altura: ");
    scanf("%i", &altura);
    
    if (altura < 1 || altura > 20) 
	{
		printf("Altura fora do intervalo válido.\n");
       	
		return 0;
    }
    
    for (i = 1; i <= altura; i++)
	{
    	for(j = 1; j <= altura - i; j++)
		{
    		printf(" ");
		}
		
		for(j = 1; j <= i * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(i = 1; i <= altura; i++)
	{	
		for(j = 1; j <= altura - 1; j++){
			printf(" ");
		}
		printf("*\n");
	}
}
