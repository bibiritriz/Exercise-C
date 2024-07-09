#include <stdio.h>

/*Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.

Exemplo de Entrada
556

Exemplo de Saída
0:9:16*/

int main()
{
  int seg, horas, min;

  scanf("%i", &seg);

  min = seg / 60;
  seg = seg % 60;
  horas = min / 60;
  min = min % 60;

  printf("%i:%i:%i\n", horas, min, seg);

  return 0;
}