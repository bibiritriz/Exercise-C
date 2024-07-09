#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int numeros[15], i;

    for(i = 0; i < 15; i++){
        printf("Digite os numeros da sequência: ");
        scanf("%i", &numeros[i]);
    }

    for(i = 0; i < 15; i++){
        printf("%i\n", numeros[i] * 2);
    }


    return 0;
}
