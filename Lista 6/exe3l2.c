#include <stdio.h>

int main() 
{
    int i, j, tamanho;
    
    printf("Digite o tamanho do quadrado (1 a 10): ");
    scanf("%d", &tamanho);

    for (j = 0; j <= tamanho * 2 - 1; j++) 
	{
        printf("x");
    }
    printf("\n");
	
    for (i = 0; i <= tamanho * 2 - 3; i++) 
	{
        printf("x");
        
        for (j = 0; j < tamanho * 2 - 2; j++) 
		{
            printf(" ");
        }
        printf("x\n");
	}
        
    for (j = 0; j <= tamanho * 2 - 1; j++) 
	{
        printf("x");
    }
    
    return 0;
}
