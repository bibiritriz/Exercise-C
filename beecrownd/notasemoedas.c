#include <stdio.h>

/*Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.

Exemplo de Entrada	Exemplo de Saída
576.73

NOTAS:
5 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
1 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01*/

int main()
{
  double valor;
  int valor_2, nota, moeda;

  scanf("%lf", &valor);

  valor_2 = valor * 100;

  while (valor_2 != 0)
  {
    if (valor_2 >= 10000)
    {
      nota = valor_2 / 10000;
      valor_2 %= 10000;
    }
    else if (valor_2 >= 5000)
    {
      nota = valor_2 / 5000;
      valor_2 %= 5000;
    }
  }

  printf("NOTAS:\n");
  printf("%i nota(s) de R$ 100.00\n", nota);
  printf("%i nota(s) de R$ 50.00\n", nota);

  nota = valor_2 / 2000;
  printf("%i nota(s) de R$ 20.00\n", nota);
  valor_2 %= 2000;

  nota = valor_2 / 1000;
  printf("%i nota(s) de R$ 10.00\n", nota);
  valor_2 %= 1000;

  nota = valor_2 / 500;
  printf("%i nota(s) de R$ 5.00\n", nota);
  valor_2 %= 100;

  nota = valor_2 / 200;
  printf("%i nota(s) de R$ 2.00\n", nota);
  valor_2 %= 200;

  printf("MOEDAS:\n");
  moeda = valor_2 / 100;
  printf("%i nota(s) de R$ 1.00\n", moeda);
  valor_2 %= 100;

  moeda = valor_2 / 50;
  printf("%i nota(s) de R$ 0.50\n", moeda);
  valor_2 %= 50;

  moeda = valor_2 / 25;
  printf("%i nota(s) de R$ 0.25\n", moeda);
  valor_2 %= 25;

  moeda = valor_2 / 10;
  printf("%i nota(s) de R$ 0.10\n", moeda);
  valor_2 %= 10;

  moeda = valor_2 / 5;
  printf("%i nota(s) de R$ 0.05\n", moeda);
  valor_2 %= 5;

  moeda = valor_2 / 1;
  printf("%i nota(s) de R$ 0.01\n", moeda);
  valor_2 %= 1;

  return 0;
}