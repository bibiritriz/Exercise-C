#include <stdio.h>

int main()
{
	printf("Calcular a Velocidade Media do Veiculo:\n");
	
	float posicaoinicial, posicaofinal, tempoinicial, tempofinal, velocidademedia, variacaoposicao, variacaotempo;
	
	printf("\nDigite a posicao incial:\n");
	scanf("%f", &posicaoinicial);
	
	printf("\nDigite a posicao final:\n");
	scanf("%f", &posicaofinal);
	
	printf("\nDigite o tempo inicial:\n");
	scanf("%f", &tempoinicial);
	
	printf("\nDigite o tempo final:\n");
	scanf("%f", &tempofinal);
	
	variacaoposicao = posicaofinal - posicaoinicial;
	
	variacaotempo = tempofinal - tempoinicial;
	
	velocidademedia = variacaoposicao / variacaotempo;
	
	printf("\nResultado: %f", velocidademedia);
	
	return 0;
}

