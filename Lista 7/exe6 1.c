#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

   int opcao, quantidade = 0;
   float porcentagem = 0, jose = 0, maria = 0, joao = 0, voto_branco = 0, voto_nulo = 0;

    do{
        printf("\n\t1- José \n\t2- Maria \n\t3- João \n\t4- Voto em Branco \n\t5- Voto Nulo\n\tEscolha um candidato:");
        scanf("%i", &opcao);

        if(opcao > 5 || opcao < 0){
            printf("Opção inválida.");
            break;
        }
 
        switch (opcao)
        {
        case 1:
            jose += 1;
            break;
        case 2:
            maria += 1;
            break;
        case 3:
            joao += 1;
            break;
        case 4:
            voto_branco += 1;
            break;
        case 5:
            voto_nulo += 1;
            break;
        case 0:
            quantidade -= 1;
            break;
        }
        
        quantidade += 1;
        
    }while(opcao != 0);

     printf("\nTotal de votos: %i\nTotal de votos em José: %.0f\nTotal de votos em Maria: %.0f\nTotal de votos em João: %.0f\nTotal de votos em branco: %.0f\nTotal de votos nulos: %.0f", quantidade, jose, maria, joao, voto_branco, voto_nulo);

    if(jose > maria && jose > joao){
        porcentagem = (jose / quantidade) * 100;

        printf("\nO candidato vencedor foi o José com %.0f%% dos votos", porcentagem);
    }
    else if(maria > jose && maria > joao){
        porcentagem = (maria / quantidade) * 100;

        printf("\nO candidato vencedor foi a Maria com %.0f%% dos votos", porcentagem);
    }
    else if(joao > maria && joao > jose){
        porcentagem = (joao / quantidade) * 100;

        printf("\nO candidato vencedor foi o João com %.0f%% dos votos", porcentagem);
    }
    else{
        printf("\nHouve um empate na eleição.");
    }

    return 0;
}