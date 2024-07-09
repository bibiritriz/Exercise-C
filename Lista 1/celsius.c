#include <stdio.h>

int main ()
{

	printf("Temperatura em Fahrenheits para Celsius \n");
	
	int fahrenheit, celsius;
	
	printf("\nDigite a temperatura em Fahrenheits: \n");
	scanf("%i", &fahrenheit);
	
	celsius = (fahrenheit - 32) / 1.8;
	
	printf("\nValor em Celsius = %i", celsius);


    return 0;
}
