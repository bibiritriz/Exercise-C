#include <stdio.h>
#define TAM 100
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int numeros[TAM], i, controle = 0;

    for(i = 0; i <= TAM; i++){
        if(i %2 == 0){
            numeros[controle] = i;
            controle++;
        }
    }

    for(i = 0; i < controle; i++){
        printf("%i\n", numeros[i]);
    }


    return 0;
}
