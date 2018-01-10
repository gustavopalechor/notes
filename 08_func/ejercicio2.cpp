#include <stdio.h>
#include <stdlib.h>

    #define Triangulo 1
    #define Cuadrado 2
    #define Circulo 3

    int main(){

        unsigned opcion;

    printf(
     "elige la figura:\n"
     "\t1.-Triangulo"
     "\t2.-Cuadrado"
     "\t3.-Circulo"
     "\n"
     "\tOpcion: "
     );

    scanf(" %u", &opcion);
        switch(opcion) {
        case Triangulo:
        printf("Triangulo △");
        break;
        case Cuadrado:
        printf("Cuadrado □");
        break;
        case Circulo:
        printf("Circulo ○");
        break;
        default:
          printf("Solo esas opciones");
          break;

    }

  printf("\n");
    return EXIT_SUCCESS;
}
