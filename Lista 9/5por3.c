#include <stdio.h>

int main(){
    int b, i, a[5][3], maior;

    for(b = 0; b < 5; b++){
        for(i = 0; i < 3; i++){
            scanf("%i", &a[b][i]);

            if(i == 0 && b ==0){
                maior = a[b][i];
            }else if(a[b][i] > maior){
                maior = a[b][i];
            }
        }
    }

    printf("Maior: %i", maior);






    return 0;
}
