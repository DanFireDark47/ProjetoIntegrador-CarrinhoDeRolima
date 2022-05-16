#if defined(__MINGW32__) || defined(_MSC_VER)
#define limpar_input() fflush(stdin)
#define limpar_tela() system("cls")
#else
#include <stdio_ext.h>
#define limpar_input() __fpurge(stdin)
#define limpar_tela() system("clear")
#endif