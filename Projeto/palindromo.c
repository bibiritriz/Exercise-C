#include <stdio.h>
#include <locale.h>
/* Criar um vetor de 10 posições de inteiros.
Receber um valor inteiro.
Armazenar o dígitos do valor recebido no vetor.
Exemplos:
   Valor inteiro digitado= 34635
   Vetor = [0,0,0,0,0,3,4,6,3,5]

   Valor inteiro digitado= 123
   Vetor = [0,0,0,0,0,0,0,1,2,3]


Usando os valores armazenados no vetor, considerando somente os dígitos válidos (desconsiderar zeros a esquerda), dizer se é  ou não um palíndromo.
Exemplo:

[0,0,0,0,0,0,0,0,0,1] = Sim
[0,0,0,0,1,2,3,3,2,1] = Sim
[0,0,0,0,1,1,1,1,1,1] = Sim
[0,0,0,0,2,1,2,2,1,2] = Sim
[0,0,0,0,1,5,3,3,5,1] = Sim

[0,0,0,0,1,2,3,4,5,6] = Não
[0,0,0,0,1,1,1,0,0,0] = Não
*/

int main()
{
  setlocale(LC_ALL, "");
  int v1[10];
  int i;
  int num, cont = 9, cont2 = 0;

  printf("Eh um palindromo ou nao?\n");

  for (i = 0; i < 10; i++)
  {
    v1[i] = 0;
  }

  do
  {
    printf("Digite a quantidade de valores inseridos [1 a 10]:\n");
    scanf("%i", &num);
  } while (num < 1 || num > 10);

  int v2[num];

  printf("Digite os valores inteiros: ");
  for (i = 0; i < num; i++)
  {
    scanf("%i", &v2[i]);
  }

  for (i = num - 1; i >= 0; i--)
  {
    v1[cont] = v2[i];
    cont--;
  }

  cont = 0;

  for (i = 9; i > 0; i--)
  {
    if (v1[i] != 0)
    {
      if (v1[i] == v2[cont])
      {
        cont2++;
        cont++;
      }
    }
  }

  printf("\n[");
  for (i = 0; i < 10; i++)
  {
    if (v1[i] != 0 && i != 9)
    {
      printf("%i,", v1[i]);
    }
    else if (i == 9 && cont2 == num)
    {
      printf("%i] = SIM\n", v1[i]);
    }
    else if (i == 9 && cont2 != num)
    {
      printf("%i] = NAO\n", v1[i]);
    }
    else
    {
      printf("%i,", v1[i]);
    }
  }

  return 0;
}