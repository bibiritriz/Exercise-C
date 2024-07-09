#include <stdio.h>

int main() 
{
	float num1, num2;
	
	printf("Informe um numero: ");
	scanf("%f", &num1);
	
	printf("Informe outro numero: ");
	scanf("%f", &num2);
	
	if (num1 > num2)
	{
		printf("O maior numero entre os dois e %.1f", num1);
	}
	else
	{
		printf("O maior numero entre os dois e %.1f", num2);
	}
	
	return 0;
}
