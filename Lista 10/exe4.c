#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int matriz[3][3];
    int a = 0, b=0, c=0;
    int lin, col, soma=0;

    for(lin=0; lin<3; lin++){
        for(col=0; col<3; col++){
            printf("Digite os valores da matriz: ");
            scanf("%i", &matriz[lin][col]);

            soma += matriz[lin][col];

            if(matriz[lin][col]%2 == 0){
                a += matriz[lin][col];
            }else{
                c += 1;
            }
        }
    }

    b = soma/9;

    printf("\nA soma dos elementos pares da matriz: %i", a);
    printf("\nA média de todos os elementos da matriz: %i", b);
    printf("\nA quantidade de elementos ímpares da matriz: %i", c);


    return 0;
}
