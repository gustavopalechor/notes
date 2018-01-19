#include <stdio.h>
#include <stdlib.h>

    int main(){
    int numero;

    do{
      printf("escribe un numero del 0 al 9: \n");
      scanf(" %i", &numero);
        if(numero<10)
        printf("has escrito el siguiente numero: %i\n", numero);
        else
          printf("¿Tu quieres saber de lo que es capaz de hacer Gustavo Adolfo Palechor Arias? \n");

    } while(numero < 0 || numero>9);

    return EXIT_SUCCESS;
}
