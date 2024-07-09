#include <stdio.h>

int main(){
    int b, i, a[4][4], maior, menor, posicao, posicao2;

    for(b = 0; b < 4; b++){
        for(i = 0; i < 4; i++){
            scanf("%i", &a[i][b]);

            if(i == 0 && b ==0){
                maior = a[i][b];
                posicao = i;
            }else if(a[i][b] > maior){
                maior = a[i][b];
                posicao = i;
            }
        }
    }
    printf("\n");

    for(i = 0; i < 4; i++){
        for(b = 0; b < 4; b++){
            printf("A[%i][%i] = %i\t", i, b, a[i][b]);
        }
        printf("\n");
    }

    for(b = 0; b < 4; b++){
        if(b == 0){
            menor = a[posicao][b];
            posicao2 = b;
        }else if(a[posicao][b] < menor){
            menor = a[posicao][b];
            posicao2 = b;
            printf("%i", posicao2);
        }
    }
    printf("\n");
    printf("\nMinimax: %i\nPosicao: A[%i][%i]\n", menor, posicao, posicao2);


    return 0;
}
