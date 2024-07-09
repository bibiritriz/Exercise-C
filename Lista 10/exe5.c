#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    float matriz[4][5];
    int lin, col, validação=0;
    float num;

    printf("Digite os 20 valores da matriz: ");

    for(col=0; col<5; col++){
        for(lin=0; lin<4; lin++){
            scanf("%f", &matriz[lin][col]);
        }
    }

    for(col=0; col<5; col++){
        for(lin=0; lin<4; lin++){
            printf("Matriz[%i][%i] = %.2f\t", lin, col, matriz[lin][col]);
        }
        printf("\n");
    }

    printf("Digite o valor a ser encontrado na matriz: ");
    scanf("%f", &num);

    for(col=0; col<5; col++){
        for(lin=0; lin<4; lin++){
            if(matriz[lin][col] == num){
                printf("O valor %2.f foi encontrado na linha %i e coluna %i\n", num, lin, col);

                validação += 1;
            }
        }
    }

    if(validação == 0){
        printf("O valor %2.f não foi encontrado", num);
    }

    return 0;
}
