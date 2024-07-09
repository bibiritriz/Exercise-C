/*
Escreva um programa que solicita ao usuário 10 números inteiros positivos e verifica se cada um dos números é primo ou não. 
Um número primo é aquele que é divisível apenas por 1 e por ele mesmo.
Para cada número recebido mostrar por quais valores o número é divisível.


Exemplo de execução:

Digite o 1o. número inteiro positivo: 17
Divisível por 1.
Divisível por 17.
17 é um número primo.

Digite o 2o. número inteiro positivo: 10
Divisível por 1.
Divisível por 2.
Divisível por 5
Divisível por 10.
10 não é um número primo.




Dica:
Use o operador %, resto de divisão.
Exemplos:
int x = 5 % 2;    // x armazena 1.
int y = 5 % 3;    // y armazena 2.
int z = 6 % 2 ;   // z armazena 0
*/
#include <stdio.h>
#include <locale.h>

int main(){
    int i, j, calculo, cont = 0, num;

            for(i = 0; i < 10; i++){
                
                printf("\nDigite um número:");
                scanf("%i", &num);

                if(num <=0){
                    printf("Não aceitamos números negativos.");
                    return 1;
                }

                cont = 0;

                for (j = 1; j <= num; j++){
                   calculo = num % j;
                   
                   if (calculo == 0)
                   {
                        printf("\nDivisível por %i.", j);

                        cont++;
                   }
               
                }

                if(cont <= 2){
                        printf("\n%i é um número primo.", num);
                    }
                    else{
                        printf("\n%i não é um número primo.", num);
                    }
            }
        
    return 0;
}