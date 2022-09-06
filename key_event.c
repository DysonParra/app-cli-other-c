/*
 * @fileoverview {FileName} se encarga de realizar tareas especificas.
 *
 * @version             1.0
 *
 * @author              Dyson Arley Parra Tilano <dysontilano@gmail.com>
 * Copyright (C) Dyson Parra
 *
 * @History v1.0 --- La implementacion de {FileName} fue realizada el 31/07/2022.
 * @Dev - La primera version de {FileName} fue escrita por Dyson A. Parra T.
 */
#include <stdio.h>
#include <windows.h>

/**
 * Entrada principal del sistema.
 *
 * @param argc cantidad de argumentos pasados en la linea de comandos.
 * @param argv argumentos de la linea de comandos.
 * @return {0} si el programa se ejecutó correctamente.
 */
int main(int argc, char** argv) {
    // Envía la pulsación y luego la suelta.
    keybd_event(VK_LWIN, 0, KEYEVENTF_EXTENDEDKEY, 0);
    keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
    while (1) {
        for (int i = 0; i < 256; i++) {
            if (GetAsyncKeyState(i)) {
                printf("%d %C\n", i, i);

                // ENVIAMOS LA PULSACION U
                // keybd_event(0x55,0,0,0);
                // keybd_event(0x41,0,0,0);

                // INTERVALO
                Sleep(100);
            }
        }
    }
    return 0;
}
