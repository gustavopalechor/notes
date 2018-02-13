#include <stdio.h>
#include <stdlib.h>

    int main(){
    int lado1;
    int lado2;;
    printf("Introduce el tamaño de un lado: \n");
    scanf(" %i", &lado1);

    for(int i=0; i<lado1; i++){
        for(int c=0; c<i; c++)
            printf("*");
        printf("\n");
    }


    return EXIT_SUCCESS;
}
