#include <stdio.h>
#include <stdlib.h>
#include "../models/Baterias.c"
#include "../controllers/InsereTempoBateria.c"

void hudBaterias(int nBateria){
  int EscolhaEquipe = 0;
  int nBateriaTexto = nBateria + 1;
    while(EscolhaEquipe != 6){
      printf("\n");
      int nTime;
        for(nTime = 0; nTime < 5; nTime++){
                  printf("%d - Tempo da Equipe %d na Bateria %d: %d:%d:%d\n",
                    nTime + 1,
                    nTime + 1,
                    nBateriaTexto,
                    Bateria[nBateria][nTime][2],
                    Bateria[nBateria][nTime][1],
                    Bateria[nBateria][nTime][0]);
                  }
                  printf("6 - Voltar ao menu principal\n");
                  printf("digite a sua escolha: ");scanf("%d", &EscolhaEquipe);
                  if(EscolhaEquipe == 0){
                    EscolhaEquipe = 10;//se ele entrar com 0 ele entra de qualquer jeito
                  }else if(EscolhaEquipe == 1){
                    EscolhaEquipe = 0;
                  }else if(EscolhaEquipe == 2){
                    EscolhaEquipe = 1;
                  }else if(EscolhaEquipe == 3){
                    EscolhaEquipe = 2;
                  }else if(EscolhaEquipe == 4){
                    EscolhaEquipe = 3;
                  }else if(EscolhaEquipe == 5){
                    EscolhaEquipe = 4;
                  }
                  insereTempoBateria(nBateria,EscolhaEquipe);
    }
}