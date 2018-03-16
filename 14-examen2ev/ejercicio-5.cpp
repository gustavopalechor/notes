#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10
int main(){
    char *palabras[N];
    int len;
    for(int i=0; i<N; i++){

        printf("introduce una palabra: \n");
        scanf(" %s", palabras[i]);
        len = strlen(palabras[i]);
        palabras=(char *) realloc(palabras, (i+1) * sizeof(char *));
        strncpy();
    }
    for(int i=0; i<N; i++)
        printf("tu palabra es: %s", palabras[i]);


    return EXIT_SUCCESS;
}
