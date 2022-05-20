#include <stdio.h>
#include <stdlib.h>
#include "Baterias.c"
int ExportarClassificacaoGeral(){
    FILE *fp;
    if ((fp=fopen ("ClassificacaoGeral.txt","w")) != NULL) {

    fprintf(fp ,"%d° lugar - EQUIPE %d - Tempo: %d:%d:%d\n%d° lugar - EQUIPE %d - Tempo: %d:%d:%d\n%d° lugar - EQUIPE %d - Tempo: %d:%d:%d\n%d° lugar - EQUIPE %d - Tempo: %d:%d:%d\n%d° lugar - EQUIPE %d - Tempo: %d:%d:%d\n",
    0+1,BateriaAritmetica[0][1]+1,BateriaAritmetica[0][0] / 60000,(BateriaAritmetica[0][0] % 60000) / 1000,(BateriaAritmetica[0][0] % 60000) % 1000,
    1+1,BateriaAritmetica[1][1]+1,BateriaAritmetica[1][0] / 60000,(BateriaAritmetica[1][0] % 60000) / 1000,(BateriaAritmetica[1][0] % 60000) % 1000,
    2+1,BateriaAritmetica[2][1]+1,BateriaAritmetica[2][0] / 60000,(BateriaAritmetica[2][0] % 60000) / 1000,(BateriaAritmetica[2][0] % 60000) % 1000,
    3+1,BateriaAritmetica[3][1]+1,BateriaAritmetica[3][0] / 60000,(BateriaAritmetica[3][0] % 60000) / 1000,(BateriaAritmetica[3][0] % 60000) % 1000,
    4+1,BateriaAritmetica[4][1]+1,BateriaAritmetica[4][0] / 60000,(BateriaAritmetica[4][0] % 60000) / 1000,(BateriaAritmetica[4][0] % 60000) % 1000);
    }else{
        printf("Erro ao abrir o arquivo\n");
    }
    fclose(fp);
}