#include<stdio.h>

int main ()

{
	int estudantes, disciplinas, i, j;
	float nota, media, soma = 0;
	
	printf("Insira o numero de estudantes: ");
	scanf("%i", &estudantes);
	
	for (i = 0; i < estudantes; i++)
	{
		printf("\nO estudante: %i\n", i + 1);
		printf("\nDigite a quantidade de disciplinas no 2 semestre: ");
		scanf("%i", &disciplinas);
		
		for (j = 1; j <= disciplinas; j++) 
		{
            printf("Digite a nota final da disciplina %d: ", j);
            scanf("%f", &nota);
            soma += nota;
        }
        
		media = soma / disciplinas;
        printf("Media do aluno %d: %.2f\n", i, media);
	}

	return 0;
}
