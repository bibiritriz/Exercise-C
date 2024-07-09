#include <stdio.h>
#define TAM 10
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int numeros[TAM], i, opcao = 0, controle = 0;

    for(i = 0; i < TAM; i++){
        printf("Digite o %i numero: ", i+1);
        scanf("%i", &numeros[i]);
    }

    do{
        printf("Digite o numero a ser verificado: ");
        scanf("%i", &opcao);

        for(i = 0; i < TAM; i++){
            if(numeros[i] == opcao){
                controle++;
            }
        }
    }while(controle == 0);


    printf("O numero %i foi encontrado %i vezes no vetor", opcao, controle);

    return 0;
}
