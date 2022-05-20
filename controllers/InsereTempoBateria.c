#include <stdio.h>
#include <stdlib.h>
#include "../models/LimparTela.c"
#include "../models/Baterias.c"

int insereTempoBateria(int nBateria, int EscolhaEquipe){
  int nBateriaTexto = nBateria + 1;
  int EscolhaEquipeTexto = EscolhaEquipe + 1;
  if(EscolhaEquipe != 6 && EscolhaEquipe >= 0 && EscolhaEquipe <= 4){
                    limpar_tela();
                    printf("Tempo Equipe %d na Bateria %d: ",EscolhaEquipeTexto ,nBateriaTexto);
                    scanf("%d", &Bateria[nBateria][EscolhaEquipe][0]);
                    limpar_tela();
                    printf("Tempo Equipe %d na Bateria %d: %d:",EscolhaEquipeTexto ,nBateriaTexto,Bateria[nBateria][EscolhaEquipe][0]);
                    scanf("%d", &Bateria[nBateria][EscolhaEquipe][1]);
                    limpar_tela();
                    printf("Tempo Equipe %d na Bateria %d: %d:%d:",EscolhaEquipeTexto,nBateriaTexto,Bateria[nBateria][EscolhaEquipe][0],Bateria[nBateria][EscolhaEquipe][1]);
                    scanf("%d", &Bateria[nBateria][EscolhaEquipe][2]);
                    limpar_tela();
                  }else if(EscolhaEquipe == 6){
                    limpar_tela();
                    return 0;
                  }else{
                    limpar_tela();
                    printf("\nOPÇÃO INVÁLIDA – DIGITE NOVAMENTE.\n");
                  }
}
