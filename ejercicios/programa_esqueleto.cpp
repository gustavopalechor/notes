#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100
    int main(){
    char nombre[N];
    char *puntero = NULL;
    int longitud;
    printf("Dime tu nombre: \n");
    fgets(nombre, N, stdin);
    printf("Tu nombre es: %s \n", nombre);
    longitud = strlen(nombre);
    /*con strlen podemos saber el tamaño de un dato, con sizeof sabremos el tamaño reservado en memoria(      0x100)
    */
    printf(" %i\n", longitud);
    puntero= (char*) malloc((longitud + 1) * sizeof(char)); //con realloc tenemos que declarar el puntero
    strncpy(puntero, nombre, longitud);
    free(puntero);
    return EXIT_SUCCESS;
}
