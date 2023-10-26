/*
 * @fileoverview    {FileName}
 *
 * @version         2.0
 *
 * @author          Dyson Arley Parra Tilano <dysontilano@gmail.com>
 *
 * @copyright       Dyson Parra
 * @see             github.com/DysonParra
 *
 * History
 * @version 1.0     Implementation done.
 * @version 2.0     Documentation added.
 */
#include <stdio.h>

//#pragma GCC diagnostic warning "-Wformat"
//#pragma GCC diagnostic error "-Wformat"
//#pragma GCC diagnostic ignored "-Wformat"

//#pragma GCC diagnostic ignored "-Wunused-variable"
//#pragma GCC diagnostic error "-Wunused-variable"

//#pragma message( "Compiling " __FILE__ )
#if defined __cplusplus
#pragma message( "Compiling using GNU C++.")
#elif defined __GNUC__
#pragma message( "Compiling using GNU C.")
#endif
/**
 * Entrada principal del sistema.
 *
 * @param argc cantidad de argumentos pasados en la linea de comandos.
 * @param argv argumentos de la linea de comandos.
 * @return {0} si el programa se ejecutó correctamente.
 */
int main(int argc, char** argv) {

    #define iqual ==
    int a = 0;

    #if a == 0
    #pragma message("VALUE IS ZERO.")
    #endif
    if (a iqual 0)
        printf("Es cero\n");
    else
        printf("No es cero\n");
    return 0;
}
