#include <stdio.h>
#include <stdlib.h>

    int main(){
    int opcion;

    do{
      printf("Introduce un numero entre el 1 y el 5: ");
      scanf(" %i", &opcion);
      printf("tu numero es: %i", opcion);
    }while(opcion < 1 || opcion > 5);

    return EXIT_SUCCESS;
}
