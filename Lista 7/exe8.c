#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int i, divisor, intervalo_inicial, intervalo_final, resultado;

    printf("Digite o valor do divisor:");
    scanf("%i", &divisor);

    printf("Digite o do início do intervalo:");
    scanf("%i", &intervalo_inicial);

    printf("Digite o final do intervalo:");
    scanf("%i", &intervalo_final);

    for(i = intervalo_inicial; i <= intervalo_final; i++){
        
        resultado = i % divisor;

        if (resultado == 0)
        {
            printf("\n%i", i);
        }
    }
    
    return 0;
}