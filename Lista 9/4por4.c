#include <stdio.h>

int main(){
    int b, i, a[4][4];

    for(b = 0; b < 4; b++){
        for(i = 0; i < 4; i++){
            scanf("%i", &a[i][b]);
        }
    }

    for(b = 0; b < 4; b++){
        for(i = 0; i < 4; i++){
            if(i  == b){
                printf("\n%i ", a[i][b]);
            }
        }
    }

    return 0;
}
