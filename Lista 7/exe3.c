#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  float nota = 0, nota_2 = 0, media;

    while(nota <= 0 && nota <= 10){
        printf("Digite a nota do módulo 1:");
        scanf("%f", &nota);
    }

    while(nota_2 <= 0 && nota <= 10){
        printf("Digite a nota do módulo 2:");
        scanf("%f", &nota_2);
    }

    media = (nota + nota_2) / 2;

    printf("A média das notas é: %.1f", media);

  return 0;
}