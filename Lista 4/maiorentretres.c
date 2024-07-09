#include <stdio.h>

int main()
{
	float num1, num2, num3;
	
	printf("Digite um numero: ");
	scanf("%f", &num1);
	
	printf("Digite outro numero: ");
	scanf("%f", &num2);
	
	printf("Digite mais um numero: ");
	scanf("%f", &num3);
	
	
	if (num1 > num2 && num1 > num3)
	{
		printf("%.1f e o maior numero entre eles", num1);
	}
	else if (num2 > num1 && num2 > num3)
	{
		printf("%.1f e o maior numero entre eles", num2);
	}
	else 
	{
		printf("%.1f e o maior numero entres eles", num3);
	}
	
	
	return 0;
}
