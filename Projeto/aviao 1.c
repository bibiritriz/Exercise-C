#include <stdio.h>

int main ()
{
	float peso_aviao, comprimento_pista, velocidade_vento, altitude_aeroporto, calculo, comprimento_adicional;
	int peso_max=150000, peso_min=53000, comprimento_min=1500, velocidade_max=30, velocidade_min=15;
	
	//coletando informacoes
	printf("1. Informe o peso do aviao em quilogramas:");
	scanf("%f", &peso_aviao);
	
	printf("2. Informe o comprimento da pista em metros:");
	scanf("%f", &comprimento_pista);
	
	printf("3. Informe a velocidade do vento em quilometros p/ hora:");
	scanf("%f", &velocidade_vento);
	
	printf("4. Informe a altitude do aeroporto:");
	scanf("%f", &altitude_aeroporto);

	//avaliando se o aviao pode ou nao decolar de acordo com o peso, comprimento, velocidade e altitude do aeroporto
	if (peso_aviao < peso_min)
	{
		printf("\n1. O aviao nao pode decolar pois o peso dele e menor que %ikg", peso_min);
    }
    else
    {
		if (peso_aviao > peso_max)
		{
			printf("1. O aviao nao decolar pois o peso ultrapassa a %ikg", peso_max);
		}
		else 
		{
			if (peso_aviao <= 100000)
			{
				printf("\n 1. O aviao atende as condicoes de peso para um voo seguro");
			
				if (comprimento_pista < comprimento_min)
				{
					printf("\nO aviao nao pode decolar pois o comprimento da pista e menor que %im", comprimento_min);		
				}
				else
				{
					if (comprimento_pista >= comprimento_min)
					{
						printf("\n 2. O aviao atende as condicoes de comprimento de pista para um voo seguro");
						
						if (velocidade_vento >= velocidade_max)
						{
							printf("\n 3. O aviao atende as condicoes de velocidade para um voo seguro");
							
							if (velocidade_vento > velocidade_min)
							{
								if (velocidade_vento <= velocidade_max)
								{
									printf("\n 3. O aviao atende as condicoes de velocidade do vento para um voo seguro");
							
									if (altitude_aeroporto <= 1000)
									{
										printf("\n 4. O aviao pode decolar para um tamanho de pista minimo de %im", comprimento_min);
									}
									else
									{
										comprimento_adicional = (altitude_aeroporto - 1000) + comprimento_pista;
										
										printf("\n 4. O aviao podera decolar se o aeroporto possuir %.2fm de pista", comprimento_adicional);
									}
								}
								else
								{
									printf("\n3. O aviao nao pode decolar devido a alta velocidade do vento");
								}
							}
							else
							{
								printf("\n3. O aviao nao pode decolar devido a baixa velocidade do vento");
							}
						}
						else
						{
							printf("\n3. O aviao nao pode decolar devido a baixa velocidade do vento");
						}
					}
					else
					{
						printf("\n2. O aviao nao pode decolar devido ao comprimento insuficiente da pista 1");
					}
				}
			}
			else
			{
				if (peso_aviao > 100000)
				{
					printf("\n 1. O aviao atende as condicoes de peso para um voo seguro");
					
					if (comprimento_pista >= 2000)
					{
						printf("\n 2. O aviao atende as condicoes de comprimento de pista para um voo seguro");
						
						if (velocidade_vento >= velocidade_min)
						{
							if (velocidade_vento <= velocidade_max)
							{
								printf("\n 3. O aviao atende as condicoes de velocidade do vento para um voo seguro");
							
								if (altitude_aeroporto <= 1000)
								{
									printf("\n 4. O aviao pode decolar para um tamanho de pista minimo de %im", comprimento_min);
								}
								else
								{
									comprimento_adicional = (altitude_aeroporto - 1000) + comprimento_pista;
									
									printf("\n 4. O aviao podera decolar se o aeroporto possuir %.2fm de pista", comprimento_adicional);
								}
							}
							else
							{
								printf("\n3. O aviao nao pode decolar devido a alta velocidade do vento");
							}
						}
						else
						{
							printf("\n3. O aviao nao pode decolar devido a baixa velocidade do vento");
						}
					}
					else
					{
						printf("\n2. O aviao nao pode decolar devido ao comprimento insuficiente da pista 2");
					}
				}
			}
		}
	}

/*
                 Massa de testes
Peso Avião   Pista    Vento   Altitude   Decola (S/N)
    5          5        0         0             N
    23445      0        0         0             N
	150000     5        0         0             N
	5          0        0         0             N
	100000     1400     0         0             N
	100000     1500     0         0             S
	100000     2000     0         0             S
	150000     2500     0         0             S
	100000     333333   0         0             S
	100000     1500     30       1000           S
	100000     1000     30       1000           N
	100000     1500     1         1             N
	100000     1500     15        0             N
	140000     2000     15        0             S
	160000     2000     15        0             N
	150000     1500     30      1345678         S	
	100000     1500     30       1001           S	
*/
	
	
	return 0;
}
