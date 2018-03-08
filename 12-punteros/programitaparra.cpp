#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100

    int main(){
    char **puntero= NULL;
    char nombre [N];
    int rel;
    printf("ingresa tu nombre: \n");
    fgets(nombre,N,stdin);

    rel = strlen(nombre);
  
    puntero=(char **) malloc (sizeof (char *));
   *puntero=(char*) malloc ((rel + 1) * sizeof (char));
    strncpy(*puntero,nombre,rel);
    *(*puntero+rel)='\0';
    
    printf(" %s", *puntero);

    printf("\n");
    printf("\n");

    printf("dime otro nombre: \n");
    fgets(*puntero+1,N,stdin);
    printf(" %s", *puntero+1);
    return EXIT_SUCCESS;
}
