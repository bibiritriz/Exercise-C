#include <stdio.h>

int main(){
    int b, i, a[3][3], t[3][3];

    for(b = 0; b < 3; b++){
        for(i = 0; i < 3; i++){
            scanf("%i", &a[i][b]);

            t[i][b] = a[i][b] * 2;
        }
    }
    printf("\n");

    for(b = 0; b < 3; b++){
        for(i = 0; i < 3; i++){
            printf("\tT[%i][%i] = %i", i, b, t[i][b]);
        }
        printf("\n");
    }












    return 0;
}
