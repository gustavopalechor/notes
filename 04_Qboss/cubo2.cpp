#include <stdio.h>
#include <stdlib.h>

    int main(){
      
        system("clear");
        system("toilet  -fpagga CREACION DE UN CUBO");


        double vertice[3];

        printf(" introduce el primer vértice: \n");
        scanf(" %.2lf", &vertice);

        printf(" introduce el segundo vértice: \n");
        scanf(" %.2lf", &vertice + 1);

        printf(" introduce el tercer vértice: \n");
        scanf(" %.2lf", &vertice + 2);

        printf(" %.2lf, %.2lf, %.2lf => \t",
                vertice[0],vertice[1],vertice[2]);
        printf(" %.2lf, %.2lf \n ",
                vertice[0] / vertice[2],
                -vertice[1] / vertice[2]);

    return EXIT_SUCCESS;
}
