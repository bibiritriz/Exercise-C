#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero = 0, opcao = 0, maior = 0, quantidade = 0;
    float media, soma = 0;

    maior = numero;

    do{
        printf("Digite um número:");
        scanf("%d", &numero);

        printf("\tDeseja continuar informando números?\n\tDigite 1 para sim e 2 para não:");
        scanf("%d", &opcao);

        if(numero > maior){
            maior = numero;
        }

        quantidade += 1;
        soma += numero;

    }while(opcao != 2);

    media = soma / quantidade;

    printf("O maior número entre eles é %i e média deles é %.2f", maior, media);

    return 0;
}