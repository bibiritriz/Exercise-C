#include <stdio.h>
#define TAM 10
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int vetor[TAM], vetor2[TAM], i, controle = 0;

    for(i = 0; i < TAM; i++){
        printf("Digite o %i numero: ", i+1);
        scanf("%i", &vetor[i]);
    }

    for(i = 9; i >= 0; i--){
        vetor2[controle] = vetor[i];
        controle++;
    }

  for(i=0;i<10;i++){
   printf("\nVetor: %i || Vetor2: %i", vetor[i], vetor2[i]);
  }

    for(i = 0; i < TAM; i++){
        if(vetor[i] == vetor2[i]){
            printf("\nAs posições onde os números se repetem são %i;", i);
        }
    }

    return 0;
}
