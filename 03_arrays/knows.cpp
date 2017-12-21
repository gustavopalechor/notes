#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#define N 0x26


      int main(){
        char nombre[N];
            int lista[N];
            char no_[N] = {'p', 'e', 'p', 'e', '\0'};
            char nom[N] = "pepe";


        nom[3]='a'; //Despues de inicializar hay que ir celda a celda

        printf("Ocupa: %lu bytes.\n", sizeof(nombre));//sizeof nos indica cuantos bytes ocupa una variable
        printf("Ocupa: %xh bytes.\n", (int) sizeof(nombre));//%x lo que ocupa en bytes de hexadecimal
        printf("Ocupa: %lu bytes.\n", sizeof(lista));
        
        printf("Lista ocupa: %lu celdas.\n", sizeof(lista) / sizeof(int));
        printf("%c", nombre[0]);
        printf("%c", nombre[1]);
        printf("%c", nombre[2]);
        printf("%c", nombre[3]);
        printf("%c", nombre[4]);
        printf("%c", nombre[5]);
        
        printf("%s\n", nombre);

        bzero(lista, sizeof(lista));//llenamos lista con 0

        memset(lista +1, 3, 3); //declaramos primero lo que queremos que aparezca y luego la cantidad de veces que se repita
        printf("%x.", lista[0]);
        printf("%x.", lista[1]);
        printf("%x.", lista[2]);
        printf("%x.", lista[3]);
        printf("%x.", lista[4]);
        printf("%x.", lista[5]);
        printf("\n");

        printf("Dime tu nombre: ");
        fgets(nombre, N, stdin);//coge del tubo N caracteres y hay que declarar por que tubo debe de coger es decir stdin. y lo guarda en nombre es decir en la direccion de mememoria nombre se pone "dime tu nombre: "
        sprintf(nom, "hola, %s", nombre);
        printf("%s\n",nom);//con fprintf nos imprime en cualquier tuberia pero tenemos que declararla, con sprintf no imprime en pantalla imprime en la cadena de caracteres nombre, es decir, en la ram.
    return EXIT_SUCCESS;
}
