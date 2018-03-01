#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 0x100
    int main(){
    char nombre[N];
    int longitud;
    char *puntero = NULL;
    printf("Introduce tu nombre: ");
    fgets(nombre, N, stdin);
    printf("tu nombre es: %s", nombre);
    longitud= strlen(nombre)-1;
    printf(" %i\n", longitud);
    puntero= (char*) malloc((longitud + 1) * sizeof(char));
    strncpy(puntero, nombre, longitud);

    free(puntero); 

    return EXIT_SUCCESS;
}
