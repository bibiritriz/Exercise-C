#include <stdio.h>

int main()
{
	float num1, num2, num3;
	
	//recebendo 3 valores
	printf("Digite valor:");
	scanf("%f", &num1);
	
	printf("Digite outro valor:");
	scanf("%f", &num2);
	
	printf("Digite mais um valor:");
	scanf("%f", &num3);
	
	//informando se entre o intervalo 
	if (num1 == num3 || num3 == num2)
	{
		printf("O numero %.2f esta na extremidade do intervalo", num3);
	}
		else if (num3 > num2 && num3 < num1)
		{
			printf("O numero %.2f esta dentro do intervalo", num3);
		}
			else if (num3 < num2 && num3 > num1)
			{
				printf("O numero %.2f esta dentro do intervalo", num3);
			}
				else
				{
					printf("O numero %.2f esta fora do intervalo", num3);
				}
				
	return 0;
}
