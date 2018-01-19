#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
    int main(){
    int numero;

    do{
      __fpurge(stdin);
      printf("escribe un numero del 0 al 9: \n");
      scanf(" %i", &numero);
        if(numero<10)
        printf("has escrito el siguiente numero: %i\n", numero);
        else
          printf("capullo \n");

    } while(numero <= 0 || numero>9);

    return EXIT_SUCCESS;
}
