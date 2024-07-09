#include <stdio.h>
#define TAM 10
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int numeros[TAM], i, soma = 0;

    for(i = 0; i < TAM; i++){
        do{
        printf("Digite o %i numero: ", i+1);
        scanf("%i", &numeros[i]);
        }while(numeros[i] < 0);
    }

    for(i = 0; i < TAM; i++){
        if(numeros[i] %2 != 0){
            soma+= numeros[i];
        }
    }

    printf("%i\n", soma);

    return 0;
}
