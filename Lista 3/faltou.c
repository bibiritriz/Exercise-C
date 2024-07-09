#include <stdio.h>

int main() 
{
	float prova1, prova2, media, faltou;
	
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
		faltou = 5 - media;
		
		printf(" logo ele(a) foi Reprovado(a) e faltou %.1f para ser Aprovado(a)", faltou);
	}
	
	return 0;
}
