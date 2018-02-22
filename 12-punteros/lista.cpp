#include <stdio.h>
#include <stdlib.h>

    int main(){
      char **lista = NULL;
      char buffer[N];
      int len;
    while(){
        printf("Dime tu nombre");
        fgets(buffer, N, stdin);
        len = strlen(buffer);
        algun_sitio =(char*) malloc(len * sizeof(char));      //devuelve lo introducido en buffer
        strncpy(algun_sitio, buffer, len-1);
        algun_sitio[len-1]= "\0";
    }

    return EXIT_SUCCESS;
}
