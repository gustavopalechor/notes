
#include <stdio.h>
#include <stdlib.h>

    int main(){
        char nombre[16];
        int num;
        char hexadecimal[256];

        printf("Entero: ");
        scanf(" %i", &num);
        scanf(" %s", nombre);
        printf("[%i] => %s,\n", num, nombre);

        printf("Hexadecimal: ");
        scanf(" %[0-9a-fA-F]", hexadecimal);
        printf("0x%sh\n", hexadecimal);

        //conjunto de seleccion inverso
        scanf(" %[^a-f]", hexadecimal);

        scanf(" %[^a-f]", nombre);
        gets(nombre, 16, stdin);

        scanf(" %i/%i/%*i", &dia, &mes, &año) //*: Caracter de supresion de asignación
        
    return EXIT_SUCCESS;
}
