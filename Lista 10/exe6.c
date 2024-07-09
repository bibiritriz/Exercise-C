#include <stdio.h>
#include <locale.h>
#define TAM 3

int main() {
    setlocale(LC_ALL,"");
    int matriz[TAM][TAM];
    int lin, col;

    for(col=0; col<TAM; col++){
        for(lin=0; lin<TAM; lin++){
            printf("Matriz[%i][%i]: ", lin, col);
            scanf("%i", &matriz[lin][col]);
        }
    }
    printf("\n");

    for(lin=0; lin<TAM; lin++){
        for(col=0; col<TAM; col++){
            printf("Matriz[%i][%i] = %i\t", lin, col, matriz[lin][col]);
        }
        printf("\n");
    }
    printf("\n");

    for(col=0; col<TAM; col++){
        for(lin=0; lin<TAM; lin++){
            printf("Matriz Transposta[%i][%i] = %i\t", lin, col, matriz[lin][col]);
        }
        printf("\n");
    }

    return 0;
}
