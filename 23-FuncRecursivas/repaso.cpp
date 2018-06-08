#include <stdio.h>
#include <stdlib.h>

int perfectos(int dividendo, int divisor){
    if(divisor <= 0)
        return 0;
    return(dividendo % divisor == 0 ? divisor : 0) + perfectos(dividendo,divisor-1);
}

    int main(){
    int num;
    printf("Introduce un numero: \n");
    scanf(" %i", &num);
    if(num=perfectos(num, num-1))
        printf("%i es un número perfecto", num);
    else
        printf("%i no es un número perfecto", num);

    return EXIT_SUCCESS;
}
