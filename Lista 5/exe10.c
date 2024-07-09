#include <stdio.h>

int main()
{
	int i, habitantes = 15, numero_filhos;
    float salario, maior_salario = 0, media_salario, media_filhos, somatoria_salario = 0, pessoas_salario_mil = 0, percentual_salario_mil;
    float somatoria_filhos = 0;

    for (i = 0; i < habitantes; i++) {
        printf("\nDigite o seu salario: ");
        scanf("%f", &salario);

        printf("\nDigite o numero de filhos: ");
        scanf("%d", &numero_filhos);

        if (salario <= 1000) {
            pessoas_salario_mil++;
        }

        if (salario > maior_salario) {
            maior_salario = salario;
        }

        somatoria_filhos += numero_filhos;
        somatoria_salario += salario;
    }

    media_salario = somatoria_salario / habitantes;
    media_filhos = somatoria_filhos / habitantes;
    percentual_salario_mil = (pessoas_salario_mil / habitantes) * 100;

    printf("\nA media do salario eh de: %.2f", media_salario);
    printf("\nA media de filhos eh de: %.2f", media_filhos);
    printf("\nO salario mais alto eh: %.2f", maior_salario);
    printf("\nA porcentagem de pessoas com salario inferior ou igual a mil eh: %.2f%%", percentual_salario_mil);

    return 0;
}
