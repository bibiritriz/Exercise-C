#include <stdio.h>

int main()
{
	int sexo;
	float altura, peso, peso_ideal_feminino, peso_ideal_masculino;
	
	//recebendo o sexo da pessoa
	printf("Selecione seu sexo: 1. Masculino 2. Feminino\n");
	scanf("%i", &sexo);
	
	//recebendo a altura
	printf("Informe sua altura:");
	scanf("%f", &altura);
	
	printf("Informe seu peso atual:");
	scanf("%f", &peso);
	
	//calculando peso ideal
	if (sexo == 1)
	{
		peso_ideal_masculino = (72.7 * altura) - 62;
		printf("Seu peso ideal e %.2f", peso_ideal_masculino);
	}
		else
		{
			peso_ideal_feminino = (62.1 * altura) - 48.7;
			printf("Seu peso ideal e %.2f", peso_ideal_feminino);
		}	
	
	//calculando se o peso atual está ideal, abaixo ou acima do ideal
	if (sexo == 1 && peso_ideal_masculino - (0.05 * peso_ideal_masculino) <= peso && peso <= peso_ideal_masculino + (0.05 * peso_ideal_masculino))
	{
		printf("\nSeu peso e %.2f considerado como Peso Ideal", peso);
	}
		else if (sexo == 1 && peso > peso_ideal_masculino + (0.05 * peso_ideal_masculino))
		{
			printf("\nSeu peso e %.2f considerado como Acima do Peso", peso);
		}
			else if (sexo == 1 && peso < peso_ideal_masculino - (0.05 * peso_ideal_masculino))
			{
				printf("\nSeu peso e %.2f considerado como Abaixo do Peso", peso);
			}
				else if (sexo == 2 && peso_ideal_feminino - (0.05 * peso_ideal_feminino) <= peso && peso <= peso_ideal_feminino + (0.05 * peso_ideal_feminino))
				{
					printf("\nSeu peso e %.2f considerado como Peso Ideal", peso);
				}
					else if (sexo == 2 && peso > peso_ideal_feminino + (0.05 * peso_ideal_feminino))
					{
						printf("\nSeu peso e %.2f considerado como Acima de peso", peso);
					}
						else
						{
							printf("\nSeu peso %.2f considerado como Abaixo do peso", peso);
						}
	
	return 0;
}
