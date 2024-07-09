#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int matriz[4][3];
    int a=0, c=0;
    float b=0;
    int lin, col, soma=0;

    for(lin=0; lin<4; lin++){
        for(col=0; col<3; col++){
            printf("Estoque atual do produto %i no armazém %i: ", col, lin);
            scanf("%i", &matriz[lin][col]);
        }
    }
    printf("\n");

    for(col=0; col<3; col++){
        for(lin=0; lin<4; lin++){ 
            if(col < 1){
               c+=matriz[lin][col];
            }
            
            if(lin > 0 && lin < 2){
                a+=matriz[lin][col];
            }else if(lin > 1 && lin < 3){
                soma+=matriz[lin][col];
            }
        }
        printf("\n");
    }
    printf("\n");

    b = soma/3;

    printf("A quantidade de itens armazenados no segundo armazém: %i\n", a);
    printf("A média de produtos do terceiro armazém: %.0f\n", b);
    printf("A quantidade total do primeiro produto: %i\n", c);

    return 0;
}
