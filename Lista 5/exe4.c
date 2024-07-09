#include <stdio.h>

int main()
{
 	float mediat = 0, mediap = 0, mediaf = 0;
	int i = 0;
  
	for(i = 1 ; i <= 50; i ++)
	{
		printf("\nDigite sua media teorica na aula:");
		scanf("%f", &mediat);
	
		printf("\nDigite sua media pratica na aula:");
		scanf("%f", &mediap);
		
		mediaf = (mediat * 0.6) + (mediap * 0.4);
		
		if(mediaf >= 7 && mediaf <= 10)
		{
			printf("Sua media final foi igual a %.2f considerada boa", mediaf);
		}
		else
		{
			if(5 <= mediaf && mediaf < 7)
			{
				printf("Sua media final foi igual a %.2f considerada razoavel", mediaf);
			}
			else
			{
				printf("Sua media final foi igual a %.2f considerada ruim", mediaf);
			}
		}
	}
	
	return 0;
}
