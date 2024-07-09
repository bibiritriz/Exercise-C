#include <stdio.h>

int main() 
{
	float peso, altura, IMC;
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	IMC = peso / (altura * altura);
	
	if (IMC < 18.5)
	{
		printf("Seu IMC e %.1f considerado abaixo do peso", IMC);
	}
		else if (IMC >= 18.5 && IMC < 25.0)
		{
			printf("Seu IMC e %.1f considerado peso ideal", IMC);
		}
			else if (IMC >= 25.0 && IMC < 30.0)
			{
				printf("Seu IMC e %.1f considerado sobrepeso", IMC);
			}
				else if (IMC >= 30.0 && IMC < 35.0)
				{
					printf("Seu IMC e %.1f considerado obesidade Grau I", IMC);
				}
					else if (IMC >= 35.0 && IMC < 40.0)
					{
						printf("Seu IMC e %.1f considerado obesidade Grau II", IMC);
					}
						else
						{
							printf("Seu IMC e %.1f considerado Obesidade Grau III", IMC);
						}
	
	return 0;
}
