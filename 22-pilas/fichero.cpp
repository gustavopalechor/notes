#include <stdio.h>
#include <stdlib.h>

    int main(){
    int contador;
    int letra;
    FILE *mi_tubo;
    contador = 0;
    mi_tubo= fopen("42302-0.txt", "r");

    while (letra!=EOF){
        letra = getc(mi_tubo);
        if (letra == ' ')
            contador++;
    }
    fseek(mi_tubo, 2, SEEK_END);
    printf("Esta palabra es: %li\n", &ftell(mi_tubo));
    printf("El numero total de palabras son: %i", contador);
    fclose(mi_tubo);
    return EXIT_SUCCESS;
}
