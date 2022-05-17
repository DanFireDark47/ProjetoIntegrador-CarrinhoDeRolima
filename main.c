#include <stdio.h>
#include <stdlib.h>
#include "view/hudBaterias.c"
#include "models/Baterias.c"
#include "view/hudClassificacaoGeral.c"


int Rodando = 1,EscolhaMenu;

int main(){

    printf("Projeto Integrador - Kuvax TPDS \n");
    system("pause");
  
    while(Rodando == 1){      
        EscolhaMenu = NULL;
        printf("1 - Bateria 1\n");
        printf("2 - Bateria 2\n");
        printf("3 - Bateria 3\n");
        printf("4 - Obter Classificacao Geral na Tela\n");
        printf("5 - Exportar Classificacao Geral\n");
        printf("6 - Sair do Sistema\n");
        printf("digite a sua escolha: ");scanf("%d", &EscolhaMenu);
        limpar_tela();
        switch(EscolhaMenu){
        case 1:
            hudBaterias(0);
            break;
        case 2:
            hudBaterias(1);
            break;
        case 3:
            hudBaterias(2);
            break;
        case 4:
            limpar_tela();
            hudClassificacaoGeral();
            
            printf("\n");
            break;
        case 5:
            printf("Exportar Classificacao Geral\n");
            printf("\n");
            break;
        case 6:
            printf("\nvoce tem certeza que deseja sair do sistema?\n");
            printf("1 - Sim\n");
            printf("2 - Nao\n");
            printf("digite a sua escolha: ");scanf("%d", &EscolhaMenu);
            if(EscolhaMenu	== 2){
              limpar_tela();
              break;
            }else if(EscolhaMenu == 1){
                return 0;
            }
            break;
        default:
            limpar_tela();
            printf("\nOPCAO INVALIDA – DIGITE NOVAMENTE.\n");
            printf("\n");
            break;
        }
    }
}
