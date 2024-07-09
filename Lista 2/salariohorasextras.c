#include <stdio.h>

int main ()
{
	float horanormal, horaextra, taxa1, taxa2, salario;
	
	printf("Calculadora de Salario Total incluindo Horas Extras");
	
	printf("\n\nInsira o Numero de Horas Regulares:\n");
	scanf("%f", &horanormal);
	
	printf("\n\nInsira a Taxa de Horas Regulares:\n");
	scanf("%f", &taxa1);
	
	printf("\n\nInsira o Numero de Horas Extras:\n");
	scanf("%f", &horaextra);
	
	printf("\n\nInsira a Taxa de Horas Extras:\n");
	scanf("%f", &taxa2);
	
	salario =  (horanormal * taxa1) + (horaextra * taxa2);
	
	printf("\nO salario: %.3f", salario);
	
	return 0;
}
