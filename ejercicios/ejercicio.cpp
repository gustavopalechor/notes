#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 0x100
    int main(){
    char nombre[N];
    char *puntero = NULL;
    int longitud;
    printf("introduce tu nombre: \n");
    fgets(nombre, N, stdin);
    printf("tu nombre es: %s", nombre);
    longitud = strlen(nombre) -1;
    printf(" %i", longitud);
    puntero = (char*)((longitud+1) * sizeof(char));
    strncpy(puntero, nombre, longitud);

    free(puntero);
    return EXIT_SUCCESS;
}
