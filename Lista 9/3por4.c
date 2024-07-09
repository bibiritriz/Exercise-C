#include <stdio.h>

int main(){
    int b, i, a[3][4], soma = 0;

    for(b = 0; b < 4; b++){
        for(i = 0; i < 3; i++){
            scanf("%i", &a[i][b]);
            soma += a[i][b];
        }
    }
    printf("\nSoma da Matriz: %i\n", soma);

    return 0;
}
