#include <stdio.h>
#define TAM 10
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int numeros[TAM], i;

    for(i = 0; i < TAM; i++){
        printf("Digite os numeros: ");
        scanf("%i", &numeros[i]);
    }

    for(i = 0; i < TAM; i++){
        printf("%i\n", numeros[i]);
    }


    return 0;
}
