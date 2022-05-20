#include <stdio.h>
#include <stdlib.h>
#include "../models/Baterias.c"

int ClassificacaoGeral(){
    int sortBateria,sortTime;
    int CalculoTotal;

    //Transforma o tempo da bateria em milisegundos
    for(sortTime = 0;sortTime < 5;sortTime++){
        for(sortBateria = 0;sortBateria < 3;sortBateria++){
             CalculoTotal = Bateria[sortBateria][sortTime][0] * 60000;
             CalculoTotal += Bateria[sortBateria][sortTime][1] * 1000;
             CalculoTotal += Bateria[sortBateria][sortTime][2];
            BateriaEmMs[sortTime][sortBateria] = CalculoTotal;
        }
    }
    //organiza a matriz ms e faz a média aritmética de cada time
    long int BateriaMeio,BateriaMenor,BateriaMaior;
    BateriaMeio = 0;
    for(sortTime = 0;sortTime < 5;sortTime++){

        //define o maior valor da bateria
        if(BateriaEmMs[sortTime][0] > BateriaEmMs[sortTime][2] && BateriaEmMs[sortTime][0] > BateriaEmMs[sortTime][1]){
            BateriaMaior = BateriaEmMs[sortTime][0];
        }else if(BateriaEmMs[sortTime][1] > BateriaEmMs[sortTime][2] && BateriaEmMs[sortTime][1] > BateriaEmMs[sortTime][0]){
            BateriaMaior = BateriaEmMs[sortTime][1];
        }else if(BateriaEmMs[sortTime][2] > BateriaEmMs[sortTime][1] && BateriaEmMs[sortTime][2] > BateriaEmMs[sortTime][0]){
            BateriaMaior = BateriaEmMs[sortTime][2];
        }
        //define o menor valor da bateria
        if(BateriaEmMs[sortTime][0] < BateriaEmMs[sortTime][2] && BateriaEmMs[sortTime][0] < BateriaEmMs[sortTime][1]){
            BateriaMenor = BateriaEmMs[sortTime][0];
        }else if(BateriaEmMs[sortTime][1] < BateriaEmMs[sortTime][2] && BateriaEmMs[sortTime][1] < BateriaEmMs[sortTime][0]){
            BateriaMenor = BateriaEmMs[sortTime][1];
        }else if(BateriaEmMs[sortTime][2] < BateriaEmMs[sortTime][1] && BateriaEmMs[sortTime][2] < BateriaEmMs[sortTime][0]){
            BateriaMenor = BateriaEmMs[sortTime][2];
        }

        //calcula o meio da bateria
        if(BateriaMaior == BateriaEmMs[sortTime][0] && BateriaMenor == BateriaEmMs[sortTime][2]){
            BateriaMeio = BateriaEmMs[sortTime][1];
        }else if(BateriaMaior == BateriaEmMs[sortTime][1] && BateriaMenor == BateriaEmMs[sortTime][0]){
            BateriaMeio = BateriaEmMs[sortTime][2];
        }else if(BateriaMaior == BateriaEmMs[sortTime][2] && BateriaMenor == BateriaEmMs[sortTime][1]){
            BateriaMeio = BateriaEmMs[sortTime][0];
        }

        //adiciona a média aritmética
        BateriaAritmetica[sortTime][0] = (BateriaMeio + BateriaMenor) / 3;
        BateriaAritmetica[sortTime][1] = sortTime;
    }
    //ordena a matriz de acordo com a média aritmética
    for(sortTime = 0;sortTime < 5;sortTime++){
        for(int sortTime2 = 0;sortTime2 < 5;sortTime2++){
            if(BateriaAritmetica[sortTime][0] < BateriaAritmetica[sortTime2][0]){
                int aux;
                //passa os valores da matriz para auxiliar e troca os valores
                aux = BateriaAritmetica[sortTime][0];
                BateriaAritmetica[sortTime][0] = BateriaAritmetica[sortTime2][0];
                BateriaAritmetica[sortTime2][0] = aux;
                //passa os indices de equipe na matriz para o auxiliar e troca os valores
                aux = BateriaAritmetica[sortTime2][1];
                BateriaAritmetica[sortTime2][1] = BateriaAritmetica[sortTime][1];
                BateriaAritmetica[sortTime][1] = aux;
            }
        }
    }
}