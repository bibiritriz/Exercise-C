#include <stdio.h>

int main() 
{
	float prova1, prova2, media;
	
	printf("Informe a nota da primeira prova: ");
	scanf("%f", &prova1);
	
	printf("Informe a nota da segunda prova: ");
	scanf("%f", &prova2);
	
	media = (prova1 + prova2) / 2;
	
	printf("A media do aluno(a) foi %.1f", media);
	
	if (media >= 5)
	{
		printf(" logo ele(a) foi Aprovado(a)");
	}
	else
	{
		printf(" logo ele(a) foi Reprovado(a)");
	}
	
	return 0;
}
