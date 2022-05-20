#include <stdio.h>
#include <stdlib.h>

int Bateria[3][5][3];
//[*][ ][ ] = N° Bateria | [0] = 1 | [1] = 2 | [2] = 3
//[ ][*][ ] = N° Time | [0] = 1 | [1] = 2 | [2] = 3 | [3] = 4 |[4] = 5
//[ ][ ][*] = [2] - Milisegundos | [1] - Segundos | [0] - Minutos

int BateriaEmMs[5][3];
//[*][ ] = N° Time | [0] = 1 | [1] = 2 | [2] = 3 | [3] = 4 |[4] = 5
//[ ][*] = N° Bateria | [0] = 1 | [1] = 2 | [2] = 3

int BateriaAritmetica[5][2];
//[*][ ] = N° Time | [0] = 1 | [1] = 2 | [2] = 3 | [3] = 4 |[4] = 5
//[ ][*] = Tempo Aritmético
