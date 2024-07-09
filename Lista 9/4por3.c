#include <stdio.h>

int main(){
    int b, i, a[4][3];

    for(b = 0; b < 3; b++){
        for(i = 0; i < 4; i++){
            printf("Digite A[%i][%i]: ", i, b);
            scanf("%i", &a[i][b]);
        }
    }
    printf("\n");

    for(i = 0; i < 4; i++){
        for(b = 0; b < 3; b++){
            printf("A[%i][%i] = %i\t", i, b, a[i][b]);
        }
        printf("\n");
    }

    return 0;
}
