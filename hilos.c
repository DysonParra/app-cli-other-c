/*
 * @fileoverview    {FileName} se encarga de realizar tareas específicas.
 *
 * @version         2.0
 *
 * @author          Dyson Arley Parra Tilano <dysontilano@gmail.com>
 *
 * @copyright       Dyson Parra
 * @see             github.com/DysonParra
 *
 * History
 * @version 1.0     Implementación realizada.
 * @version 2.0     Documentación agregada.
 */
#include <stdio.h>
#include <windows.h>

static void runDialogOne();
static void runDialogTwo();

HANDLE tPrimary, tSecond;

/**
 * Entrada principal del sistema.
 *
 * @param argc cantidad de argumentos pasados en la linea de comandos.
 * @param argv argumentos de la linea de comandos.
 * @return {0} si el programa se ejecutó correctamente.
 */
int main(int argc, char** argv) {
    DWORD ThreadID;
    // Crea dos hilos en estado de suspensión.
    tPrimary = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)runDialogOne, NULL, CREATE_SUSPENDED, &ThreadID);
    tSecond = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)runDialogTwo, NULL, CREATE_SUSPENDED, &ThreadID);

    for (int i = 0; i < 10; i++) {
        ResumeThread(tPrimary);
        ResumeThread(tSecond);

        HANDLE ThreadContainer[2];
        ThreadContainer[0] = tPrimary;
        ThreadContainer[1] = tSecond;

        DWORD dwSuccess = WaitForMultipleObjects(2, ThreadContainer, TRUE, INFINITE);

        if (dwSuccess == WAIT_FAILED)
            printf("\nError");
        else
            printf("\nExito");
    }
    CloseHandle(tPrimary);
    CloseHandle(tSecond);
    printf("\n");

    return 0;
}

/**
 * TODO: Definición de {@code runDialogOne}.
 */
static void runDialogOne() {
    for (int i = 0; i < 50; i++)
        printf(".");

    printf("1");
    return;
}

/**
 * TODO: Definición de {@code runDialogTwo}.
 */
static void runDialogTwo() {
    // WaitForSingleObject(tPrimary, INFINITE);
    printf("2");
    return;
}
