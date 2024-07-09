#include <stdio.h>
/*
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.

Exemplo de Entrada
576

Exemplo de Saída
576
5 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
1 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
1 nota(s) de R$ 5,00
0 nota(s) de R$ 2,00
1 nota(s) de R$ 1,00*/

int main()
{
  int N, nota_100 = 0, nota_50 = 0, nota_20 = 0, nota_10 = 0, nota_5 = 0, nota_2 = 0, nota_1 = 0;

  scanf("%i", &N);
  printf("%i\n", N);

  while(N != 0)
  {
    if (N >= 100)
    {
      N = N - 100;
      nota_100++;
    }
    else if (N >= 50 && N < 100)
    {
      N = N - 50;
      nota_50++;
    }
    else if (N >= 20 && N < 50)
    {
      N = N - 20;
      nota_20++;
    }
    else if (N >= 10 && N < 20)
    {
      N = N - 10;
      nota_10++;
    }
    else if (N >= 5 && N < 10)
    {
      N = N - 5;
      nota_5++;
    }
    else if (N >= 2 && N < 5)
    {
      N = N - 2;
      nota_2++;
    }
    else if (N >= 1 && N < 2)
    {
      N = N - 1;
      nota_1++;
    }
  }

  printf("%i nota(s) de R$ 100,00\n%i nota(s) de R$ 50,00\n%i nota(s) de R$ 20,00\n%i nota(s) de R$ 10,00\n%i nota(s) de R$ 5,00\n%i nota(s) de R$ 2,00\n%i nota(s) de R$ 1,00\n", nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, nota_1);

  return 0;
}