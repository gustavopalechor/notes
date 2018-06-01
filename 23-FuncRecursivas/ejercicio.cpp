#include <stdio.h>
#include <stdlib.h>

    int factorial(long int *num){
        if(num <= 1){
            return 1;
        }
    return *num * factorial(*num-1);
  }
    int main(){
  
    long int *numero;

    printf("Introduce el numero para factoriar: \n");
    scanf(" %i", numero);

    printf("El factorial del numero %i, es: %i \n", numero, factorial(numero));
    return EXIT_SUCCESS;
}
