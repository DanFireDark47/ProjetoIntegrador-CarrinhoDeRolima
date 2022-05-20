#include <stdio.h>
#include <stdlib.h>
#include "../models/Baterias.c"
#include "../controllers/ClassificacaoGeral.c"
#include "../models/LimparTela.c"


int hudClassificacaoGeral(){
    int EscolhaMenu = 0;
    ClassificacaoGeral();
    while(EscolhaMenu != 1){
        long int Minuto,Segundo,Milisegundo;
        for(int n = 0;n < 5;n++){
            Minuto = BateriaAritmetica[n][0] / 60000;
            Segundo = (BateriaAritmetica[n][0] % 60000) / 1000;
            Milisegundo = (BateriaAritmetica[n][0] % 60000) % 1000;
            printf("%d° lugar - EQUIPE %d - Tempo: %d:%d:%d\n",n+1,BateriaAritmetica[n][1]+1,Minuto,Segundo,Milisegundo);
            
        }
        printf("Digite 1 Para Sair\n");
        printf("digite a sua escolha: ");scanf("%d", &EscolhaMenu);
        limpar_tela();
    }
    return 1;
}