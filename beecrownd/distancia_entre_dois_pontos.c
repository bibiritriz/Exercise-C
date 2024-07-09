#include <stdio.h>
#include <math.h>

/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

Distancia =

Entrada
O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída
Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.

Exemplo de Entrada
1.0 7.0
5.0 9.0

Exemplo de Saída
4.4721
*/

int main()
{
  float x1, x2, y1, y2;
  double distancia;

  scanf("%f", &x1);
  scanf("%f", &y1);
  scanf("%f", &x2);
  scanf("%f", &y2);

  distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

  printf("%.4lf\n", distancia);

  return 0;
}