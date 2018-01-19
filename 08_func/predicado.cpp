#include <stdio.h>
#include <stdlib.h>

int resultado(int n1){

    return !(n1 % 2);
}

int main(){
    int n;

    printf("teclea un nùmero por favor: \n");
    scanf(" %i", &n);
    if (resultado(n))
        printf("Es par. \n");
    else
        printf("no es par. \n");

    return EXIT_SUCCESS;
}
