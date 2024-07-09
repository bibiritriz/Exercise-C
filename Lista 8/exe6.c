#include <stdio.h>
#define TAM 12
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int numeros[TAM], i;

    for(i = 0; i < TAM; i++){
        printf("Digite os numeros da sequência: ");
        scanf("%i", &numeros[i]);
    }

    for(i = 0; i < TAM; i++){
        if(numeros[i] < 0){
            printf("%i\n", numeros[i]);
        }
    }


    return 0;
}
