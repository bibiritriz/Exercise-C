#include <stdio.h>

int main()
{
	printf("Calculadora de Salario:");
	
	float taxanormal=10 , taxaextra=15, horasnormais, horasextras, salario;
	
	printf("\n\nDigite o total de horas normais trabalhadas: \n");
    scanf("%f", &horasnormais);
    
    printf("\n\nDigite o total de horas extras trabalhadas: \n");
    scanf("%f", &horasextras);
    
    salario = (horasnormais * taxanormal) + (horasextras * taxaextra);
    
    printf("Salario: %f", salario);
    
	return 0;
}

