#include <stdio.h>
#include <locale.h>

/*Escreva um programa para receber o saldo inicial de uma conta bancária de um cliente. A seguir  executar o menu abaixo:

    1.  Depósito  e valor a ser depositado
    2.  Saque e valor do saque
    3.  Ver saldo
    4.  Sair

Quando for informado para o menu for código 4, o programa deve ser encerrado e impresso o saldo final da conta com uma das seguintes mensagens:

CONTA ZERADA,
CONTA ESTOURADA (se o saldo for negativo)
CONTA PREFERENCIAL (se o saldo for positivo)
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float saldo_inicial, saldo_final, valor_deposito, valor_saque;
    int opcao;

    printf("Informe o saldo incial da sua conta:");
    scanf("%f", &saldo_inicial);

    while (opcao != 4)
    {
        do{
            printf("O que deseja realizar na sua conta?\n\t1- Depósito e valor a ser depositado\n\t2- Saque e valor do saque \n\t3- Ver saldo \n\t4-  Sair\n");
            scanf("%i", &opcao);
        } while (opcao <= 0 || opcao > 4);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor a ser depositado:");
            scanf("%f", &valor_deposito);

            saldo_inicial = saldo_inicial + valor_deposito;
            break;
        case 2:
            printf("Digite o valor do saque:");
            scanf("%f", &valor_saque);

            saldo_inicial = saldo_inicial - valor_saque;
            break;
        case 3:
            printf("Seu saldo é de %.2f", saldo_inicial);
            break;
        case 4:
            if(saldo_inicial == 0){
                printf("Seu saldo é de %.0f. Sua conta está ZERADA.", saldo_inicial);
            }
            else if(saldo_inicial < 0){
                printf("Seu saldo é de %.2f. Sua conta está ESTOURADA.", saldo_inicial);
            }
            else{
                printf("Seu saldo é %.2f. Sua conta é PREFERENCIAL.", saldo_inicial);
            }
            break;
        }
    }

    return 0;
}