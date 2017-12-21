#include <stdio.h>
#include <stdlib.h>

int main () {
    int op1;
    int op2;

    system("clear");
    system("toilet -fpagga SUMA DE DOS NUMEROS");
    printf("Operando 1: \n");
    scanf(" %i",  &op1);
    printf("Operando 2: \n");
    scanf(" %i", &op2);
    printf("%i + %i = %i\n", op1, op2, op1 + op2);
    return EXIT_SUCCESS;

}
