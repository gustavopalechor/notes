#include <stdio.h>
#include <stdlib.h>

#ifdef D
#define D 3
int main(){

    double vertice[D];

    /* Entrada de datos */
    printf("(x, y, z): ");
    scanf(" ( %lf , %lf , %lf ) ",
            &vertice[X], &vertice[Y], &vertice[Z]);

#endif
    /* Salida de datos */
    printf("( %.2lf, %.2lf, %.2lf ) =>\t",
            vertice[X], vertice[Y], vertice[Z]);
    printf("( %.2lf, %.2lf )\n",
            vertice[X] / vertice[Z],
            -vertice[Y] / vertice[Z]);

    return EXIT_SUCCESS;
}
