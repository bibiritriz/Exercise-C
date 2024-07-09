#include <stdio.h>
#include <locale.h>

#define TAM 10

int main() {
    setlocale(LC_ALL, "");

    int vetor1[TAM], vetor2[TAM];
    int i, soma = 0, numero;
    int tamanho_vetor1 = 0, tamanho_vetor2 = 0;

    printf("Digite os números para o primeiro vetor (insira um número negativo para parar):\n");
    for (i = 0; i < TAM; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        } else {
            vetor1[i] = numero;
            tamanho_vetor1++;
        }
    }


    printf("Digite os números para o segundo vetor (insira um número negativo para parar):\n");
    for (i = 0; i < TAM; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        } else {
            vetor2[i] = numero;
            tamanho_vetor2++;
        }
    }

    for (i = 0; i < tamanho_vetor1 && i < tamanho_vetor2; i++) {
        if (vetor1[i] == vetor2[i]) {
            soma++;
        }
    }

    printf("Existem %d valores iguais na mesma posição.\n", soma);

    return 0;
}
