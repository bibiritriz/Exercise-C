#include <stdio.h>
#define TAM 8
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int numeros[TAM], i, opcao;

    for(i = 0; i < TAM; i++){
        printf("Digite os numeros da sequ�ncia: ");
        scanf("%i", &numeros[i]);
    }

    printf("Escolha a posi��o desejada: ");
    scanf("%i", &opcao);

    printf("%i\n", numeros[opcao]);


    return 0;
}
