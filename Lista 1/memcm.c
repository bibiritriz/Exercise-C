#include <stdio.h>

int main ()
{
	printf("Calculadora de Metros para Centimetros \n");
	
	float metros, centimetros;
	
	printf("\nInforme a quantidade em metros para conversao: \n");
	scanf("%f", &metros);
	
	centimetros = metros * 100;
	
	printf("\nValor em centimetros: %f", centimetros);
	
	return 0;
}
