#include <stdio.h>

int main()
{
	printf("Notas na Disciplina de Algoritmo e Programacao\n");
	
	float notapratica, notateorica, notafinal;
	
	printf("\n\nDigite sua Nota na Prova Teorica:\n");
	scanf("%f", &notateorica);
	
	printf("\n\nDigite sua Nota na Prova Pratica:\n");
	scanf("%f", &notapratica);
	
	notafinal = (notapratica * 0.40 ) + (notateorica * 0.60 ) / (0.40 + 0.60);
	
	printf("\nNota final: %f", notafinal);

	
	
	return 0;
}

