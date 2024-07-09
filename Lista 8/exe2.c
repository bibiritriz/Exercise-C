#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int numeros[10], i;

    for(i = 0; i < 10; i++){
        printf("Digite os numeros da sequência: ");
        scanf("%i", &numeros[i]);
    }

    for(i = 9; i >= 0; i--){
        printf("%i\n", numeros[i]);
    }

    return 0;
}
