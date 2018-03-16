#include <stdio.h>
#include <stdlib.h>

void funcion (int *a, int *b){
    printf("dato 1: \n");
    scanf(" %i", a);
    printf("dato 2: \n");
    scanf(" %i", b);

}

int main(){
    int v1, v2;
    funcion(&v1, &v2);
    printf("\n");
    printf("dato 1: %i\n", v1);
    printf("dato 2: %i\n", v2);
    return EXIT_SUCCESS;
}
