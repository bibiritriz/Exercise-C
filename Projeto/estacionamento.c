#include <stdio.h>
#define TAM 10

/*Um estacionamento possui 100 vagas que são organizadas na forma de 10 linhas e 10 colunas.
Faça uma aplicação que faça o controle do estacionamento.

O estacionamento possui preço fixo, independente do tempo que o carro ficar estacionado, no valor de R$ 15,00.

No início do dia todas as vagas estão livres.

Os requisitos do sistema são:

Requisito 1: Entrada do carro.
Um carro ao entrar no estacionamento deve ser estacionado em uma vaga livre.
O sistema deve indicar a vaga para o motorista, que informa a vaga no formato Letra e Número.
O motorista deverá estacionar o carro, obrigatoriamente na vaga indicada pelo sistema.

Por exemplo.
Vaga: A1 (primeira linha e primeira coluna da matriz).
Vaga: B5 (segunda linha e quinta coluna da matriz).
Vaga: J10 (décima linha e décima coluna da matriz).
Caso não tenha vagas livres, o sistema deve apresentar essa informação para o motorista.

Requisito 2: Saída do carro.
Ao sair com o carro, o motorista deverá informar a vaga no formato Letra e Número para liberar a --vaga para o próximo carro.
Deve ser também adicionado R$ 15,00 ao total arredado no dia.

Requisito 3: Mostrar o total de vagas disponíveis e quais são as vagas disponíveis.
O sistema deverá mostrar o total de vagas disponíveis, bem como listar as vagas disponíveis no formato Letra e Número.

Requisito 4: Mostrar o total arrecadado até o momento.
O sistema deverá mostrar o total arrecadado até o momento.

Requisito 5:  Começar um novo dia.
O sistema deverá liberar todas as vagas, bem como reiniciar o total arrecadado.

Requisito 6:  Finalizar o sistema
O sistema deverá ser finalizado, mostrando:
Total arrecadado.
Quantidade de carros estacionados durante o período.
Quantidade máxima de carros estacionados ao mesmo tempo.
*/

int main()
{
    int estacionamento[TAM][TAM];
    char letra;
    int opcao = 1, maximo = 0, atual = 0;
    int soma = 0, cont2 = 0;
    int num = 0, let = 0, cont1 = 0;
    int validacao = 1;

    for (let = 0; let < TAM; let++)
    {
        for (num = 0; num < TAM; num++)
        {
            estacionamento[let][num] = 0;
        }
    }

    do
    {
        printf("\t1. Entrada do carro;\n\t2. Saida do carro;\n");
        printf("\t3. Vagas disponiveis;\n\t4. Total arrecadado;\n");
        printf("\t5. Novo dia;\n\t6. Finalizar.\n");
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 1:
            cont1 = 0;
            for (let = 0; let < TAM; let++)
            {
                for (num = 0; num < TAM; num++)
                {
                    if (estacionamento[let][num] != 1 && cont1 == 0)
                    {
                        estacionamento[let][num] = 1;
                        switch (let)
                        {
                        case 0:
                            letra = 'A';
                            cont1++;
                            break;
                        case 1:
                            letra = 'B';
                            cont1++;
                            break;
                        case 2:
                            letra = 'C';
                            cont1++;
                            break;
                        case 3:
                            letra = 'D';
                            cont1++;
                            break;
                        case 4:
                            letra = 'E';
                            cont1++;
                            break;
                        case 5:
                            letra = 'F';
                            cont1++;
                            break;
                        case 6:
                            letra = 'G';
                            cont1++;
                            break;
                        case 7:
                            letra = 'H';
                            cont1++;
                            break;
                        case 8:
                            letra = 'I';
                            cont1++;
                            break;
                        case 9:
                            letra = 'J';
                            cont1++;
                            break;
                        }
                        printf("\nVaga: %c%i\n", letra, num + 1);

                        soma += 15;
                        maximo++;
                        atual++;
                    }
                    else if (let == 9 && num == 9 && estacionamento[let][num] == 1 && cont1 != 1)
                    {
                        printf("\nNao ha vagas.\n");
                    }
                }
            }
            break;
        case 2:
            do
            {
                printf("\nInsira a vaga: ");
                scanf(" %c", &letra);
                scanf("%i", &num);

                if (num <= TAM && num > 0)
                {
                    if (letra == 'A' || letra == 'a')
                    {
                        letra = 'A';
                        let = 0;
                        validacao = 1;
                    }
                    else if (letra == 'B' || letra == 'b')
                    {
                        letra = 'B';
                        let = 1;
                        validacao = 1;
                    }
                    else if (letra == 'C' || letra == 'c')
                    {
                        letra = 'C';
                        let = 2;
                        validacao = 1;
                    }
                    else if (letra == 'D' || letra == 'd')
                    {
                        letra = 'D';
                        let = 3;
                        validacao = 1;
                    }
                    else if (letra == 'E' || letra == 'e')
                    {
                        letra = 'E';
                        let = 4;
                        validacao = 1;
                    }
                    else if (letra == 'F' || letra == 'f')
                    {
                        letra = 'F';
                        let = 5;
                        validacao = 1;
                    }
                    else if (letra == 'G' || letra == 'g')
                    {
                        letra = 'G';
                        let = 6;
                        validacao = 1;
                    }
                    else if (letra == 'H' || letra == 'h')
                    {
                        letra = 'H';
                        let = 7;
                        validacao = 1;
                    }
                    else if (letra == 'I' || letra == 'i')
                    {
                        letra = 'I';
                        let = 8;
                        validacao = 1;
                    }
                    else if (letra == 'J' || letra == 'j')
                    {
                        letra = 'J';
                        let = 9;
                        validacao = 1;
                    }
                    printf("\nVaga %c%i foi liberada.\n", letra, num);
                    estacionamento[let][num - 1] = 0;
                }
                else
                {
                    printf("\nEssa vaga nao e valida.\n");
                    validacao = 0;
                    break;
                }
            } while (validacao != 1);
            atual--;
            break;
        case 3:
            for (let = 0; let < TAM; let++)
            {
                for (num = 0; num < TAM; num++)
                {
                    if (estacionamento[let][num] == 0)
                    {
                        switch (let)
                        {
                        case 0:
                            letra = 'A';
                            break;
                        case 1:
                            letra = 'B';
                            break;
                        case 2:
                            letra = 'C';
                            break;
                        case 3:
                            letra = 'D';
                            break;
                        case 4:
                            letra = 'E';
                            break;
                        case 5:
                            letra = 'F';
                            break;
                        case 6:
                            letra = 'G';
                            break;
                        case 7:
                            letra = 'H';
                            break;
                        case 8:
                            letra = 'I';
                            break;
                        case 9:
                            letra = 'J';
                            break;
                        }
                        printf("\nVaga disponivel: %c%i\n", letra, num + 1);
                    }
                    else if (let == 9 && num == 9 && estacionamento[let][num] == 1)
                    {
                        printf("\nNao ha vagas disponiveis.\n");
                    }
                }
            }
            break;
        case 4:
            printf("O total arrecado: R$%i,00\n", soma);
            break;
        case 5:
            soma = 0;
            cont1 = 0;
            cont2 = 0;
            atual = 0;
            maximo = 0;

            for (let = 0; let < TAM; let++)
            {
                for (num = 0; num < TAM; num++)
                {
                    estacionamento[let][num] = 0;
                }
            }
            printf("\nRecomecando o dia...\n");
            break;
        case 6:
            printf("O total arrecadado do dia foi de R$%i,00\n", soma);
            printf("A quantidade de carros estacionados durante o periodo foi de %i\n", atual);
            printf("A quantidade maxima de carros estacionados ao mesmo tempo foi de %i\n", maximo);
            break;
        }
    } while (opcao != 6);

    return 0;
}