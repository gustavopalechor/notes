#include <stdio.h>
#include <stdlib.h>


int miau() {
    return 2;
}

void guau(int *p_var){
    printf(" %i \n", *p_var);
}

int main(){

    int b;
    int a = miau();
    printf(" introduce un numero : \n");
    scanf(" %i", &b);
    guau(&b);

    guau;

    return EXIT_SUCCESS;
}
