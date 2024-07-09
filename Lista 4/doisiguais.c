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
	
	
	if (num1 == num2)
	{
		printf("%.1f e %.1f sao os numeros repetidos entre eles", num1, num2);
	}
	else if (num1 == num3)
	{
		printf("%.1f e %.1f sao os numeros repetidos entre eles", num1, num3);
	}
	else if (num2 == num3)
	{
		printf("%.1f e %.1f sao os numeros repetidos entre eles", num2, num3);
	}
	else
	{
		printf("Nao existe numeros repetidos entre eles", num2, num3);
	}
	
	return 0;
}
