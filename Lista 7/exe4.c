#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float calculo, num, num2;
    int opcao;

    do{
        printf("Digite um número:");
        scanf("%f", &num);

        printf("Digite um segundo número:");
        scanf("%f", &num2);
        
        printf("\n1- Soma  \n2- Subtração \n3- Multiplicação \n4-Divisão \n5-Sair \nEscolha a operação:");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            calculo = num + num2;
            printf("O resultado é: %.2f", calculo);
            break;
        case 2:
            calculo = num - num2;
            printf("O resultado é: %.2f", calculo);
            break;
        case 3:
            calculo = num * num2;
            printf("O resultado é: %.2f", calculo);
        break;
         case 4:
            calculo = num / num2;
            printf("O resultado é: %.2f", calculo);
            break;
        case 5:
            return 1;
            break;
         }
    }while(opcao <= 0 || opcao > 5 || opcao == 5);
    
  return 0;
}