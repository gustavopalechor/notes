#include <stdio.h>
#include <stdlib.h>

/*
**********************************************************************
|Haremos un programa que diga si el numero introducido es par o impar|
**********************************************************************
*/


    int main(){
    int numero;
    
    system("clear");
    system("toilet -fpagga PARES");
    printf("introduce un numero: \n""\n");
    scanf(" %i", &numero);

    if(numero % 2 == 0)
        printf("tu numero es par\n" "\n");
    else
        printf("tu numero no es par\n" "\n");

    return EXIT_SUCCESS;
}
