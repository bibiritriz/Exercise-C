#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int lin_usu, col_usu, lin, col, soma = 0;

    printf("Digite a quantidade de linhas da matriz:\n");
    scanf("%i", &lin_usu);

    printf("Digite a quantidade de colunas da matriz:\n");
    scanf("%i", &col_usu);

    int matriz[lin_usu][col_usu];

    for(col=0; col < col_usu; col++){
        for(lin=0; lin < lin_usu; lin++){
            printf("Digite os valores da matriz:\n");
            scanf("%i", &matriz[lin][col]);

            soma += matriz[lin][col];
        }
        printf("A soma da coluna %i foi de %i\n", col, soma);
        soma = 0;
    }

    return 0;
}
