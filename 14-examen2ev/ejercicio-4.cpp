#include <stdio.h>
#include <stdlib.h>

    int main(){
    double *puntero = NULL;
    puntero = (double*) malloc(sizeof(double));
    *puntero = 3,5;

    puntero = (double*) realloc(puntero, 2 * sizeof(double));
    *(puntero + 1) = 7,8;

    return EXIT_SUCCESS;
}
