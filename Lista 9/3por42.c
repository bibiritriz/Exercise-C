#include <stdio.h>

int main(){
    int b, i, a[3][4], lin, soma;

    for(b = 0; b < 4; b++){
        for(i = 0; i < 3; i++){
            printf("Digite A[%i][%i]:  ", i, b);
            scanf("%i", &a[i][b]);
        }
    }

    printf("Digite a linha: ");
    scanf("%i", &lin);

    for(b = 0; b < 4; b++){
        for(i = 0; i < 3; i++){
            if(i == lin){
                soma += a[i][b];
            }
        }
    }
    printf("Soma dos elementos da linha %i: %i\n", lin, soma);


    return 0;
}
